/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x14054CCC0
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x14011E248 (CmpTransEnlistUowInKcb.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140459E68 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140572568 (CmpFindSubkeyInHashByChildCell.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1406653F8 (CmpResolveHiveLoadConflict.c)
 *     CmpCreateLayerLink @ 0x14066D704 (CmpCreateLayerLink.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x14066DBF0 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404CCC8C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpRemoveFromDelayedDeref @ 0x14054DF38 (CmpRemoveFromDelayedDeref.c)
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
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, (__int64)v5);
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
          v10 = *(_QWORD **)(BugCheckParameter2 + 224);
          if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v10 != v8 )
            __fastfail(3u);
          --CmpDelayedCloseElements;
          *v10 = v9;
          *((_QWORD *)v9 + 1) = v10;
          --qword_1407AD0C8;
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
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v12);
      __writecr8(v11);
      KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
    }
    return 1;
  }
}
