/*
 * XREFs of vLine8Octant16 @ 0x1C02B11A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vLine8Octant16(int *a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  int v5; // r11d
  _BYTE *v6; // rdx
  int v7; // r10d
  int v8; // ebx
  int v9; // edi
  int v10; // r11d

  result = a1[1];
  v5 = a1[3];
  v6 = (_BYTE *)(result + a2);
  v7 = a1[6];
  v8 = a1[4];
  v9 = a1[5];
  *v6 = a4;
  v10 = v5 - 1;
  if ( v10 )
  {
    result = a3;
    do
    {
      v6 += a3;
      v7 += v9;
      if ( v7 >= 0 )
      {
        v7 -= v8;
        ++v6;
      }
      *v6 = a4;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
