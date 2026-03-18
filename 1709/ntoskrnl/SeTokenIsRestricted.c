/*
 * XREFs of SeTokenIsRestricted @ 0x1400D5140
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x140512FAC (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x140513270 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405132F0 (SepIsImpersonationAllowedDueToCapability.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14051357C (SepNewTokenAsRestrictedAsProcessToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
