/*
 * XREFs of KeyboardAddDeviceEx @ 0x1C000C550
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000C010 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDevice @ 0x1C000C2C0 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0001A60 (WPP_RECORDER_SF_S.c)
 *     memmove @ 0x1C0002AC0 (memmove.c)
 *     memset @ 0x1C0002E00 (memset.c)
 *     KeyboardClassLogError @ 0x1C00044FC (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00053A0 (WPP_RECORDER_SF_.c)
 *     KbdSendConnectRequest @ 0x1C000E2F4 (KbdSendConnectRequest.c)
 */

__int64 __fastcall KeyboardAddDeviceEx(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS Status; // edi
  __int64 v7; // rdx
  __int64 v8; // rsi
  struct _DEVICE_OBJECT *v9; // rdx
  IRP *v10; // rax
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  int v13; // edx
  int v14; // r8d
  unsigned int v16; // r15d
  PVOID PoolWithTag; // r12
  __int64 v18; // rcx
  char v19; // dl
  int OutputBuffer; // [rsp+20h] [rbp-A8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-78h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-58h] BYREF

  Status = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v8 = a1;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)v8;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == a1 )
    goto LABEL_14;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels != v8 )
  {
    if ( a1 != v8 )
      return (unsigned int)Status;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v7, 3LL);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v9 = *(struct _DEVICE_OBJECT **)(a1 + 16);
    InputBuffer[0] = *(_QWORD *)(a1 + 8);
    InputBuffer[1] = KeyboardClassServiceCallback;
    v10 = IoBuildDeviceIoControlRequest(0xB0203u, v9, InputBuffer, 0x10u, 0LL, 0, 1u, &Event, &IoStatusBlock);
    if ( v10 )
    {
      v12 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 16), v10);
      if ( v12 == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      else
        IoStatusBlock.Status = v12;
    }
    else
    {
      IoStatusBlock.Status = -1073741670;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v11, 3LL);
    }
    Status = IoStatusBlock.Status;
LABEL_14:
    if ( a1 == v8 )
    {
      Status = RtlWriteRegistryValue(4u, DestinationString.Buffer, a2, 1u, P, (unsigned __int16)word_1C00092C8 + 2);
      if ( Status < 0 )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 15, OutputBuffer, (__int64)a2);
        KeyboardClassLogError((void *)a1, -2147155963, 10014, Status, 0, 0LL, 0);
      }
      else
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 16, OutputBuffer, (__int64)a2);
      }
    }
    return (unsigned int)Status;
  }
  Status = KbdSendConnectRequest(a1);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  v16 = 0;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v16 + 19) )
    {
      if ( ++v16 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_23;
    }
    *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v16 + 19) = 0;
  }
LABEL_23:
  if ( v16 != LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
LABEL_29:
    *(_DWORD *)(a1 + 196) = v16;
    v18 = 3LL * v16;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v18 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v18) = a3;
    v19 = *(_BYTE *)(*(_QWORD *)v8 + 76LL);
    if ( v19 < *(char *)(*(_QWORD *)a1 + 76LL) )
      v19 = *(_BYTE *)(*(_QWORD *)a1 + 76LL);
    *(_BYTE *)(*(_QWORD *)v8 + 76LL) = v19;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_14;
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1),
                  0x4364624Bu);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1));
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      memmove(PoolWithTag, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
      ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
    }
    ++LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)PoolWithTag;
    goto LABEL_29;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  return 3221225626LL;
}
