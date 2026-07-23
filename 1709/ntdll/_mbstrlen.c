/*
 * XREFs of _mbstrlen @ 0x180099BA0
 * Callers:
 *     mbstowcs @ 0x180094860 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x18006C8D0 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *String)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)String;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)String - 1;
}
