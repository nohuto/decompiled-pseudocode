/*
 * XREFs of SeTokenIsAdmin @ 0x1404DFBC0
 * Callers:
 *     AdminlessTelemetryEnabled @ 0x14005E210 (AdminlessTelemetryEnabled.c)
 *     SepMandatorySubProcessToken @ 0x14006B9C8 (SepMandatorySubProcessToken.c)
 *     SeAccessCheckWithHint @ 0x1400D47B0 (SeAccessCheckWithHint.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     PspDisablePrimaryTokenExchange @ 0x1404B8C60 (PspDisablePrimaryTokenExchange.c)
 *     PspIsContextAdmin @ 0x14052FBA0 (PspIsContextAdmin.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     EtwpCoverageUserIsAdmin @ 0x1407A7264 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140063230 (SeTokenIsRestricted.c)
 *     SepSidInToken @ 0x140063264 (SepSidInToken.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  PSID v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, SeAliasAdminsSid, 0, 0, 0, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, v2, 0, 1, 0, 0);
  }
  return v3;
}
