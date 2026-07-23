/*
 * XREFs of SepSidInToken @ 0x140063264
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x14005EAA0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14005F060 (SepNormalAccessCheck.c)
 *     SepTokenIsOwner @ 0x140063010 (SepTokenIsOwner.c)
 *     SepCheckForCriticalAceRemoval @ 0x140063350 (SepCheckForCriticalAceRemoval.c)
 *     SepMaximumAccessCheckEx @ 0x140149980 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140149AA0 (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x14029F944 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x1402C4330 (AuthzBasepMemberOf.c)
 *     SeTokenIsAdmin @ 0x1404DFBC0 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405091A8 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x140790F20 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140791850 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14005E750 (SepSidInTokenSidHash.c)
 */

char __fastcall SepSidInToken(__int64 a1, void *a2, void *a3, char a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a2, a3, a4, a5, a6, a7);
}
