/*
 * XREFs of SeTokenIsAdmin @ 0x140560050
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1400662F4 (SepMandatorySubProcessToken.c)
 *     PspIsContextAdmin @ 0x14045EEC4 (PspIsContextAdmin.c)
 *     PspDisablePrimaryTokenExchange @ 0x1404F8A10 (PspDisablePrimaryTokenExchange.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     SepSidInToken @ 0x14012B964 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x14012B990 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  PSID v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, SeAliasAdminsSid, 0, 0, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, v2, 0, 1, 0);
  }
  return v3;
}
