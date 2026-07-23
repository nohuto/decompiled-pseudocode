/*
 * XREFs of sub_1800A2284 @ 0x1800A2284
 * Callers:
 *     sub_1800A32A4 @ 0x1800A32A4 (sub_1800A32A4.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180041790 (RtlAnsiCharToUnicodeChar.c)
 */

UCHAR *__fastcall sub_1800A2284(WCHAR *a1, UCHAR *a2, __int64 a3)
{
  UCHAR *result; // rax
  PUCHAR SourceCharacter; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  if ( a2 && a3 )
  {
    if ( *a2 )
    {
      SourceCharacter = a2;
      *a1 = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      return (UCHAR *)(SourceCharacter - a2);
    }
    else if ( a1 )
    {
      *a1 = 0;
    }
  }
  return result;
}
