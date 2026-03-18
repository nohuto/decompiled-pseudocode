/*
 * XREFs of _mbstrlen @ 0x14016E028
 * Callers:
 *     mbstowcs @ 0x14016A800 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1404C0B50 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)Str;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)Str - 1;
}
