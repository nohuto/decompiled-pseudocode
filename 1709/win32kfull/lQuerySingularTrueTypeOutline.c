/*
 * XREFs of lQuerySingularTrueTypeOutline @ 0x1C022D214
 * Callers:
 *     lQueryTTOutline @ 0x1C022D294 (lQueryTTOutline.c)
 * Callees:
 *     vFillSingularGLYPHDATA @ 0x1C0231188 (vFillSingularGLYPHDATA.c)
 *     fs_NewGlyph @ 0x1C02B5CE0 (fs_NewGlyph.c)
 */

__int64 __fastcall lQuerySingularTrueTypeOutline(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(v3 + 108) = 0;
  *(_DWORD *)(v3 + 112) = 0;
  *(_WORD *)(v3 + 104) = -1;
  *(_WORD *)(v3 + 106) = a2;
  if ( !(unsigned int)fs_NewGlyph(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184)) && a3 )
    vFillSingularGLYPHDATA(a2, *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL), a1, a3);
  return 0LL;
}
