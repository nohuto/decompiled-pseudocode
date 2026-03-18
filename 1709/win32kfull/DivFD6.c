/*
 * XREFs of DivFD6 @ 0x1C00794D8
 * Callers:
 *     BuildExpandAAInfo @ 0x1C0074300 (BuildExpandAAInfo.c)
 *     pDCIAdjClr @ 0x1C007828C (pDCIAdjClr.c)
 *     ComputeRGBLUTAA @ 0x1C0078BBC (ComputeRGBLUTAA.c)
 *     AdjustSrcDevGamma @ 0x1C0079298 (AdjustSrcDevGamma.c)
 *     RaisePower @ 0x1C007AEC8 (RaisePower.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C01061A0 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C010DE1C (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x1C010E36C (ComputeInverseMatrix3x3.c)
 *     CreateStandardMonoPattern @ 0x1C013582C (CreateStandardMonoPattern.c)
 *     HT_Get8BPPMaskPalette @ 0x1C0139AB0 (HT_Get8BPPMaskPalette.c)
 *     HT_ComputeRGBGammaTable @ 0x1C023E1E0 (HT_ComputeRGBGammaTable.c)
 *     HT_Get8BPPFormatPalette @ 0x1C023E500 (HT_Get8BPPFormatPalette.c)
 *     CacheRGBToXYZ @ 0x1C023E854 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C023E944 (ComputeBGRMappingTable.c)
 *     ScaleRGB @ 0x1C023F70C (ScaleRGB.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00795AC (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  BOOL v5; // r9d
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r10d
  __int64 v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // rdx

  v3 = a2;
  v4 = a2;
  v5 = a2 <= 0;
  if ( a2 <= 0 )
  {
    a2 = -a2;
    if ( !a2 )
      return (a1 >> 31) + 0x80000000;
  }
  if ( a2 == 1000000 )
  {
    result = (unsigned int)-a1;
    if ( v4 > 0 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 <= 0 )
    {
      a1 = -a1;
      if ( !a1 )
        return 0LL;
      v5 = v3 > 0;
    }
    if ( a1 == a2 )
    {
      return v5 ? -1000000 : 1000000;
    }
    else
    {
      v7 = 62500 * (unsigned __int16)a1;
      v8 = 62500 * HIWORD(a1);
      v9 = (unsigned int)a2;
      v10 = HIWORD(v8);
      v11 = v7 + (v8 << 16);
      v12 = v10 + 1;
      if ( v11 >= v7 )
        v12 = v10;
      v13 = (v11 >> 28) | (16 * v12);
      v14 = 16 * v11;
      if ( v5 )
        return (unsigned int)-U64DivU32RoundUp(v13, v14, v9);
      else
        return U64DivU32RoundUp(v13, v14, v9);
    }
  }
  return result;
}
