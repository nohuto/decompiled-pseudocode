/*
 * XREFs of MouseStart @ 0x1C0003F10
 * Callers:
 *     MousePnP @ 0x1C00011B0 (MousePnP.c)
 *     MouseStartWorker @ 0x1C0004170 (MouseStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00016D0 (__security_check_cookie.c)
 *     memset @ 0x1C0001B40 (memset.c)
 *     MouseClassCheckWaitWakeEnabled @ 0x1C000255C (MouseClassCheckWaitWakeEnabled.c)
 *     MouEnableDisablePort @ 0x1C000B010 (MouEnableDisablePort.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000BEE8 (MouseClassCreateWaitWakeIrp.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000C828 (MouseClassGetWaitWakeEnableState.c)
 *     MouseSendIrpSynchronously @ 0x1C000CD78 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MouseStart(__int64 a1, __int64 a2)
{
  IRP *v2; // rbx
  int *v3; // rdi
  NTSTATUS Status; // ebp
  ULONG_PTR Information; // r15
  char v6; // si
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  char *v9; // r14
  char v10; // bl
  __int64 v11; // rcx
  KIRQL v12; // al
  _OWORD v14[4]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(IRP **)(a2 + 8);
  v3 = *(int **)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status >= 0 )
  {
    Information = v2->IoStatus.Information;
    v2->IoStatus.Information = 0LL;
    v2->IoStatus.Status = -1073741637;
    memset(v14, 0, sizeof(v14));
    LODWORD(v14[0]) = 65600;
    *((_QWORD *)&v14[0] + 1) = -1LL;
    v6 = 1;
    CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 9;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v14;
    if ( (int)MouseSendIrpSynchronously(*((PDEVICE_OBJECT *)v3 + 2), v2) >= 0 && v2->IoStatus.Status >= 0 )
    {
      v3[67] = v14[3];
      v3[68] = HIDWORD(v14[2]);
      *(_OWORD *)(v3 + 62) = v14[1];
      v3[66] = v14[2];
    }
    v2->IoStatus.Status = Status;
    Status = 0;
    v2->IoStatus.Information = Information;
    *((_BYTE *)v3 + 65) = 1;
    if ( v3[67] <= 1 || v3[68] <= 1 )
    {
      v3[46] = 1;
    }
    else
    {
      v3[46] = 2;
      MouseClassGetWaitWakeEnableState(v3);
    }
    v8 = *(struct _DEVICE_OBJECT **)v3;
    *((_QWORD *)v3 + 29) = 0LL;
    *((_QWORD *)v3 + 30) = 0LL;
    *((_QWORD *)v3 + 24) = &MouseClassWmiGuidList;
    *((_QWORD *)v3 + 25) = MouseClassQueryWmiRegInfo;
    *((_QWORD *)v3 + 26) = MouseClassQueryWmiDataBlock;
    *((_QWORD *)v3 + 27) = MouseClassSetWmiDataBlock;
    *((_QWORD *)v3 + 28) = MouseClassSetWmiDataItem;
    IoWMIRegistrationControl(v8, 1u);
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      }
      else
      {
        v9 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[45];
        v10 = v9[16];
        v9[16] = 1;
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( !v10 )
        {
          LOBYTE(v11) = 1;
          Status = MouEnableDisablePort(v11, 0LL, v3, v9);
          if ( Status < 0 )
            v9[16] = 0;
        }
      }
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      Status = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 22), 1u);
    }
    if ( v3[67] > 1 && v3[68] > 1 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 9);
      if ( !*((_QWORD *)v3 + 35) || *((_BYTE *)v3 + 288) )
        v6 = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v3 + 9, v12);
      if ( !v6 && MouseClassCheckWaitWakeEnabled((__int64)v3) )
        MouseClassCreateWaitWakeIrp(v3);
    }
  }
  return (unsigned int)Status;
}
