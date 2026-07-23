/*
 * XREFs of sub_180097738 @ 0x180097738
 * Callers:
 *     sub_180098874 @ 0x180098874 (sub_180098874.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180069B20 (RtlAnsiCharToUnicodeChar.c)
 */

__int64 __fastcall sub_180097738(WCHAR *a1, UCHAR *a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx
  PUCHAR SourceCharacter; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v4 = (int)a2;
  if ( a2 && a3 )
  {
    if ( *a2 )
    {
      SourceCharacter = a2;
      *a1 = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      return (unsigned int)((_DWORD)SourceCharacter - v4);
    }
    else if ( a1 )
    {
      *a1 = 0;
    }
  }
  return result;
}
