/*
 * XREFs of SepAppendAdminAceToTokenAcl @ 0x14045DFFC
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepAppendAdminAceToTokenAcl(__int64 a1)
{
  return SepAppendAceToTokenObjectAcl(a1, 8LL);
}
