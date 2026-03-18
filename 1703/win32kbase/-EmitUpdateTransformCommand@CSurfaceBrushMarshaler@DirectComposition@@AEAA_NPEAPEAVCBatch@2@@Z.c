/*
 * XREFs of ?EmitUpdateTransformCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0024B2C
 * Callers:
 *     ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0024820 (-EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETTRANSFORM__lambda_05ed57b5f1e5676ecfccecdbcbe9ec43___ @ 0x1C0001CC0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETTRANSFORM__lambd.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateTransformCommand(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v4; // dl
  char updated; // al
  DirectComposition::CSurfaceBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETTRANSFORM__lambda_05ed57b5f1e5676ecfccecdbcbe9ec43___(
                a2,
                (__int64)&v7);
    v4 = 0;
    if ( !updated )
      return v4;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  return 1;
}
