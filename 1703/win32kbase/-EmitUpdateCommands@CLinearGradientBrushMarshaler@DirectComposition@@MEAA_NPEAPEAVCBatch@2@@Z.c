/*
 * XREFs of ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0001970
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LINEARGRADIENTBRUSH_SETSURFACE__lambda_86f38ab5196f88825790a945019bd5ee___ @ 0x1C0001C2C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_LINEARGRADIENTBRUSH_SETSURFACE__.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETTRANSFORM__lambda_05ed57b5f1e5676ecfccecdbcbe9ec43___ @ 0x1C0001CC0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETTRANSFORM__lambd.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LINEARGRADIENTBRUSH_SETENDPOINT__lambda_0b89941aaa52e53b5580e8bdc4ffe38d___ @ 0x1C0001D30 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_LINEARGRADIENTBRUSH_SETENDPOINT_.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT__lambda_0b012e1993d2f99c17b34fc9d65df89a___ @ 0x1C0001D94 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_LINEARGRADIENTBRUSH_SETSTARTPOIN.c)
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  DirectComposition::CLinearGradientBrushMarshaler *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v10 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LINEARGRADIENTBRUSH_SETSURFACE__lambda_86f38ab5196f88825790a945019bd5ee___(
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v6 = *((_DWORD *)this + 4);
  v10 = this;
  if ( (v6 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETTRANSFORM__lambda_05ed57b5f1e5676ecfccecdbcbe9ec43___(
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  v7 = *((_DWORD *)this + 4);
  v10 = this;
  if ( (v7 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT__lambda_0b012e1993d2f99c17b34fc9d65df89a___(
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v10 = this;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_LINEARGRADIENTBRUSH_SETENDPOINT__lambda_0b89941aaa52e53b5580e8bdc4ffe38d___(
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  return 1;
}
