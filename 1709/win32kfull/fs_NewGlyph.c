/*
 * XREFs of fs_NewGlyph @ 0x1C02B5CE0
 * Callers:
 *     lQuerySingularTrueTypeOutline @ 0x1C022D214 (lQuerySingularTrueTypeOutline.c)
 *     bGetGlyphOutline @ 0x1C022DD74 (bGetGlyphOutline.c)
 *     lGGOBitmap @ 0x1C022E970 (lGGOBitmap.c)
 *     lGetGlyphBitmapErrRecover @ 0x1C022EF08 (lGetGlyphBitmapErrRecover.c)
 *     lGetSingularGlyphBitmap @ 0x1C022F0CC (lGetSingularGlyphBitmap.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B5FE4 (fs_SetUpKey.c)
 *     sbit_SearchForBitmap @ 0x1C02BEB84 (sbit_SearchForBitmap.c)
 *     sfac_GetGlyphIndex @ 0x1C02C37FC (sfac_GetGlyphIndex.c)
 */

__int64 __fastcall fs_NewGlyph(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int16 v6; // ax
  int v7; // edx
  bool v8; // zf
  _WORD *v9; // rdi
  __int16 v10; // cx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v4 = fs_SetUpKey(a1, 6LL, &v11);
  if ( !v4 )
    return v11;
  if ( *(_WORD *)(a1 + 104) == 0xFFFF )
  {
    *(_WORD *)(v4 + 216) = *(_WORD *)(a1 + 106);
    v6 = *(_WORD *)(a1 + 106);
    a2[19] = 0;
  }
  else
  {
    result = sfac_GetGlyphIndex(v4);
    if ( (_DWORD)result )
      return result;
    a2[19] = 2;
    v6 = *(_WORD *)(v4 + 216);
  }
  a2[18] = v6;
  v7 = *(unsigned __int16 *)(v4 + 216);
  if ( v7 > *(unsigned __int16 *)(v4 + 392) - 1 )
    return 4106LL;
  *(_DWORD *)(v4 + 844) = *(_DWORD *)(a1 + 112) == 0;
  *(_DWORD *)(v4 + 840) = *(_DWORD *)(a1 + 108);
  v8 = *(_DWORD *)(a1 + 112) == 0;
  v9 = a2 + 84;
  if ( v8 )
  {
    result = sbit_SearchForBitmap(
               (int)v4 + 964,
               v4,
               (unsigned __int16)v7,
               *(unsigned __int16 *)(v4 + 832),
               (__int64)&v11,
               (__int64)(a2 + 84));
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    *v9 = 0;
  }
  v10 = *(_WORD *)(v4 + 832);
  if ( v10 )
  {
    a2[110] = v10 * v10 + 1;
  }
  else
  {
    a2[110] = 0;
    if ( *(_DWORD *)(v4 + 1152) )
      a2[110] = *(_WORD *)(v4 + 1156) * *(_WORD *)(v4 + 1156) + 1;
  }
  *(_DWORD *)(v4 + 844) = (unsigned __int16)*v9;
  if ( (*(_BYTE *)(v4 + 1076) & 1) != 0 )
    *v9 = 0;
  *(_DWORD *)(v4 + 420) = 14;
  return 0LL;
}
