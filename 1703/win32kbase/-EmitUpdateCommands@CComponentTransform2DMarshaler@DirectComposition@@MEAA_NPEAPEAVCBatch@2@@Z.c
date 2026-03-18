/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E3D0 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX__lambda_8e27e368b213886017cbcce0d374cdc4___ @ 0x1C007E8DC (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETTRANSFOR.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETSCALE__lambda_6048ccecba1615198592d45635461d84___ @ 0x1C00803E4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETSCALE__l.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETOFFSET__lambda_cdb35c6cdab0467f092d1c5f3e41d906___ @ 0x1C0080450 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETOFFSET__.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT__lambda_07f550606503c46a5ddadc30f3af38e5___ @ 0x1C00804BC (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETANCHORPO.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT__lambda_4216ace2a3a9ce7a95c5444156fe5754___ @ 0x1C0080528 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETCENTERPO.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE__lambda_69ec054dab31664297bc4004e316ccaa___ @ 0x1C0080914 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETROTATION.c)
 */

char __fastcall DirectComposition::CComponentTransform2DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CComponentTransform2DMarshaler *v7; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT__lambda_07f550606503c46a5ddadc30f3af38e5___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
    }
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT__lambda_4216ace2a3a9ce7a95c5444156fe5754___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x80u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETOFFSET__lambda_cdb35c6cdab0467f092d1c5f3e41d906___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE__lambda_69ec054dab31664297bc4004e316ccaa___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETSCALE__lambda_6048ccecba1615198592d45635461d84___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x1000) != 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX__lambda_8e27e368b213886017cbcce0d374cdc4___(
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) |= 0x1000u;
      return 1;
    }
  }
  return v4;
}
