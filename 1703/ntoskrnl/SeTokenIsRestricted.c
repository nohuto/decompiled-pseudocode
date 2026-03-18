/*
 * XREFs of SeTokenIsRestricted @ 0x14012B990
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SeTokenCanImpersonate @ 0x14047EAA0 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     SeTokenIsAdmin @ 0x140560050 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405600D0 (SepIsImpersonationAllowedDueToCapability.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140560360 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtCompareTokens @ 0x1405614B4 (NtCompareTokens.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
