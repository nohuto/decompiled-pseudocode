/*
 * XREFs of MouseStart @ 0x1C0002840
 * Callers:
 *     MousePnP @ 0x1C0001420 (MousePnP.c)
 *     MouseStartWorker @ 0x1C00027C0 (MouseStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002AC0 (__security_check_cookie.c)
 *     memset @ 0x1C0002FC0 (memset.c)
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000CE30 (MouseClassCreateWaitWakeIrp.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000CE80 (MouseClassGetWaitWakeEnableState.c)
 *     MouseSendIrpSynchronously @ 0x1C000D0B0 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MouseStart(__int64 a1, __int64 a2)
{
  IRP *v2; // rdi
  int *v3; // rbx
  int Status; // esi
  NTSTATUS v5; // ebp
  ULONG_PTR Information; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  KIRQL v9; // al
  bool v10; // di
  KIRQL v11; // al
  char v12; // di
  char v14; // di
  char *v15; // rsi
  __int64 v16; // rcx
  _OWORD v17[4]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(IRP **)(a2 + 8);
  v3 = *(int **)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status < 0 )
    return (unsigned int)Status;
  v5 = 0;
  Information = v2->IoStatus.Information;
  v2->IoStatus.Status = -1073741637;
  v2->IoStatus.Information = 0LL;
  memset(v17, 0, sizeof(v17));
  LODWORD(v17[0]) = 65600;
  *((_QWORD *)&v17[0] + 1) = -1LL;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v17;
  if ( (int)MouseSendIrpSynchronously(*((PDEVICE_OBJECT *)v3 + 2), v2) >= 0 && v2->IoStatus.Status >= 0 )
  {
    v3[67] = v17[3];
    v3[68] = HIDWORD(v17[2]);
    *(_OWORD *)(v3 + 62) = v17[1];
    v3[66] = v17[2];
  }
  v2->IoStatus.Information = Information;
  v2->IoStatus.Status = Status;
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
  *((_QWORD *)v3 + 24) = &MouseClassWmiGuidList;
  *((_QWORD *)v3 + 29) = 0LL;
  *((_QWORD *)v3 + 25) = MouseClassQueryWmiRegInfo;
  *((_QWORD *)v3 + 26) = MouseClassQueryWmiDataBlock;
  *((_QWORD *)v3 + 27) = MouseClassSetWmiDataBlock;
  *((_QWORD *)v3 + 28) = MouseClassSetWmiDataItem;
  *((_QWORD *)v3 + 30) = 0LL;
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
      v14 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[45] + 16);
      v15 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[45];
      v15[16] = 1;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v14 )
      {
        LOBYTE(v16) = 1;
        v5 = MouEnableDisablePort(v16, 0LL, v3, v15);
        if ( v5 < 0 )
          v15[16] = 0;
      }
    }
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 22), 1u);
  }
  if ( v3[67] > 1 && v3[68] > 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 9);
    v10 = *((_QWORD *)v3 + 35) && !*((_BYTE *)v3 + 288);
    KeReleaseSpinLock((PKSPIN_LOCK)v3 + 9, v9);
    if ( !v10 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 9);
      v12 = *((_BYTE *)v3 + 345);
      KeReleaseSpinLock((PKSPIN_LOCK)v3 + 9, v11);
      if ( v12 )
        MouseClassCreateWaitWakeIrp(v3);
    }
  }
  return (unsigned int)v5;
}
