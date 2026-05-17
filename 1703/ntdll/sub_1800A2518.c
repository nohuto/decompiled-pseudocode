/*
 * XREFs of sub_1800A2518 @ 0x1800A2518
 * Callers:
 *     sub_1800A1A64 @ 0x1800A1A64 (sub_1800A1A64.c)
 * Callees:
 *     sub_1800A247C @ 0x1800A247C (sub_1800A247C.c)
 */

__int64 __fastcall sub_1800A2518(unsigned __int8 *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v7; // ebx

  result = *(unsigned int *)(a3 + 24);
  v7 = a2;
  if ( (result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        result = sub_1800A247C(*a1++, a3, a4);
      }
      while ( *a4 != -1 && v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
