/*
 * XREFs of sfac_GetGlyphIndex @ 0x1C02C37FC
 * Callers:
 *     fs_NewGlyph @ 0x1C02B5CE0 (fs_NewGlyph.c)
 * Callees:
 *     InvokeGlyphMappingF @ 0x1C02C2CD8 (InvokeGlyphMappingF.c)
 *     InvokeReleaseSfntFrag @ 0x1C02C2D94 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C378C (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetGlyphIndex(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  __int16 v5; // ax
  int v6; // ecx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  result = sfac_GetDataPtr(a1, 0, -1, 8, 1, &v7);
  if ( !(_DWORD)result )
  {
    v5 = InvokeGlyphMappingF(*(_DWORD *)(a1 + 212), (_WORD *)(v7 + *(unsigned int *)(a1 + 20)), a2, a1);
    v6 = *(_DWORD *)(a1 + 12);
    *(_WORD *)(a1 + 216) = v5;
    InvokeReleaseSfntFrag(v6);
    return 0LL;
  }
  return result;
}
