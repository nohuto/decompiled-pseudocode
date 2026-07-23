/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x180041790
 * Callers:
 *     toupper @ 0x18009B850 (toupper.c)
 *     sub_18009EE30 @ 0x18009EE30 (sub_18009EE30.c)
 *     sub_18009FC7C @ 0x18009FC7C (sub_18009FC7C.c)
 *     sub_1800A2284 @ 0x1800A2284 (sub_1800A2284.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180043840 (RtlMultiByteToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  const CHAR *v1; // r9
  WCHAR v3; // bx
  ULONG BytesInMultiByteString; // esi
  WCHAR result; // ax
  WCHAR UnicodeString; // [rsp+40h] [rbp+8h] BYREF

  v1 = (const CHAR *)*SourceCharacter;
  v3 = 32;
  UnicodeString = 32;
  BytesInMultiByteString = (word_180159D80[*(unsigned __int8 *)v1] != 0) + 1;
  if ( RtlMultiByteToUnicodeN(&UnicodeString, 2u, 0LL, v1, BytesInMultiByteString) >= 0 )
    v3 = UnicodeString;
  result = v3;
  *SourceCharacter += BytesInMultiByteString;
  return result;
}
