/*
 * XREFs of towlower @ 0x14016B9F0
 * Callers:
 *     ExpParseArcPathName @ 0x140719BA0 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14071B180 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14071B258 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x14071B6EC (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x14071B874 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x14071B918 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x14016C840 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
