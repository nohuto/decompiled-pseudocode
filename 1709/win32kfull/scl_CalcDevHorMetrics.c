/*
 * XREFs of scl_CalcDevHorMetrics @ 0x1C02B809C
 * Callers:
 *     fs__Contour @ 0x1C02B60DC (fs__Contour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_CalcDevHorMetrics(int **a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // eax
  int v6; // ebx
  int v7; // r11d
  int *v8; // r10
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rcx

  v4 = *((__int16 *)a1 + 40) - 1;
  *a3 = 0x7FFFFFFF;
  v6 = 0x80000000;
  v7 = *((unsigned __int16 *)a1[8] + v4);
  v8 = *a1;
  result = (unsigned int)(v7 + 1);
  v10 = v8[(unsigned __int16)(v7 + 2)] - v8[(unsigned __int16)(v7 + 1)];
  *a2 = v10;
  if ( (_WORD)v7 != 0xFFFF )
  {
    v11 = (unsigned __int16)(v7 + 1);
    do
    {
      result = (unsigned int)*v8;
      if ( (int)result > v6 )
        v6 = *v8;
      if ( (int)result < *a3 )
        *a3 = result;
      ++v8;
      --v11;
    }
    while ( v11 );
  }
  *a4 = v10 - v6;
  return result;
}
