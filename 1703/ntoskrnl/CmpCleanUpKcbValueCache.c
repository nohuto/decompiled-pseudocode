/*
 * XREFs of CmpCleanUpKcbValueCache @ 0x140491380
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14048FD04 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404CC0FC (CmpCommitSetValueKeyUoW.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404D0DFC (CmpRebuildKcbCacheFromNode.c)
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140573C38 (CmpCommitDeleteValueKeyUoW.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140674070 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14067450C (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x14000BB90 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14044CC04 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 */

void __fastcall CmpCleanUpKcbValueCache(__int64 a1)
{
  __int64 v2; // rdi
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  volatile signed __int32 *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 i; // rsi
  __int64 v7; // rcx

  if ( (*(_DWORD *)(a1 + 176) & 0x400000) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 96);
    if ( (v2 & 1) == 0 || v2 == 0xFFFFFFFFLL )
    {
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
      {
        IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite((PERESOURCE)&CmpRegistryLock);
        v4 = *(volatile signed __int32 **)(a1 + 96);
        if ( IsResourceAcquiredExclusiveLite )
          CmpDereferenceKeyControlBlockWithLock(v4, 1u);
        else
          CmpDelayDerefKeyControlBlock((__int64)v4);
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
