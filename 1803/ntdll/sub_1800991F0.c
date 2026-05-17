/*
 * XREFs of sub_1800991F0 @ 0x1800991F0
 * Callers:
 *     sub_180098874 @ 0x180098874 (sub_180098874.c)
 * Callees:
 *     sub_1800991A4 @ 0x1800991A4 (sub_1800991A4.c)
 */

_WORD *__fastcall sub_1800991F0(__int16 *a1, int a2, __int64 a3, _DWORD *a4)
{
  _WORD *result; // rax
  _DWORD *v5; // r11
  int v8; // r10d

  result = (_WORD *)*(unsigned int *)(a3 + 24);
  v5 = a4;
  if ( ((unsigned __int8)result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
        result = sub_1800991A4(*a1++, a3, v5);
      while ( *v5 != -1 && v8 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
