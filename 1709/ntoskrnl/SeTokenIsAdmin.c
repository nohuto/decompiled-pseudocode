/*
 * XREFs of SeTokenIsAdmin @ 0x140513270
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140019E94 (SepMandatorySubProcessToken.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x140512CA0 (PspIsContextAdmin.c)
 *     PspDisablePrimaryTokenExchange @ 0x14053F3DC (PspDisablePrimaryTokenExchange.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406F7B1C (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x1400D5100 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x1400D5140 (SeTokenIsRestricted.c)
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
