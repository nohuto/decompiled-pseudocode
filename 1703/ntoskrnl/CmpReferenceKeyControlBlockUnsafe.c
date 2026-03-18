/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x140500604
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmpFreezeHive @ 0x1404CA998 (CmpFreezeHive.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1405C67A8 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1405C6820 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCloneToUnbackedKcb @ 0x140665800 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x14066D5A0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x140675970 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
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
