/*
 * XREFs of ttfdGlyphBitmap @ 0x1C022FC08
 * Callers:
 *     ttfdQueryFontData @ 0x1C022FD64 (ttfdQueryFontData.c)
 * Callees:
 *     lGGOBitmap @ 0x1C022E970 (lGGOBitmap.c)
 *     IsFullWidthCharacter @ 0x1C02332A0 (IsFullWidthCharacter.c)
 *     bChangeXform @ 0x1C02333B0 (bChangeXform.c)
 */

__int64 __fastcall ttfdGlyphBitmap(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, int a5)
{
  int v7; // ebp
  unsigned int v9; // edi
  int v10; // eax

  v7 = a2;
  if ( (_DWORD)a2 == -1 )
  {
    EngSetLastError(0x57u);
    return (unsigned int)-1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 308) && (unsigned int)IsFullWidthCharacter(*(_QWORD *)(a1 + 8), a2) )
    {
      v9 = -1;
      if ( !(unsigned int)bChangeXform(a1, 1LL) )
        return v9;
      *(_DWORD *)(a1 + 304) |= 2u;
      *(_DWORD *)(a1 + 312) = v7;
    }
    v9 = lGGOBitmap(a1, v7, a3, a4, a5);
    v10 = *(_DWORD *)(a1 + 304);
    if ( (v10 & 2) != 0 )
    {
      *(_DWORD *)(a1 + 304) = v10 & 0xFFFFFFFD;
      if ( !(unsigned int)bChangeXform(a1, 0LL) )
        return (unsigned int)-1;
    }
  }
  return v9;
}
