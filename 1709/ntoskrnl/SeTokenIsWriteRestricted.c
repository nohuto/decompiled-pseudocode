/*
 * XREFs of SeTokenIsWriteRestricted @ 0x1400D5160
 * Callers:
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x140512FAC (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14051357C (SepNewTokenAsRestrictedAsProcessToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
