/*
 * XREFs of IsFullWidthCharacter @ 0x1C0231D2C
 * Callers:
 *     lQueryTrueTypeOutlineVertical @ 0x1C022BFA8 (lQueryTrueTypeOutlineVertical.c)
 *     bGetFastAdvanceWidth @ 0x1C022C61C (bGetFastAdvanceWidth.c)
 *     bQueryAdvanceWidths @ 0x1C022CC6C (bQueryAdvanceWidths.c)
 *     lGetGlyphBitmapVertical @ 0x1C022DAE8 (lGetGlyphBitmapVertical.c)
 *     ttfdGlyphBitmap @ 0x1C022E6F8 (ttfdGlyphBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFullWidthCharacter(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( a2 >= *(_DWORD *)(v2 + 4) )
    return 0LL;
  else
    return (unsigned __int8)(glyphBits[a2 & 7] & *(_BYTE *)(((unsigned __int64)a2 >> 3) + v2 + 12));
}
