/*
 * XREFs of RawDispatch @ 0x1404948A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RawQueryInformation @ 0x1404944B0 (RawQueryInformation.c)
 *     RawReadWriteDeviceControl @ 0x140494AB4 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x140494B70 (RawCreate.c)
 *     RawClose @ 0x140494D08 (RawClose.c)
 *     RawCleanup @ 0x140494D90 (RawCleanup.c)
 *     RawQueryVolumeInformation @ 0x14049508C (RawQueryVolumeInformation.c)
 *     RawFileSystemControl @ 0x140495154 (RawFileSystemControl.c)
 *     RawSetInformation @ 0x14078108C (RawSetInformation.c)
 */

__int64 __fastcall RawDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  unsigned int MajorFunction; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int VolumeInformation; // eax
  unsigned int v11; // edx
  UCHAR v13; // al
  unsigned int v14; // r14d
  unsigned int v15; // [rsp+30h] [rbp-18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_WORD *)(a1 + 2) != 336
    || (v13 = CurrentStackLocation->MajorFunction, CurrentStackLocation->MajorFunction == 13)
    && CurrentStackLocation->MinorFunction == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = a1 + 336;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction > 9 )
    {
      v7 = MajorFunction - 10;
      if ( !v7 )
      {
        VolumeInformation = RawQueryVolumeInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_7;
      }
      v8 = v7 - 3;
      if ( !v8 )
      {
        VolumeInformation = RawFileSystemControl(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_7;
      }
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_6;
      v11 = v9 - 4;
      if ( !v11 )
      {
        VolumeInformation = RawCleanup((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_7;
      }
      if ( v11 == 9 )
      {
        if ( CurrentStackLocation->MinorFunction == 1 )
        {
          v15 = -2147483631;
          a2->IoStatus.Status = -2147483631;
          IofCompleteRequest(a2, 1);
          goto LABEL_30;
        }
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
        if ( (*(_DWORD *)(v5 + 104) & 2) != 0 )
        {
          v15 = -1073741202;
          a2->IoStatus.Status = -1073741202;
          IofCompleteRequest(a2, 1);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
          goto LABEL_30;
        }
        ++*(_DWORD *)(v5 + 112);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
        goto LABEL_6;
      }
LABEL_28:
      KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( MajorFunction != 9 )
    {
      if ( !CurrentStackLocation->MajorFunction )
      {
        VolumeInformation = RawCreate((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_7;
      }
      if ( MajorFunction == 2 )
      {
        VolumeInformation = RawClose((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_7;
      }
      if ( MajorFunction <= 2 )
        goto LABEL_28;
      if ( MajorFunction > 4 )
      {
        if ( MajorFunction == 5 )
        {
          VolumeInformation = RawQueryInformation(a1 + 336, (__int64)a2, (__int64)CurrentStackLocation);
          goto LABEL_7;
        }
        if ( MajorFunction == 6 )
        {
          VolumeInformation = RawSetInformation(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_7;
        }
        goto LABEL_28;
      }
    }
LABEL_6:
    VolumeInformation = RawReadWriteDeviceControl((PFSRTL_ADVANCED_FCB_HEADER)v5, a2);
LABEL_7:
    v15 = VolumeInformation;
LABEL_30:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v15;
  }
  if ( (v13 & 0xED) != 0 || v13 == 16 )
    v14 = -1073741808;
  else
    v14 = 0;
  a2->IoStatus.Status = v14;
  IofCompleteRequest(a2, 1);
  return v14;
}
