/*
 * XREFs of bvtfdMapFontFileFD @ 0x1C0238088
 * Callers:
 *     vtfdQueryAdvanceWidthsTE @ 0x1C02381A0 (vtfdQueryAdvanceWidthsTE.c)
 *     vtfdQueryFontDataTE @ 0x1C0238260 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0238330 (vtfdQueryFontFileTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B644C (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bvtfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), (_QWORD *)(a1 + 16), (_DWORD *)(a1 + 24), 1);
  return result;
}
