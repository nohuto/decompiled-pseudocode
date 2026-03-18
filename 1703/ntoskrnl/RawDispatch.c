/*
 * XREFs of RawDispatch @ 0x1404219E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RawReadWriteDeviceControl @ 0x140421BE8 (RawReadWriteDeviceControl.c)
 *     RawClose @ 0x140421CC0 (RawClose.c)
 *     RawCreate @ 0x140421D48 (RawCreate.c)
 *     RawCleanup @ 0x140421EB0 (RawCleanup.c)
 *     RawQueryVolumeInformation @ 0x140421FDC (RawQueryVolumeInformation.c)
 *     RawFileSystemControl @ 0x14042228C (RawFileSystemControl.c)
 *     RawQueryInformation @ 0x1406E53B0 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1406E5454 (RawSetInformation.c)
 */

__int64 __fastcall RawDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  unsigned int MajorFunction; // edx
  unsigned int VolumeInformation; // eax
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
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
      v8 = MajorFunction - 10;
      if ( !v8 )
      {
        VolumeInformation = RawQueryVolumeInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_7;
      }
      v9 = v8 - 3;
      if ( !v9 )
      {
        VolumeInformation = RawFileSystemControl(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_7;
      }
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_6;
      v11 = v10 - 4;
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
          goto LABEL_31;
        }
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
        if ( (*(_DWORD *)(v5 + 104) & 2) != 0 )
        {
          v15 = -1073741202;
          a2->IoStatus.Status = -1073741202;
          IofCompleteRequest(a2, 1);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
          goto LABEL_31;
        }
        ++*(_DWORD *)(v5 + 112);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
        goto LABEL_6;
      }
    }
    else
    {
      if ( MajorFunction == 9 )
        goto LABEL_6;
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
      if ( MajorFunction > 2 )
      {
        if ( MajorFunction <= 4 )
        {
LABEL_6:
          VolumeInformation = RawReadWriteDeviceControl((PFSRTL_ADVANCED_FCB_HEADER)v5, a2);
LABEL_7:
          v15 = VolumeInformation;
LABEL_31:
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return v15;
        }
        if ( MajorFunction == 5 )
        {
          VolumeInformation = RawQueryInformation(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_7;
        }
        if ( MajorFunction == 6 )
        {
          VolumeInformation = RawSetInformation(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_7;
        }
      }
    }
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v13 & 0xED) != 0 || v13 == 16 )
    v14 = -1073741808;
  else
    v14 = 0;
  a2->IoStatus.Status = v14;
  IofCompleteRequest(a2, 1);
  return v14;
}
