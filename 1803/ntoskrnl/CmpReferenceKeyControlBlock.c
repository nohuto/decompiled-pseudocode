/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x14052AA50
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x14007C9A4 (CmpTransEnlistUowInKcb.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404ACF50 (CmpFindSubKeyByNumberEx.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140581A64 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405E2080 (CmpFindSubkeyInHashByChildCell.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmpCreateLayerLink @ 0x1406FAD44 (CmpCreateLayerLink.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x1406FB240 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404959F8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpRemoveFromDelayedDeref @ 0x14058258C (CmpRemoveFromDelayedDeref.c)
 */

char __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ecx
  signed __int32 v4; // ett
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // si
  char v7; // al
  _QWORD *v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  _QWORD *v11; // rdx
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax
  signed __int32 v15[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  v2 = *(_DWORD *)BugCheckParameter2;
  v3 = *(_DWORD *)BugCheckParameter2 + 1;
  if ( v2 == -1 )
    return 0;
  while ( 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v3, v2);
    if ( v4 == v2 )
      break;
    v3 = v2 + 1;
    if ( v2 == -1 )
      return 0;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 56) & 1) != 0 && (unsigned __int8)CmpRemoveFromDelayedDeref(BugCheckParameter2) )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
    return 1;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 56) & 2) != 0 )
    {
      v5 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v5);
      if ( v5 )
        *(_BYTE *)(v5 + 26) |= 1u;
      *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
      *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
      v7 = *(_BYTE *)(BugCheckParameter2 + 56);
      if ( (v7 & 2) != 0 )
      {
        v8 = (_QWORD *)(BugCheckParameter2 + 216);
        v9 = (v7 & 4) == 0;
        v10 = *(_QWORD *)(BugCheckParameter2 + 216);
        if ( v9 )
        {
          if ( *(_QWORD **)(v10 + 8) != v8 || (v11 = *(_QWORD **)(BugCheckParameter2 + 224), (_QWORD *)*v11 != v8) )
            __fastfail(3u);
          --CmpDelayedCloseElements;
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          --qword_140862A88;
        }
        else
        {
          *(_BYTE *)v10 = 1;
          *(_BYTE *)(BugCheckParameter2 + 56) &= ~4u;
        }
        *(_QWORD *)(BugCheckParameter2 + 224) = BugCheckParameter2 + 216;
        *v8 = v8;
        _InterlockedOr(v15, 0);
        *(_BYTE *)(BugCheckParameter2 + 56) &= ~2u;
      }
      v12 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
      *(&CmpDelayedCloseTableLock + 1) = 0LL;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
      if ( v13 )
        ExpReleaseFastMutexContended((__int64)&CmpDelayedCloseTableLock, v13);
      __writecr8(v12);
      KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
    }
    return 1;
  }
}
