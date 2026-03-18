/*
 * XREFs of ?EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0149F60
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147050 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0__lambda_8cd7f403f38b7898ae24184497cca95e___ @ 0x1C0149B40 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUAT.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1__lambda_2091914c1cf1803762948c2c2eb666c0___ @ 0x1C0149BA0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGH_ea_1C0149BA0.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2__lambda_37d68d00375d3b30b1619e8b713d57c3___ @ 0x1C0149C00 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGH_ea_1C0149C00.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE__lambda_85ef3985c37784968b274c944d4fdc70___ @ 0x1C0149C60 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINA.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION__lambda_168d3da3d0f2960b32fb69d934910f4b___ @ 0x1C0149CD0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTIO.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE__lambda_6b73664f286d64caf8bc4722c4f296c7___ @ 0x1C0149D48 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETINNERCON.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR__lambda_a54f22532ec0465d6c2327584066914c___ @ 0x1C0149DA8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGH_ea_1C0149DA8.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET__lambda_4d51ba2affa0090bf5bed167bc03e4a4___ @ 0x1C0149E10 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET__.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE__lambda_49ff8c4316bd9bc1691633b4f529c7cf___ @ 0x1C0149E88 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCON.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR__lambda_7a1338af5eb8b672e116a5a836624782___ @ 0x1C0149EE8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGH_ea_1C0149EE8.c)
 */

char __fastcall DirectComposition::CCompositionSpotLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  DirectComposition::CCompositionSpotLightMarshaler *v9; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v5 & 0x40) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0__lambda_8cd7f403f38b7898ae24184497cca95e___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1__lambda_2091914c1cf1803762948c2c2eb666c0___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2__lambda_37d68d00375d3b30b1619e8b713d57c3___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION__lambda_168d3da3d0f2960b32fb69d934910f4b___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x200) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE__lambda_85ef3985c37784968b274c944d4fdc70___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE__lambda_6b73664f286d64caf8bc4722c4f296c7___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x1000) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR__lambda_a54f22532ec0465d6c2327584066914c___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x2000) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET__lambda_4d51ba2affa0090bf5bed167bc03e4a4___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x4000) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE__lambda_49ff8c4316bd9bc1691633b4f529c7cf___(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x8000) == 0;
    v9 = this;
    if ( v7 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR__lambda_7a1338af5eb8b672e116a5a836624782___(
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) &= ~0x8000u;
      return 1;
    }
  }
  return v4;
}
