/*
 * XREFs of RIMUpdatePointerDeviceScalingInfo @ 0x1C000BAA0
 * Callers:
 *     rimSetPointerDeviceDisplayConfig @ 0x1C000B8E4 (rimSetPointerDeviceDisplayConfig.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C0107870 (RIMComputeVirtualDesktopPhysicalSize.c)
 * Callees:
 *     rimConvertCoordinatesWithRounding @ 0x1C01089FC (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceScalingInfo(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int *a8,
        __int64 a9)
{
  int v9; // r12d
  unsigned int v11; // r15d
  unsigned int *v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // r10d
  unsigned int v17; // ebp
  unsigned int v18; // r11d
  int v19; // eax
  int v20; // r8d
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  __int64 result; // rax
  int v26; // eax

  v9 = *(_DWORD *)(a3 + 40);
  v11 = *(_DWORD *)(a3 + 44);
  v12 = a4 + 4;
  if ( !a4 )
    v12 = a2;
  v13 = *v12;
  if ( a4 )
    v14 = a4[5];
  else
    v14 = a2[1];
  *a8 = v9;
  a8[1] = v11;
  if ( a4 )
  {
    v15 = a4[6];
    v16 = a4[8] - v15;
    v17 = a4[7];
    v18 = a4[9] - v17;
  }
  else
  {
    v15 = 0;
    v16 = v13;
    v17 = 0;
    v18 = v14;
  }
  v19 = *(_DWORD *)(a5 + 24);
  if ( v19 == 4 )
  {
    if ( (v9 << 14) / v11 < (v13 << 14) / v14 )
      v26 = (v9 << 14) / v13;
    else
      v26 = (v11 << 14) / v14;
    v16 = (v26 * v16) >> 14;
    v18 = (v26 * v18) >> 14;
    v15 = (v26 * v15) >> 14;
    v17 = (v26 * v17) >> 14;
    a8[3] = (v14 * v26) >> 14;
    a8[2] = (v26 * v13) >> 14;
  }
  else if ( v19 == 2 )
  {
    a8[2] = v13;
    a8[3] = v14;
  }
  else
  {
    a8[2] = v9;
    a8[3] = v11;
    v20 = (v9 << 14) / v13;
    v21 = (v11 << 14) / v14;
    v16 = (v20 * v16) >> 14;
    v18 = (v21 * v18) >> 14;
    v15 = (v20 * v15) >> 14;
    v17 = (v21 * v17) >> 14;
  }
  if ( a7 )
  {
    a8[4] = (a7[2] - *a7) * (abs32(v9 - a8[2]) + 2 * v15) / (2 * v9);
    a8[5] = (a7[3] - a7[1]) * (abs32(v11 - a8[3]) + 2 * v17) / (2 * v11);
  }
  a8[2] = v16;
  a8[3] = v18;
  if ( ((*(_DWORD *)(a5 + 20) - 2) & 0xFFFFFFFD) == 0 )
  {
    *a8 = v9 ^ v11;
    a8[1] ^= v9 ^ v11;
    *a8 ^= a8[1];
    a8[2] ^= v18;
    a8[3] ^= a8[2];
    a8[2] ^= a8[3];
    a8[4] ^= a8[5];
    a8[5] ^= a8[4];
    a8[4] ^= a8[5];
  }
  v22 = a8[2];
  if ( *a8 == v22 )
    *(_DWORD *)(a9 + 8) = *(_DWORD *)(a1 + 8);
  else
    rimConvertCoordinatesWithRounding(0, *a8, 0, *(_DWORD *)(a1 + 8), v22, (LONG *)(a9 + 8));
  v23 = a8[1];
  v24 = a8[3];
  if ( v23 != v24 )
    return rimConvertCoordinatesWithRounding(0, v23, 0, *(_DWORD *)(a1 + 12), v24, (LONG *)(a9 + 12));
  result = *(unsigned int *)(a1 + 12);
  *(_DWORD *)(a9 + 12) = result;
  return result;
}
