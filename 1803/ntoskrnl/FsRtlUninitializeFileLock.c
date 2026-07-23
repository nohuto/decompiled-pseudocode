/*
 * XREFs of FsRtlUninitializeFileLock @ 0x1400D1250
 * Callers:
 *     FsRtlFreeFileLock @ 0x1400D1220 (FsRtlFreeFileLock.c)
 * Callees:
 *     FsRtlCompleteLockIrpReal @ 0x140001FE8 (FsRtlCompleteLockIrpReal.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDeleteNoSplay @ 0x1400B0DD0 (RtlDeleteNoSplay.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rsi
  KIRQL v3; // r12
  _RTL_SPLAY_LINKS **v4; // r14
  _RTL_SPLAY_LINKS *v5; // rbx
  PRTL_SPLAY_LINKS *v6; // rdi
  PRTL_SPLAY_LINKS v7; // rbx
  _QWORD *i; // rdi
  _RTL_SPLAY_LINKS *v9; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  __int64 v11; // rbp
  char v12; // bl
  NTSTATUS v13; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = (char *)FileLock->LockInformation;
  if ( LockInformation )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
    KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    v4 = (_RTL_SPLAY_LINKS **)(LockInformation + 32);
    while ( 1 )
    {
      v5 = *v4;
      if ( !*v4 )
        break;
      v9 = v5 - 1;
      while ( 1 )
      {
        Parent = v9->Parent;
        if ( !v9->Parent )
          break;
        v9->Parent = Parent->Parent;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      }
      RtlDeleteNoSplay(v5, (PRTL_SPLAY_LINKS *)LockInformation + 4);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v5[-1]);
    }
    v6 = (PRTL_SPLAY_LINKS *)(LockInformation + 40);
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      RtlDeleteNoSplay(*v6, (PRTL_SPLAY_LINKS *)LockInformation + 5);
      ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v7);
    }
    for ( i = (_QWORD *)*((_QWORD *)LockInformation + 6); i; i = (_QWORD *)*((_QWORD *)LockInformation + 6) )
    {
      *((_QWORD *)LockInformation + 6) = *i;
      v11 = i[3];
      KxReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3);
      *(_BYTE *)(v11 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL);
      v12 = *(_BYTE *)(v11 + 68);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v11 + 69));
      if ( v12 )
      {
        *i = FsRtlFileLockCancelCollideList;
        FsRtlFileLockCancelCollideList = (__int64)i;
      }
      else
      {
        KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
        __writecr8(v3);
        *(_QWORD *)(v11 + 56) = 0LL;
        FsRtlCompleteLockIrpReal(
          *((__int64 (__fastcall **)(__int64, IRP *))LockInformation + 1),
          i[2],
          (IRP *)v11,
          -1073741698,
          &v13,
          0LL);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, i);
        v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
    __writecr8(v3);
    ExFreeToNPagedLookasideList(&FsRtlLockInfoLookasideList, LockInformation);
    FileLock->LockInformation = 0LL;
  }
}
