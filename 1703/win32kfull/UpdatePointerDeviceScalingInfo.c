/*
 * XREFs of UpdatePointerDeviceScalingInfo @ 0x1C01A7810
 * Callers:
 *     ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01A5A18 (-SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PE.c)
 *     ComputeVirtualDesktopPhysicalSize @ 0x1C01B9668 (ComputeVirtualDesktopPhysicalSize.c)
 * Callees:
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01A1F58 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall UpdatePointerDeviceScalingInfo(
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
  int v20; // eax
  int v21; // r8d
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  __int64 result; // rax

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
      v20 = (v9 << 14) / v13;
    else
      v20 = (v11 << 14) / v14;
    v16 = (v20 * v16) >> 14;
    v18 = (v20 * v18) >> 14;
    v15 = (v20 * v15) >> 14;
    v17 = (v20 * v17) >> 14;
    a8[3] = (v14 * v20) >> 14;
    a8[2] = (v20 * v13) >> 14;
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
    v21 = (v9 << 14) / v13;
    v22 = (v11 << 14) / v14;
    v16 = (v21 * v16) >> 14;
    v18 = (v22 * v18) >> 14;
    v15 = (v21 * v15) >> 14;
    v17 = (v22 * v17) >> 14;
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
  v23 = a8[2];
  if ( *a8 == v23 )
    *(_DWORD *)(a9 + 8) = *(_DWORD *)(a1 + 8);
  else
    ConvertCoordinatesWithRounding(0, *a8, 0, *(_DWORD *)(a1 + 8), v23, (int *)(a9 + 8));
  v24 = a8[1];
  v25 = a8[3];
  if ( v24 != v25 )
    return ConvertCoordinatesWithRounding(0, v24, 0, *(_DWORD *)(a1 + 12), v25, (int *)(a9 + 12));
  result = *(unsigned int *)(a1 + 12);
  *(_DWORD *)(a9 + 12) = result;
  return result;
}
