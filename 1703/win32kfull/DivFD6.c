/*
 * XREFs of DivFD6 @ 0x1C0034DF8
 * Callers:
 *     ComputeRGBLUTAA @ 0x1C0033BA4 (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C0034290 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C0034BB8 (AdjustSrcDevGamma.c)
 *     BuildExpandAAInfo @ 0x1C0036860 (BuildExpandAAInfo.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00ED180 (HT_CreateDeviceHalftoneInfo.c)
 *     RaisePower @ 0x1C00EDF60 (RaisePower.c)
 *     ComputeColorSpaceXForm @ 0x1C010356C (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x1C0103ABC (ComputeInverseMatrix3x3.c)
 *     CreateStandardMonoPattern @ 0x1C01309F8 (CreateStandardMonoPattern.c)
 *     HT_Get8BPPMaskPalette @ 0x1C0134B50 (HT_Get8BPPMaskPalette.c)
 *     HT_ComputeRGBGammaTable @ 0x1C023C8A0 (HT_ComputeRGBGammaTable.c)
 *     HT_Get8BPPFormatPalette @ 0x1C023CBD0 (HT_Get8BPPFormatPalette.c)
 *     CacheRGBToXYZ @ 0x1C023CF30 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C023D020 (ComputeBGRMappingTable.c)
 *     ScaleRGB @ 0x1C023DDDC (ScaleRGB.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00376FC (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  int v3; // ecx
  int v4; // eax
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
  if ( a2 > 0 || (a2 = -a2) != 0 )
  {
    if ( a2 == 1000000 )
    {
      if ( v4 <= 0 )
        return (unsigned int)-a1;
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
  }
  else
  {
    result = 0x80000000LL;
    if ( a1 < 0 )
      return 0x7FFFFFFFLL;
  }
  return result;
}
