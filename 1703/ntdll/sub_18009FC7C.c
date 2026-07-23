/*
 * XREFs of sub_18009FC7C @ 0x18009FC7C
 * Callers:
 *     sub_18009CD80 @ 0x18009CD80 (sub_18009CD80.c)
 *     sub_18009EF60 @ 0x18009EF60 (sub_18009EF60.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180041790 (RtlAnsiCharToUnicodeChar.c)
 */

UCHAR *__fastcall sub_18009FC7C(WCHAR *a1, UCHAR *a2, __int64 a3)
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
