/*
 * XREFs of ?EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0149750
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147050 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0__lambda_a08c5b50be745393b97c31162c89a0e1___ @ 0x1C01494E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUA.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1__lambda_a4198d3d1e9f4798873a68f15acbfc3e___ @ 0x1C0149540 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIG_ea_1C0149540.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2__lambda_f3eceb702d3bb95f35e8572466a46398___ @ 0x1C01495A0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIG_ea_1C01495A0.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR__lambda_f7cd886f5d9d790c7912a5ea05224ba2___ @ 0x1C0149600 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR__.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE__lambda_2f459d7b1de51fe0f6c48d211e4120f0___ @ 0x1C0149668 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETCOORDIN.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETOFFSET__lambda_0e3be02f44656b4d080e4e3876d13855___ @ 0x1C01496D8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETOFFSET_.c)
 */

char __fastcall DirectComposition::CCompositionPointLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  DirectComposition::CCompositionPointLightMarshaler *v9; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v5 & 0x40) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0__lambda_a08c5b50be745393b97c31162c89a0e1___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1__lambda_a4198d3d1e9f4798873a68f15acbfc3e___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2__lambda_f3eceb702d3bb95f35e8572466a46398___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x200) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR__lambda_f7cd886f5d9d790c7912a5ea05224ba2___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE__lambda_2f459d7b1de51fe0f6c48d211e4120f0___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v9 = this;
    if ( v7 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONPOINTLIGHT_SETOFFSET__lambda_0e3be02f44656b4d080e4e3876d13855___(
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) &= ~0x800u;
      return 1;
    }
  }
  return v4;
}
