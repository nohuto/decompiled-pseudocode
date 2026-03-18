/*
 * XREFs of fsc_OverscaleToSubPixel @ 0x1C02CC628
 * Callers:
 *     fs_ContourScan @ 0x1C02BA328 (fs_ContourScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_OverscaleToSubPixel(__int16 *a1, __int64 a2, __int16 *a3)
{
  unsigned int v3; // r11d
  __int16 *v4; // r15
  __int16 v5; // r9
  unsigned int v6; // r10d
  __int64 result; // rax
  char v8; // r13
  int v9; // edx
  unsigned __int16 v10; // r9
  _BYTE *v11; // r14
  unsigned __int8 *v12; // rbx
  unsigned __int8 *v13; // r12
  _BYTE *v14; // r14
  unsigned __int8 *v15; // rbx
  __int64 v16; // rbp
  char v17; // di
  char v18; // cl
  unsigned __int16 v19; // si
  __int16 v21; // [rsp+48h] [rbp+10h]
  char v22; // [rsp+50h] [rbp+18h]

  v3 = 0;
  v4 = a1;
  v5 = a1[4] % 6 + (a1[4] % 6 < 0 ? 6 : 0);
  v6 = a3[6] - a3[4];
  result = (unsigned int)a3[2];
  if ( a3[1] != (_DWORD)result )
  {
    v8 = v5 + 2;
    v22 = v5 + 2;
    v9 = (14 - v5) % 8;
    v21 = v9;
    do
    {
      v10 = v9;
      v11 = (_BYTE *)(*((_QWORD *)a3 + 5) + v3 * *a3);
      v12 = (unsigned __int8 *)(*((_QWORD *)v4 + 5) + v3 * *v4);
      v13 = &v12[*v4];
      *v11 = ajRGBToWeight222[(unsigned __int64)*v12 >> v8];
      v14 = v11 + 1;
      if ( v6 > 1 )
      {
        v15 = v12 + 1;
        v16 = v6 - 1;
        do
        {
          v17 = 0;
          v18 = 2 - v10;
          if ( (__int16)(2 - v10) < 0 )
          {
            v18 = 0;
            v17 = v10 - 2;
          }
          v19 = (unsigned __int8)((unsigned __int8)(*(v15 - 1) & ajRGBToWeightMask[v10]) >> v18) << v17;
          if ( v15 < v13 )
            v19 += (unsigned __int8)(*v15 >> (10 - v10));
          v10 += 6;
          *v14++ = ajRGBToWeight222[v19];
          if ( v10 >= 8u )
          {
            v10 &= 7u;
            ++v15;
          }
          --v16;
        }
        while ( v16 );
        v4 = a1;
        v8 = v22;
        LOWORD(v9) = v21;
      }
      ++v3;
      result = (unsigned int)a3[2];
    }
    while ( v3 < a3[1] - (int)result );
  }
  return result;
}
