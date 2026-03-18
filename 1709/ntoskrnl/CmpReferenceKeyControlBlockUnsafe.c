/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpFreezeHive @ 0x14046ED40 (CmpFreezeHive.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1405D9404 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1405D947C (CmpCreateSiloKeyLockEntry.c)
 *     CmpCloneToUnbackedKcb @ 0x14068F450 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x140697C10 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14069AB9C (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x14069FEA0 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *a1;
  while ( v1 != -1 )
  {
    if ( !v1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v2 = v1;
    v1 = _InterlockedCompareExchange(a1, v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
