/*
 * XREFs of SepSidInToken @ 0x1400D5100
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x14046CC94 (SepCheckForCriticalAceRemoval.c)
 *     SeTokenIsAdmin @ 0x140513270 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405132F0 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14072D59C (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 */

bool __fastcall SepSidInToken(__int64 a1, void *a2, void *a3, char a4, char a5, char a6)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a2, a3, a4, a5, a6);
}
