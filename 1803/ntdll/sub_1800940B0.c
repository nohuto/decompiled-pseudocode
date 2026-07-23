/*
 * XREFs of sub_1800940B0 @ 0x1800940B0
 * Callers:
 *     mbstowcs @ 0x18008EDC0 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180069B20 (RtlAnsiCharToUnicodeChar.c)
 */

UCHAR *__fastcall sub_1800940B0(UCHAR *a1)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = a1;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return (UCHAR *)(SourceCharacter - a1 - 1);
}
