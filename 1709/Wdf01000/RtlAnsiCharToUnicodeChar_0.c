/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C003C560
 * Callers:
 *     mbtowc @ 0x1C003C470 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
