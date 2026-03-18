/*
 * XREFs of bttfdMapFontFileFD @ 0x1C02267F4
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C0226B70 (ttfdSemQueryAdvanceWidths.c)
 *     ttfdSemQueryFontData @ 0x1C0226C40 (ttfdSemQueryFontData.c)
 *     ttfdSemQueryFontTree @ 0x1C0226D20 (ttfdSemQueryFontTree.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C0226DB0 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C0226E60 (ttfdSemQueryTrueTypeOutline.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C0226F40 (ttfdSemQueryTrueTypeTable.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B644C (EngMapFontFileFDInternal.c)
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
