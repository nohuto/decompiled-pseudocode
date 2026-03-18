/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00A8FD8
 * Callers:
 *     toupper @ 0x1C00A7568 (toupper.c)
 *     mbtowc @ 0x1C00A8DEC (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
