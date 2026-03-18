/*
 * XREFs of ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0016488
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0005FA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C007C464 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValidGammaRamp(const struct _D3DKMDT_GAMMA_RAMP *a1)
{
  D3DDDI_GAMMARAMP_TYPE Type; // eax
  char v2; // dl

  Type = a1->Type;
  v2 = 1;
  if ( a1->Type == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    if ( !a1->DataSize )
      return 0;
    if ( a1->Data.pRgb256x3x16 )
      return v2;
  }
  if ( Type == D3DDDI_GAMMARAMP_DXGI_1 )
  {
    if ( !a1->DataSize )
      return 0;
    if ( a1->Data.pRgb256x3x16 )
      return v2;
  }
  if ( Type == D3DDDI_GAMMARAMP_DEFAULT )
  {
    if ( !a1->DataSize )
    {
      if ( !a1->Data.pRgb256x3x16 )
        return v2;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( Type != D3DDDI_GAMMARAMP_MATRIX_3x4 || !a1->DataSize || !a1->Data.pRgb256x3x16 )
    return 0;
  return v2;
}
