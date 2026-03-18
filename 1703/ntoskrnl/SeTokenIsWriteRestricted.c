/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14012B9B0
 * Callers:
 *     SeTokenCanImpersonate @ 0x14047EAA0 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140560360 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtCompareTokens @ 0x1405614B4 (NtCompareTokens.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((unsigned __int8 *)Token + 200) >> 3) & 1;
}
