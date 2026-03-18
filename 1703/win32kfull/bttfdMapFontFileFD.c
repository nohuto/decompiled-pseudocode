/*
 * XREFs of bttfdMapFontFileFD @ 0x1C022528C
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C0225600 (ttfdSemQueryAdvanceWidths.c)
 *     ttfdSemQueryFontData @ 0x1C02256C0 (ttfdSemQueryFontData.c)
 *     ttfdSemQueryFontTree @ 0x1C0225790 (ttfdSemQueryFontTree.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C0225820 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C02258D0 (ttfdSemQueryTrueTypeOutline.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C02259A0 (ttfdSemQueryTrueTypeTable.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C0027BDC (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bttfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(
             *(struct _FILEVIEW **)(*(_QWORD *)(a1 + 48) + 56LL),
             (_QWORD *)(a1 + 16),
             (_DWORD *)(a1 + 24),
             1);
  return result;
}
