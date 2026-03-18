/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E3D0 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX__lambda_952b6b000c999d04aa5713e06a78ee9c___ @ 0x1C00206C4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETTRANSFOR.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETORIENTATION__lambda_0da63ec28eaf95972bb33284f20f15c0___ @ 0x1C0080710 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETORIENTAT.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETSCALE__lambda_a2b9f137e6bd54fb770976a3249b25b0___ @ 0x1C0080994 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETSCALE__l.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS__lambda_a17fe493a9a3d244ffd1b2531b500889___ @ 0x1C0080A40 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETROTATION.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT__lambda_32f87ddeda71ec7c51647be65d6a8b51___ @ 0x1C0080AB8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETCENTERPO.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT__lambda_ae326120eec07a33cfa3124b4300c4b1___ @ 0x1C0080C78 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETANCHORPO.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE__lambda_1e56685df1004fc9203520070e26a5fd___ @ 0x1C0081650 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3_ea_1C0081650.c)
 */

char __fastcall DirectComposition::CComponentTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CComponentTransform3DMarshaler *v7; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT__lambda_ae326120eec07a33cfa3124b4300c4b1___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
    }
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT__lambda_32f87ddeda71ec7c51647be65d6a8b51___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x80u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETORIENTATION__lambda_0da63ec28eaf95972bb33284f20f15c0___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS__lambda_a17fe493a9a3d244ffd1b2531b500889___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE__lambda_1e56685df1004fc9203520070e26a5fd___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x1000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETSCALE__lambda_a2b9f137e6bd54fb770976a3249b25b0___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x1000u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x2000) != 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX__lambda_952b6b000c999d04aa5713e06a78ee9c___(
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) |= 0x2000u;
      return 1;
    }
  }
  return v4;
}
