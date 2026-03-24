/*
 * XREFs of KeyboardClassCreate @ 0x1C00018B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00017D0 (WPP_RECORDER_SF_qq.c)
 *     KeyboardClassLogError @ 0x1C00044FC (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00053A0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqdq @ 0x1C0006114 (WPP_RECORDER_SF_qqdq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000633C (WPP_RECORDER_SF_qqq.c)
 *     KbdEnableDisablePort @ 0x1C000CB40 (KbdEnableDisablePort.c)
 */

__int64 __fastcall KeyboardClassCreate(__int64 a1, IRP *a2)
{
  IRP *v2; // rbx
  char v4; // r13
  __int64 v5; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IO_REMOVE_LOCK *v7; // r12
  NTSTATUS v8; // ebp
  KIRQL v9; // al
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  unsigned int v16; // r12d
  char *v17; // rsi
  char v18; // di
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  unsigned int v22; // edi
  ULONG RemlockSize; // [rsp+20h] [rbp-68h]
  struct _IO_REMOVE_LOCK *v24; // [rsp+98h] [rbp+10h]

  v2 = a2;
  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  v5 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  if ( v2->RequestorMode == 1
    && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 1) != 0
    && (CurrentStackLocation->Parameters.Create.Options & 1) == 0 )
  {
    v8 = -1073741790;
    goto LABEL_15;
  }
  v7 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
  v24 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), v2, File, 1u, 0x20u);
  if ( v8 >= 0 )
  {
    if ( *(_BYTE *)(v5 + 64) && !*(_BYTE *)(v5 + 65) )
    {
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 2, 2, 30);
      v8 = -1073741823;
    }
    else
    {
      CurrentStackLocation->Parameters.Create.Options &= ~1u;
      if ( *(_QWORD *)v5 == *(_QWORD *)(v5 + 8) && SeSinglePrivilegeCheck((LUID)7LL, v2->RequestorMode) )
      {
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 160));
        CurrentStackLocation->FileObject->FsContext2 = DriverEntry;
        ++*(_DWORD *)(v5 + 80);
        KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 160), v9);
      }
      ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v5 )
      {
        if ( ++HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) != 1 )
        {
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          goto LABEL_14;
        }
        if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        {
          v16 = 0;
          do
          {
            v17 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v16;
            if ( !v17[19] )
            {
              v18 = v17[16];
              v17[16] = 1;
              ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              if ( !v18 )
              {
                LOBYTE(v20) = 1;
                v8 = KbdEnableDisablePort(v20, v2, *((_QWORD *)v17 + 1), v17);
              }
              if ( v8 >= 0 )
              {
                v4 = 1;
              }
              else
              {
                WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v19, v21, 31);
                KeyboardClassLogError(a1, -1073414135, 10120, v8, 0, 0LL, CurrentStackLocation->MajorFunction);
                v17[16] = 0;
              }
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            }
            ++v16;
          }
          while ( v16 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
          v7 = v24;
        }
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( !v4 )
          goto LABEL_14;
      }
      else
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( *(_QWORD *)(v5 + 8) != a1 )
        {
          ++v2->CurrentLocation;
          ++v2->Tail.Overlay.CurrentStackLocation;
          v22 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 16), v2);
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), v2, 0x20u);
          return v22;
        }
        LOBYTE(v10) = 1;
        v8 = KbdEnableDisablePort(v10, v2, v5, &CurrentStackLocation->FileObject);
        if ( v8 < 0 )
        {
          WPP_RECORDER_SF_qqdq(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            v12,
            v13,
            RemlockSize,
            a1,
            (char)v2,
            v8,
            *(_QWORD *)(v5 + 16));
          goto LABEL_14;
        }
      }
      v8 = 0;
    }
LABEL_14:
    IoReleaseRemoveLockEx(v7, v2, 0x20u);
  }
LABEL_15:
  v2->IoStatus.Status = v8;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v14, 2LL);
  }
  return (unsigned int)v8;
}
