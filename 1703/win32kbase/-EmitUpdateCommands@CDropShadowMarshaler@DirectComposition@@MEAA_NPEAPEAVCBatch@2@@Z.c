/*
 * XREFs of ?EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0002E30
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETOFFSET__lambda_3d0c5b44ea74fc7ebfe1dabea39653cd___ @ 0x1C000302C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_DROPSHADOW_SETOFFSET__lambda_3d0.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETCOLOR__lambda_0f65ccd11010066f3bf13d4ccdcefdb6___ @ 0x1C00030A4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_DROPSHADOW_SETCOLOR__lambda_0f65.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETBLURRADIUS__lambda_ca5ee11a4e4eac5ebce3be67c7f79afd___ @ 0x1C000310C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_DROPSHADOW_SETBLURRADIUS__lambda.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E3D0 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETMASK__lambda_c3736e7ec6bdc5e1298df4c29b81c382___ @ 0x1C0146D5C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_DROPSHADOW_SETMASK__lambda_c3736.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETOPACITY__lambda_c6072fc4d5e24a2293318db97d0ceb0b___ @ 0x1C0146DCC (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_DROPSHADOW_SETOPACITY__lambda_c6.c)
 */

char __fastcall DirectComposition::CDropShadowMarshaler::EmitUpdateCommands(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  bool v6; // zf
  DirectComposition::CDropShadowMarshaler *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETBLURRADIUS__lambda_ca5ee11a4e4eac5ebce3be67c7f79afd___(
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETCOLOR__lambda_0f65ccd11010066f3bf13d4ccdcefdb6___(
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x200) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETMASK__lambda_c3736e7ec6bdc5e1298df4c29b81c382___(
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETOFFSET__lambda_3d0c5b44ea74fc7ebfe1dabea39653cd___(
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETOPACITY__lambda_c6072fc4d5e24a2293318db97d0ceb0b___(
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    return 1;
  }
  return v4;
}
