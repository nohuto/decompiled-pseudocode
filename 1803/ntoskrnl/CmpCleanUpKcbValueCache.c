/*
 * XREFs of CmpCleanUpKcbValueCache @ 0x1404A99D4
 * Callers:
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1404A3C14 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404A9A60 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14054F694 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405DF3F0 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405DF734 (CmpCommitDeleteValueKeyUoW.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x1407042E8 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1400A4810 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404A9930 (CmpDelayDerefKeyControlBlock.c)
 */

void __fastcall CmpCleanUpKcbValueCache(__int64 a1)
{
  __int64 v2; // rcx
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  ULONG_PTR v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
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
      v5 = 0LL;
      v6 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_DWORD *)(a1 + 88) )
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 8 * v5 + 8);
          if ( (v7 & 1) != 0 && v7 != 0xFFFFFFFFLL )
            ExFreePoolWithTag((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL), 0);
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)(a1 + 88) );
        v2 = *(_QWORD *)(a1 + 96);
      }
      ExFreePoolWithTag((PVOID)(v2 & 0xFFFFFFFFFFFFFFFEuLL), 0);
      *(_QWORD *)(a1 + 96) = 0xFFFFFFFFLL;
    }
  }
}
