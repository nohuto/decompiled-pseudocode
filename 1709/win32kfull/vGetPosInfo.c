/*
 * XREFs of vGetPosInfo @ 0x1C0297820
 * Callers:
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C000DA78 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C000DB00 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C000DCD0 (STROBJ_bEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vGetPosInfo(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
    *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 16LL) + 16 * a2 * *(_DWORD *)(a1 + 8);
  else
    *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 16LL) + a2 * *(_DWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 72);
  a3[1] = *(_DWORD *)(result + 20);
  return result;
}
