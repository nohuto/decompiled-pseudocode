/*
 * XREFs of ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0024820
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateTransformCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0024B2C (-EmitUpdateTransformCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETSURFACE__lambda_7528276a618854590caf46d859c36d6d___ @ 0x1C0025564 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETSURFACE__lambda_.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT__lambda_908be733ad79dc73949ff07cf103df35___ @ 0x1C00258CC (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETVERTICALALIGNMEN.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT__lambda_925acf38849121064d17ffe99330a147___ @ 0x1C002592C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETHORIZONTALALIGNM.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETSTRETCH__lambda_f9b8937c2670049a63a1d2fca267779f___ @ 0x1C002598C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETSTRETCH__lambda_.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE__lambda_6e268feab3d7cd9521baed44fbcd0ae3___ @ 0x1C01487F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETINTERPOLATIONMOD.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  bool v7; // zf
  DirectComposition::CSurfaceBrushMarshaler *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v9 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETSURFACE__lambda_7528276a618854590caf46d859c36d6d___(
                             a2,
                             &v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CSurfaceBrushMarshaler::EmitUpdateTransformCommand(this, a2) )
  {
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT__lambda_925acf38849121064d17ffe99330a147___(
                               a2,
                               &v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT__lambda_908be733ad79dc73949ff07cf103df35___(
                               a2,
                               &v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x200) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETSTRETCH__lambda_f9b8937c2670049a63a1d2fca267779f___(
                               a2,
                               &v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE__lambda_6e268feab3d7cd9521baed44fbcd0ae3___(
                               a2,
                               &v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    if ( DirectComposition::CSurfaceBrushMarshaler::EmitUpdateTransformCommand(this, a2) )
      return 1;
  }
  return v3;
}
