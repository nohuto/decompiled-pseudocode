/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x1407928C8
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14056FB40 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405F0844 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x140792980 (SepDereferenceSidValuesBlock.c)
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
