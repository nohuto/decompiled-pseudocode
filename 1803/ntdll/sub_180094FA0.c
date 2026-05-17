/*
 * XREFs of sub_180094FA0 @ 0x180094FA0
 * Callers:
 *     sub_180091FB0 @ 0x180091FB0 (sub_180091FB0.c)
 *     sub_1800941E0 @ 0x1800941E0 (sub_1800941E0.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180069B20 (RtlAnsiCharToUnicodeChar.c)
 */

__int64 __fastcall sub_180094FA0(_WORD *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v4 = (int)a2;
  if ( a2 && a3 )
  {
    if ( *a2 )
    {
      v5 = a2;
      *a1 = RtlAnsiCharToUnicodeChar(&v5);
      return (unsigned int)((_DWORD)v5 - v4);
    }
    else if ( a1 )
    {
      *a1 = 0;
    }
  }
  return result;
}
