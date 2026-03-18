/*
 * XREFs of bvtfdMapFontFileFD @ 0x1C0236ADC
 * Callers:
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0236BF0 (vtfdQueryAdvanceWidthsTE.c)
 *     vtfdQueryFontDataTE @ 0x1C0236CB0 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0236D70 (vtfdQueryFontFileTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C0027BDC (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bvtfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), (_QWORD *)(a1 + 16), (_DWORD *)(a1 + 24), 1);
  return result;
}
