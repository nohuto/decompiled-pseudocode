/*
 * XREFs of IsFullWidthCharacter @ 0x1C02332A0
 * Callers:
 *     lQueryTrueTypeOutlineVertical @ 0x1C022D4B8 (lQueryTrueTypeOutlineVertical.c)
 *     bGetFastAdvanceWidth @ 0x1C022DB2C (bGetFastAdvanceWidth.c)
 *     bQueryAdvanceWidths @ 0x1C022E178 (bQueryAdvanceWidths.c)
 *     lGetGlyphBitmapVertical @ 0x1C022F00C (lGetGlyphBitmapVertical.c)
 *     ttfdGlyphBitmap @ 0x1C022FC08 (ttfdGlyphBitmap.c)
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
    return (unsigned __int8)(*((_BYTE *)&glyphBits + (a2 & 7)) & *(_BYTE *)(((unsigned __int64)a2 >> 3) + v2 + 12));
}
