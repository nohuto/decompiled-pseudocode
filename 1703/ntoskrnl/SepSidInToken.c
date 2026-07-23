/*
 * XREFs of SepSidInToken @ 0x14012B964
 * Callers:
 *     SeTokenIsAdmin @ 0x140560050 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405600D0 (SepIsImpersonationAllowedDueToCapability.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14059AF88 (SepCheckForAllAppPackagesAceRemoval.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1406F5B50 (SepExamineSaclEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepSidInToken(__int64 a1, void *a2, void *a3, char a4, char a5, char a6)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a2, a3, a4, a5, a6);
}
