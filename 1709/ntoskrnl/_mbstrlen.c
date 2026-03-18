/*
 * XREFs of _mbstrlen @ 0x140162830
 * Callers:
 *     mbstowcs @ 0x14015F270 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x140564E80 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)Str;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)Str - 1;
}
