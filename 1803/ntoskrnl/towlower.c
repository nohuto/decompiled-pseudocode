/*
 * XREFs of towlower @ 0x14018A470
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x1407B3F8C (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x1407C0328 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x1407C1948 (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1407C1A20 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1407C1EB4 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1407C2088 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1407C212C (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x14018B2C0 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
