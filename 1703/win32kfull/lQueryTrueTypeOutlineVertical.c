/*
 * XREFs of lQueryTrueTypeOutlineVertical @ 0x1C022BFA8
 * Callers:
 *     ttfdQueryGlyphOutline @ 0x1C022C09C (ttfdQueryGlyphOutline.c)
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C022C1F0 (ttfdQueryQuadTrueTypeOutline.c)
 * Callees:
 *     lQueryTTOutline @ 0x1C022BD84 (lQueryTTOutline.c)
 *     IsFullWidthCharacter @ 0x1C0231D2C (IsFullWidthCharacter.c)
 *     bChangeXform @ 0x1C0231E50 (bChangeXform.c)
 */

__int64 __fastcall lQueryTrueTypeOutlineVertical(
        __int64 a1,
        int a2,
        unsigned int a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        _QWORD *a8)
{
  char v12; // r9
  unsigned int TTOutline; // ebx

  if ( !(unsigned int)IsFullWidthCharacter(*(_QWORD *)(a1 + 8), a3) )
    return lQueryTTOutline(a1, a2, a3, v12, a5, a6, a7, a8);
  if ( !(unsigned int)bChangeXform(a1, 1LL) )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 304) |= 2u;
  *(_DWORD *)(a1 + 312) = a3;
  TTOutline = lQueryTTOutline(a1, a2, a3, a4, a5, a6, a7, a8);
  bChangeXform(a1, 0LL);
  *(_DWORD *)(a1 + 304) &= ~2u;
  return TTOutline;
}
