/*
 * XREFs of SeTokenIsRestricted @ 0x140063230
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1404DF338 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenIsAdmin @ 0x1404DFBC0 (SeTokenIsAdmin.c)
 *     NtCompareTokens @ 0x1404DFFD0 (NtCompareTokens.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405091A8 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     SeTokenCanImpersonate @ 0x140599E60 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
