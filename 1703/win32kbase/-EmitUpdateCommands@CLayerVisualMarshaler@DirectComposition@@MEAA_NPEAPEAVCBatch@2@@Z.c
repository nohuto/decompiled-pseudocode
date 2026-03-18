/*
 * XREFs of ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007F9A0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LAYERVISUAL_SETEFFECT__lambda_5d8aac388cdc7c63452e1ff20ce590af___ @ 0x1C0003B6C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_LAYERVISUAL_SETEFFECT__lambda_5d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LAYERVISUAL_SETSHADOW__lambda_7df14d4dd6e063a2820fcd99b58194da___ @ 0x1C0004F30 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_LAYERVISUAL_SETSHADOW__lambda_7d.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017D50 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION__lambda_e833aad60722411672453fd4391f0b39___ @ 0x1C007FA90 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEX.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CLayerVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x4000000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LAYERVISUAL_SETEFFECT__lambda_5d8aac388cdc7c63452e1ff20ce590af___(
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000000u;
    }
    v5 = (*((_DWORD *)this + 4) & 0x8000000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LAYERVISUAL_SETSHADOW__lambda_7df14d4dd6e063a2820fcd99b58194da___(
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000000u;
    }
    v5 = (*((_DWORD *)this + 4) & 0x10000000) == 0;
    v7 = this;
    if ( v5 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION__lambda_e833aad60722411672453fd4391f0b39___(
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) &= ~0x10000000u;
      return 1;
    }
  }
  return v4;
}
