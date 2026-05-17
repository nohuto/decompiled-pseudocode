/*
 * XREFs of sub_1800A3C30 @ 0x1800A3C30
 * Callers:
 *     sub_1800A32A4 @ 0x1800A32A4 (sub_1800A32A4.c)
 * Callees:
 *     sub_1800A3B8C @ 0x1800A3B8C (sub_1800A3B8C.c)
 */

__int64 __fastcall sub_1800A3C30(__int16 *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // r11d

  result = *(unsigned int *)(a3 + 24);
  if ( (result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
        result = sub_1800A3B8C(*a1++, a3, a4);
      while ( *a4 != -1 && v8 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
