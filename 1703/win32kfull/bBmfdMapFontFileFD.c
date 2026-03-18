/*
 * XREFs of bBmfdMapFontFileFD @ 0x1C0232DE0
 * Callers:
 *     BmfdQueryAdvanceWidthsTE @ 0x1C0232C70 (BmfdQueryAdvanceWidthsTE.c)
 *     BmfdQueryFontDataTE @ 0x1C0232D10 (BmfdQueryFontDataTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C0027BDC (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bBmfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 16), &v3, &v2, 1);
  return result;
}
