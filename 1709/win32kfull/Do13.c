/*
 * XREFs of Do13 @ 0x1C01279A0
 * Callers:
 *     FastExpAA_CY @ 0x1C01272F0 (FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Do13(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v5; // ebx
  int i; // r9d
  __int64 result; // rax
  int v9; // r8d
  signed __int64 v10; // r10
  __int64 v11; // r11
  int v12; // r8d

  v5 = a4 >> 2;
  for ( i = a4 & 3; v5; --v5 )
  {
    *a1 = (*a3 + 2 * (*a3 + 1) + (unsigned int)*a2) >> 2;
    a1[1] = (a3[1] + 2 * (a3[1] + 1) + (unsigned int)a2[1]) >> 2;
    a1[2] = (a3[2] + 2 * (a3[2] + 1) + (unsigned int)a2[2]) >> 2;
    result = a3[3];
    a3 += 4;
    v9 = a2[3];
    a2 += 4;
    a1[3] = (unsigned int)(3 * result + v9 + 2) >> 2;
    a1 += 4;
  }
  if ( i )
  {
    v10 = a3 - a2;
    v11 = a1 - a2;
    do
    {
      result = a2[v10];
      v12 = *a2++;
      a2[v11 - 1] = (unsigned int)(3 * result + v12 + 2) >> 2;
      --i;
    }
    while ( i );
  }
  return result;
}
