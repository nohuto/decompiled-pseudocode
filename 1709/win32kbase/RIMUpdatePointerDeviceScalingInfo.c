/*
 * XREFs of RIMUpdatePointerDeviceScalingInfo @ 0x1C008E0A8
 * Callers:
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0061350 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     rimSetDeviceDisplayConfig @ 0x1C008DEC8 (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     rimConvertCoordinatesWithRounding @ 0x1C0106A24 (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceScalingInfo(_DWORD *a1, _DWORD *a2, int a3, int *a4, _DWORD *a5)
{
  unsigned int v5; // r15d
  int v7; // r9d
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  unsigned int v14; // r8d
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  int v17; // eax
  int v18; // r8d
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // r15
  int v22; // edx
  _DWORD *v23; // r14
  int v24; // eax
  __int64 result; // rax
  int v26; // eax
  int v27; // r9d
  int v28; // ebp
  unsigned int v29; // [rsp+78h] [rbp+10h]
  unsigned int v31; // [rsp+88h] [rbp+20h]

  v5 = a2[15];
  v7 = a2[14];
  v8 = 0;
  v9 = a2[22];
  v10 = 0;
  v11 = a2[23];
  *a4 = v7;
  a4[1] = v5;
  v14 = a2[35];
  v15 = a2[37] - v14;
  v16 = a2[38] - a2[36];
  v29 = a2[36];
  v17 = a2[27];
  v31 = v14;
  if ( v17 == 4 )
  {
    if ( (v7 << 14) / v5 < (v9 << 14) / v11 )
      v26 = (v7 << 14) / v9;
    else
      v26 = (v5 << 14) / v11;
    v15 = (v26 * v15) >> 14;
    v16 = (v26 * v16) >> 14;
    v14 = (v14 * v26) >> 14;
    a4[3] = (v11 * v26) >> 14;
    v29 = (v26 * v29) >> 14;
    a4[2] = (v9 * v26) >> 14;
  }
  else if ( v17 == 2 )
  {
    a4[2] = v9;
    a4[3] = v11;
  }
  else
  {
    a4[2] = v7;
    a4[3] = v5;
    v18 = (v7 << 14) / v9;
    v19 = (v5 << 14) / v11;
    v15 = (v18 * v15) >> 14;
    v14 = (v31 * v18) >> 14;
    v16 = (v19 * v16) >> 14;
    v29 = (v19 * v29) >> 14;
  }
  if ( a3 )
  {
    v8 = (a1[2] - *a1) * (abs32(v7 - a4[2]) + 2 * v14) / (2 * v7);
    v10 = (a1[3] - a1[1]) * (abs32(v5 - a4[3]) + 2 * v29) / (2 * v5);
  }
  a4[2] = v15;
  a4[3] = v16;
  if ( !a3 && ((a2[26] - 2) & 0xFFFFFFFD) == 0 )
  {
    v27 = v5 ^ v7;
    v28 = v10 ^ v8;
    *a4 = v27;
    v10 ^= v28;
    a4[1] ^= v27;
    *a4 ^= a4[1];
    a4[2] ^= v16;
    a4[3] ^= a4[2];
    a4[2] ^= a4[3];
    v8 = v10 ^ v28;
  }
  v20 = a4[2];
  v21 = a5 + 2;
  if ( *a4 == v20 )
    *v21 = a1[2];
  else
    rimConvertCoordinatesWithRounding(0, *a4, 0, a1[2], v20, a5 + 2);
  v22 = a4[1];
  v23 = a5 + 3;
  v24 = a4[3];
  if ( v22 == v24 )
  {
    result = (unsigned int)a1[3];
    *v23 = result;
  }
  else
  {
    result = rimConvertCoordinatesWithRounding(0, v22, 0, a1[3], v24, a5 + 3);
  }
  if ( a3 )
  {
    *a5 += v8;
    *v21 += v8;
    a5[1] += v10;
    *v23 += v10;
    result = (unsigned int)(a2[26] - 2);
    if ( (result & 0xFFFFFFFD) == 0 )
    {
      *a4 ^= a4[1];
      a4[1] ^= *a4;
      *a4 ^= a4[1];
      a4[2] ^= a4[3];
      a4[3] ^= a4[2];
      result = (unsigned int)a4[3];
      a4[2] ^= result;
    }
  }
  return result;
}
