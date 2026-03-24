/*
 * XREFs of KeyboardClassClose @ 0x1C00016A0
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassLogError @ 0x1C00044FC (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00053A0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000633C (WPP_RECORDER_SF_qqq.c)
 *     KbdEnableDisablePort @ 0x1C000CB40 (KbdEnableDisablePort.c)
 */

NTSTATUS __fastcall KeyboardClassClose(__int64 a1, IRP *a2)
{
  IRP *v2; // rsi
  int v3; // ebx
  char v4; // r12
  __int64 v6; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  KIRQL v8; // dl
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdx
  unsigned int i; // r15d
  char *v14; // r14
  char v15; // di
  int v16; // edx
  int v17; // r8d
  void *v18; // rcx

  v2 = a2;
  v3 = 0;
  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  v6 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  if ( *(_QWORD *)v6 == *(_QWORD *)(v6 + 8) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 160));
    if ( DriverEntry == CurrentStackLocation->FileObject->FsContext2 )
    {
      --*(_DWORD *)(v6 + 80);
      CurrentStackLocation->FileObject->FsContext2 = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 160), v8);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v6 )
  {
    if ( --HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      goto LABEL_11;
    }
    for ( i = 0; i < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext); ++i )
    {
      v14 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * i;
      if ( !v14[19] )
      {
        v15 = v14[16];
        v14[16] = 0;
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( v15 )
        {
          v18 = (void *)_InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v14 + 1) + 328LL), 0LL);
          if ( v18 )
            IoUnregisterPlugPlayNotification(v18);
          v3 = KbdEnableDisablePort(0LL, v2, *((_QWORD *)v14 + 1), v14);
        }
        if ( v3 >= 0 )
        {
          v4 = 1;
        }
        else
        {
          WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v16, v17, 35);
          KeyboardClassLogError(a1, -1073414134, 10120, v3, 0, 0LL, 0);
        }
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      }
    }
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( !v4 )
      goto LABEL_11;
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)(v6 + 8) != a1 )
    {
      ++v2->CurrentLocation;
      ++v2->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 16), v2);
    }
    v3 = KbdEnableDisablePort(0LL, v2, v6, &CurrentStackLocation->FileObject);
    if ( v3 < 0 )
    {
      WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 36);
      KeyboardClassLogError(a1, -1073414134, 10120, v3, 0, 0LL, CurrentStackLocation->MajorFunction);
      goto LABEL_11;
    }
  }
  v3 = 0;
LABEL_11:
  v2->IoStatus.Status = v3;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v11, 2LL);
  }
  return v3;
}
