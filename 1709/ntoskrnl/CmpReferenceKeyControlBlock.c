/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140563480
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x140100358 (CmpTransEnlistUowInKcb.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140562984 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1405979A8 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x14068ECFC (CmpResolveHiveLoadConflict.c)
 *     CmpCreateLayerLink @ 0x140697D90 (CmpCreateLayerLink.c)
 *     CmpPrepareDiscardReplacePost @ 0x140698100 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpRemoveFromDelayedDeref @ 0x140561668 (CmpRemoveFromDelayedDeref.c)
 */

char __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ecx
  signed __int32 v4; // ett
  PRTL_BALANCED_NODE v5; // rdi
  unsigned __int8 CurrentIrql; // si
  char v7; // al
  ULONG_PTR v8; // rcx
  _BYTE *v9; // rdx
  _QWORD *v10; // rax
  unsigned __int8 v11; // bl
  signed __int32 v12; // eax
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF

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
  if ( (*(_BYTE *)(BugCheckParameter2 + 56) & 1) != 0 && CmpRemoveFromDelayedDeref(BugCheckParameter2) )
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
        BYTE2(v5[1].Left) |= 1u;
      *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
      *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
      v7 = *(_BYTE *)(BugCheckParameter2 + 56);
      if ( (v7 & 2) != 0 )
      {
        v8 = BugCheckParameter2 + 216;
        if ( (v7 & 4) != 0 )
        {
          **(_BYTE **)v8 = 1;
          *(_BYTE *)(BugCheckParameter2 + 56) &= ~4u;
        }
        else
        {
          v9 = *(_BYTE **)v8;
          if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *(_QWORD **)(BugCheckParameter2 + 224), *v10 != v8) )
            __fastfail(3u);
          --CmpDelayedCloseElements;
          *v10 = v9;
          *((_QWORD *)v9 + 1) = v10;
          --qword_1407F4148;
        }
        *(_QWORD *)(BugCheckParameter2 + 224) = BugCheckParameter2 + 216;
        *(_QWORD *)v8 = v8;
        _InterlockedOr(v14, 0);
        *(_BYTE *)(BugCheckParameter2 + 56) &= ~2u;
      }
      v11 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
      *(&CmpDelayedCloseTableLock + 1) = 0LL;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
      if ( v12 )
        ExpReleaseFastMutexContended((__int64)&CmpDelayedCloseTableLock, v12);
      __writecr8(v11);
      KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
    }
    return 1;
  }
}
