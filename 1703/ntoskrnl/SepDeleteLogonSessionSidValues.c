/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x1406F6D08
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140579760 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x14057D950 (SepDeReferenceLogonSession.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x1406F6DBC (SepDereferenceSidValuesBlock.c)
 */

__int64 __fastcall SepDeleteLogonSessionSidValues(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 120);
  if ( v2 )
  {
    result = SepDereferenceSidValuesBlock(v2);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
