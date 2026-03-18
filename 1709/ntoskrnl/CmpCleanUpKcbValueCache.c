/*
 * XREFs of CmpCleanUpKcbValueCache @ 0x1404789E8
 * Callers:
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14044BABC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14044BF50 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404766A8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140478800 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14047AD50 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405A55BC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405A6C70 (CmpCommitDeleteValueKeyUoW.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14069E158 (CmpRefreshHive.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140103850 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140478AA0 (CmpDelayDerefKeyControlBlock.c)
 */

void __fastcall CmpCleanUpKcbValueCache(__int64 a1)
{
  __int64 v2; // rsi
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v7; // rcx

  if ( (*(_DWORD *)(a1 + 176) & 0x400000) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 96);
    if ( (v2 & 1) == 0 || v2 == 0xFFFFFFFFLL )
    {
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
      {
        IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite((PERESOURCE)&CmpRegistryLock);
        v4 = *(_QWORD *)(a1 + 96);
        if ( IsResourceAcquiredExclusiveLite )
          CmpDereferenceKeyControlBlockWithLock(v4);
        else
          CmpDelayDerefKeyControlBlock(v4);
        *(_WORD *)(a1 + 4) &= ~8u;
      }
    }
    else
    {
      v5 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 88); i = (unsigned int)(i + 1) )
      {
        v7 = *(_QWORD *)(v5 + 8 * i + 8);
        if ( (v7 & 1) != 0 && v7 != 0xFFFFFFFFLL )
          ExFreePoolWithTag((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL), 0);
      }
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFFEuLL), 0);
      *(_QWORD *)(a1 + 96) = 0xFFFFFFFFLL;
    }
  }
}
