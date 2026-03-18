/*
 * XREFs of MulFD6 @ 0x1C007915C
 * Callers:
 *     ComputeRGBLUTAA @ 0x1C0078BBC (ComputeRGBLUTAA.c)
 *     AdjustSrcDevGamma @ 0x1C0079298 (AdjustSrcDevGamma.c)
 *     RaisePower @ 0x1C007AEC8 (RaisePower.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C01061A0 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C010DE1C (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x1C010E36C (ComputeInverseMatrix3x3.c)
 *     CacheRGBToXYZ @ 0x1C023E854 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C023E944 (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MulFD6(int a1, int a2)
{
  signed int v2; // r11d
  int v3; // ebx
  BOOL v4; // edi
  int v5; // eax
  int v6; // r9d
  int v7; // r11d
  unsigned int v8; // r9d
  unsigned int v9; // edx
  int v10; // ebx
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  unsigned int v15; // ecx

  v2 = a2;
  v3 = a1;
  v4 = a1 <= 0;
  if ( a1 <= 0 )
  {
    v3 = -a1;
    if ( !a1 )
      return 0LL;
  }
  if ( a2 <= 0 )
  {
    v2 = -a2;
    if ( !a2 )
      return 0LL;
    v4 = a1 > 0;
  }
  if ( v3 != 1000000 )
  {
    if ( v2 == 1000000 )
    {
      v2 = v3;
    }
    else
    {
      v5 = (unsigned __int16)v2;
      v6 = (unsigned __int16)v2;
      v7 = v2 >> 16;
      v8 = (unsigned __int16)v3 * v6;
      v9 = (unsigned __int16)v3 * v7;
      v10 = v3 >> 16;
      v11 = (unsigned int)(v5 * v10) >> 16;
      v12 = (unsigned __int16)(v5 * v10) + HIWORD(v8) + (unsigned __int16)v9;
      v13 = v11 + HIWORD(v9) + HIWORD(v12) + v10 * v7;
      v14 = ((unsigned __int16)v8 | (v12 << 16)) + 500000;
      v15 = v13 + 1;
      if ( v14 >= 0x7A120 )
        v15 = v13;
      v2 = ((((v14 >> 20) | (v15 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v14 >> 4) | ((((v14 >> 20) | (v15 << 12))
                                                                                             + 3036
                                                                                             * (((v14 >> 20) | (v15 << 12))
                                                                                              / 0xF424)) << 16))
                                                           / 0xF424);
    }
  }
  if ( v4 )
    return (unsigned int)-v2;
  return (unsigned int)v2;
}
