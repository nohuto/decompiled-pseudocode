/*
 * XREFs of sub_1800A24C4 @ 0x1800A24C4
 * Callers:
 *     sub_1800A1A64 @ 0x1800A1A64 (sub_1800A1A64.c)
 * Callees:
 *     sub_1800A247C @ 0x1800A247C (sub_1800A247C.c)
 */

__int64 __fastcall sub_1800A24C4(unsigned __int8 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 result; // rax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = sub_1800A247C(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
