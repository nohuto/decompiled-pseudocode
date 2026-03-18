/*
 * XREFs of ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0020910
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021A80 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET__lambda_906b35406400a961726b3a3948cff082___ @ 0x1C007FC98 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET_.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETTOPINSET__lambda_48736720202e4a1a68181a1e244f7701___ @ 0x1C007FCF8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETTOPINSET__l.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET__lambda_c9bfe3e300f4f487d2cc0aec257d29f7___ @ 0x1C007FD58 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETLEFTINSET__lambda_5ed9830f15740f35f4074d41a83c2e4b___ @ 0x1C007FDB8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETLEFTINSET__.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE__lambda_b077b7130a3859aa8305c9b673db2541___ @ 0x1C00816B0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE__.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitUpdateCommands(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  DirectComposition::CRectangleClipMarshaler *v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(this, a2) )
  {
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETLEFTINSET__lambda_5ed9830f15740f35f4074d41a83c2e4b___(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETTOPINSET__lambda_48736720202e4a1a68181a1e244f7701___(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET__lambda_906b35406400a961726b3a3948cff082___(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x1000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET__lambda_c9bfe3e300f4f487d2cc0aec257d29f7___(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x1000u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE__lambda_b077b7130a3859aa8305c9b673db2541___(
                               a2,
                               &v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
    }
    return 1;
  }
  return v4;
}
