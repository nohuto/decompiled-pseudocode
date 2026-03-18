/*
 * XREFs of SepAppendAdminAceToTokenAcl @ 0x14045B100
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 * Callees:
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 */

__int64 __fastcall SepAppendAdminAceToTokenAcl(__int64 a1)
{
  return SepAppendAceToTokenObjectAcl(a1, 8LL, SeAliasAdminsSid);
}
