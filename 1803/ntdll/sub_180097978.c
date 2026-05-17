/*
 * XREFs of sub_180097978 @ 0x180097978
 * Callers:
 *     sub_180096EA4 @ 0x180096EA4 (sub_180096EA4.c)
 * Callees:
 *     sub_180097930 @ 0x180097930 (sub_180097930.c)
 */

__int64 __fastcall sub_180097978(unsigned __int8 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 result; // rax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = sub_180097930(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
