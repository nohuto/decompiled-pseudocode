/*
 * XREFs of bGetGlyphOutline @ 0x1C022DD74
 * Callers:
 *     lQueryTTOutline @ 0x1C022D294 (lQueryTTOutline.c)
 *     bGetGlyphMetrics @ 0x1C022DCFC (bGetGlyphMetrics.c)
 * Callees:
 *     fs_NewContourGridFit @ 0x1C022E928 (fs_NewContourGridFit.c)
 *     fs_NewGlyph @ 0x1C02B5CE0 (fs_NewGlyph.c)
 *     fs__Contour @ 0x1C02B60DC (fs__Contour.c)
 */

_BOOL8 __fastcall bGetGlyphOutline(__int64 a1, __int16 a2, _DWORD *a3, char a4, _DWORD *a5)
{
  __int64 v7; // rax
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax

  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 32) = 1;
  v7 = *(_QWORD *)(a1 + 176);
  *(_WORD *)(v7 + 104) = -1;
  *(_WORD *)(v7 + 106) = a2;
  *(_QWORD *)(v7 + 108) = 0LL;
  v9 = fs_NewGlyph(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184));
  *a5 = v9;
  if ( v9 )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 176);
  *a3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL);
  *(_QWORD *)(v11 + 104) = 0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL) = (*(_DWORD *)(a1 + 40) & 0x10000) == 0
                                            && *(_WORD *)(*(_QWORD *)(a1 + 184) + 168LL)
                                            && (a4 & 1) != 0;
  if ( (*(_DWORD *)(a1 + 40) & 0x10000) != 0 && (a4 & 1) != 0 && (*(_BYTE *)(a1 + 120) & 3) == 3 )
  {
    v12 = *(_QWORD *)(a1 + 176);
    if ( *(_DWORD *)(v12 + 164) == 1 )
      *(_DWORD *)(v12 + 120) = 1;
  }
  v13 = *(_QWORD *)(a1 + 184);
  v14 = *(_QWORD *)(a1 + 176);
  v15 = (a4 & 2) != 0 ? fs__Contour(v14, v13, 0LL) : fs_NewContourGridFit(v14, v13, *(unsigned int *)(a1 + 40));
  *a5 = v15;
  return !v15;
}
