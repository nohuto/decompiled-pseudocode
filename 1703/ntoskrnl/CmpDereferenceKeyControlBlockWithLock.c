/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x140490F80
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404CACEC (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x14066575C (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x14066D480 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x14066D5A0 (CmpCommitDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x14066DBF0 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140674188 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlockWithLock(volatile signed __int32 *P, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  int v5; // ecx
  int v6; // ett
  _BOOL8 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax

  LODWORD(result) = *P;
  v3 = a2;
  do
  {
    v5 = result - 1;
    v6 = result;
    result = (unsigned int)_InterlockedCompareExchange(P, result - 1, result);
  }
  while ( v6 != (_DWORD)result );
  if ( !v5 )
  {
    if ( (P[44] & 0x40000) != 0 )
    {
      v9 = *((_QWORD *)P + 3);
      CmpCleanUpKcbCacheWithLock((ULONG_PTR)P);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v9 + 144) |= 0x80u;
      *(_QWORD *)(v9 + 5424) = CurrentThread;
      *(_DWORD *)(v9 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 5500), 1u) & 0x7F) + 5504) = 31;
      result = *(unsigned int *)(v9 + 144);
      if ( (result & 0x20) == 0 )
      {
        result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 5496), 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          return CmpDeleteHive(v9);
      }
    }
    else
    {
      v7 = 0LL;
      v8 = *((_DWORD *)P + 1);
      if ( (v8 & 0x20) == 0 )
        v7 = (v8 & 0x20000) == 0;
      if ( CmpHoldLazyFlush && (*((_WORD *)P + 89) & 0x10) == 0 && (P[1] & 8) == 0 || !v7 )
      {
        CmpCleanUpKcbCacheWithLock((ULONG_PTR)P);
        result = (__int64)KeGetCurrentThread();
        if ( *((_QWORD *)P + 6) != result && (P[1] & 0x80000) != 0 )
          return CmpFreeKeyControlBlock((PVOID)P);
      }
      else
      {
        return CmpAddToDelayedClose(P, v7, v3);
      }
    }
  }
  return result;
}
