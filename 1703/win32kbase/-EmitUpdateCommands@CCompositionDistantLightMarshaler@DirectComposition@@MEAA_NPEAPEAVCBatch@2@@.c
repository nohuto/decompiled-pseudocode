/*
 * XREFs of ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0149270
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147050 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR__lambda_4699fdc5a14f149076d9c69ea67dcfaa___ @ 0x1C0149114 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE__lambda_6c97bdd75333e172b3f4469c63192950___ @ 0x1C014917C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETCOORD.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION__lambda_7beb449fb807bf00c7ae12db90743067___ @ 0x1C01491EC (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETDIREC.c)
 */

char __fastcall DirectComposition::CCompositionDistantLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  DirectComposition::CCompositionDistantLightMarshaler *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v5 & 0x40) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR__lambda_4699fdc5a14f149076d9c69ea67dcfaa___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE__lambda_6c97bdd75333e172b3f4469c63192950___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v9 = this;
    if ( v7 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION__lambda_7beb449fb807bf00c7ae12db90743067___(
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) &= ~0x100u;
      return 1;
    }
  }
  return v4;
}
