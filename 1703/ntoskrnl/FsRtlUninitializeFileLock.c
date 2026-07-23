/*
 * XREFs of FsRtlUninitializeFileLock @ 0x14003B1D0
 * Callers:
 *     FsRtlFreeFileLock @ 0x14003B1A0 (FsRtlFreeFileLock.c)
 * Callees:
 *     RtlDeleteNoSplay @ 0x14000CE30 (RtlDeleteNoSplay.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     FsRtlCompleteLockIrpReal @ 0x14014A1E8 (FsRtlCompleteLockIrpReal.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rbx
  KIRQL v3; // r12
  _RTL_SPLAY_LINKS **v4; // r14
  _RTL_SPLAY_LINKS *v5; // rsi
  PRTL_SPLAY_LINKS *v6; // rsi
  PRTL_SPLAY_LINKS v7; // rdi
  _RTL_SPLAY_LINKS *v8; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  KIRQL v12; // dl
  char v13; // [rsp+60h] [rbp+8h] BYREF

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
      v8 = v5 - 1;
      while ( v8->Parent )
      {
        Parent = v8->Parent;
        v8->Parent = v8->Parent->Parent;
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
    while ( *((_QWORD *)LockInformation + 6) )
    {
      v10 = (_QWORD *)*((_QWORD *)LockInformation + 6);
      if ( v10 )
        *((_QWORD *)LockInformation + 6) = *v10;
      v11 = v10[3];
      KxReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3);
      *(_BYTE *)(v11 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL);
      v12 = *(_BYTE *)(v11 + 69);
      if ( *(_BYTE *)(v11 + 68) )
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
        *v10 = FsRtlFileLockCancelCollideList;
        FsRtlFileLockCancelCollideList = (__int64)v10;
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
        KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
        __writecr8(v3);
        *(_QWORD *)(v11 + 56) = 0LL;
        FsRtlCompleteLockIrpReal(*((_QWORD *)LockInformation + 1), v10[2], v11, 3221225598LL, &v13, 0LL);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v10);
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
