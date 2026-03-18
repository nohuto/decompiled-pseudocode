/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140063250
 * Callers:
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1404DF338 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtCompareTokens @ 0x1404DFFD0 (NtCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     SeTokenCanImpersonate @ 0x140599E60 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
