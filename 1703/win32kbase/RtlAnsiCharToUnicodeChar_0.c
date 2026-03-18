/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C009F2E8
 * Callers:
 *     toupper @ 0x1C009D46C (toupper.c)
 *     mbtowc @ 0x1C009F16C (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
