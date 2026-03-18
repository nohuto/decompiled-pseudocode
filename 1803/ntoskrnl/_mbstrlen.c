/*
 * XREFs of _mbstrlen @ 0x14018C6F0
 * Callers:
 *     mbstowcs @ 0x140188FC0 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1405515D0 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)Str;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)Str - 1;
}
