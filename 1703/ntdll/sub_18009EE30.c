/*
 * XREFs of sub_18009EE30 @ 0x18009EE30
 * Callers:
 *     mbstowcs @ 0x180099970 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180041790 (RtlAnsiCharToUnicodeChar.c)
 */

UCHAR *__fastcall sub_18009EE30(UCHAR *a1)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = a1;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return (UCHAR *)(SourceCharacter - a1 - 1);
}
