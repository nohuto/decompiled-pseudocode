/*
 * XREFs of BmlDoesTargetModeObeyConstraint @ 0x1C00D4744
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C00D4540 (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C01F8FE4 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000BAE4 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C00D4E20 (BmlAreRawModesEnabled.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00D53A0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C00D9470 (BmlIsSupportedByMonitorTargetMode.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C00F8B20 (BmlDoesTargetModeSupportWireFormat.c)
 */

bool __fastcall BmlDoesTargetModeObeyConstraint(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r9
  __int64 v10; // r10
  struct _D3DDDI_RATIONAL v12; // rax
  int v13; // ecx
  int v14; // ecx
  struct _D3DDDI_RATIONAL v15; // rax
  int v16; // ecx
  struct _D3DDDI_RATIONAL v17; // [rsp+20h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = 104LL * a2;
  v6 = *(__int64 **)(a1 + v4 + 16);
  if ( (!(unsigned __int8)BmlAreRawModesEnabled() || (*(_BYTE *)v6 & 0x87) == 0) && (*(_DWORD *)(v8 + 8) & 4) == 0 )
  {
    LOBYTE(v7) = v9;
    if ( !(unsigned __int8)BmlIsSupportedByMonitorTargetMode(a3, v7) )
      return 0;
  }
  v10 = *v6;
  if ( (*v6 & 0x4000000000LL) != 0 )
  {
    if ( (unsigned int)BmlCompareModeExtents(v4 + a1 + 52, a3 + 84) )
      return 0;
  }
  if ( (v10 & 0x8F) == 0 )
    return 1;
  if ( (v10 & 4) != 0 && (((unsigned __int8)*(_DWORD *)(a3 + 120) ^ *((_BYTE *)v6 + 80)) & 7) != 0
    || (v10 & 1) != 0 && (v6[1] & 1) != 0 && (unsigned int)BmlCompareModeExtents(a3 + 84, (char *)v6 + 44) )
  {
    return 0;
  }
  if ( (v10 & 2) != 0 && (v6[1] & 2) != 0 && (*(_DWORD *)(a3 + 92) != -2 || *(_DWORD *)(a3 + 96) != -2) )
  {
    v12 = *(struct _D3DDDI_RATIONAL *)((char *)v6 + 52);
    v13 = (*((_DWORD *)v6 + 20) >> 3) & 0x3F;
    if ( v13 )
    {
      v18.Numerator = *(__int64 *)((char *)v6 + 52);
      v18.Denominator = v13 * v12.Denominator;
      v12 = v18;
    }
    v14 = *(_DWORD *)(a3 + 120) >> 3;
    v17 = v12;
    v15 = *(struct _D3DDDI_RATIONAL *)(a3 + 92);
    v16 = v14 & 0x3F;
    if ( v16 )
    {
      v18.Numerator = *(_QWORD *)(a3 + 92);
      v18.Denominator = v16 * v15.Denominator;
      v15 = v18;
    }
    v18 = v15;
    if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v18, &v17, 0) )
      return 0;
  }
  return (*(_BYTE *)v6 & 8) == 0
      || (v6[1] & 8) == 0
      || (unsigned __int8)BmlDoesTargetModeSupportWireFormat(a3, *((unsigned int *)v6 + 51));
}
