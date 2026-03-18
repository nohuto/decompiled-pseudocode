/*
 * XREFs of towlower @ 0x1401602D0
 * Callers:
 *     ExpParseArcPathName @ 0x140759448 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14075AA1C (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14075AAF4 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x14075AF88 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x14075B110 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x14075B1B4 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x140161120 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
