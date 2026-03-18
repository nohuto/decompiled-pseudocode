/*
 * XREFs of ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0153E00
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018FA0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a52bc12f6855e40b42cca3cd12fa5767___ @ 0x1C0153B94 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a52bc12f6855e40b42cca3cd12fa576.c)
 *     ?EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0153DA8 (-EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CShapeVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x20000000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a52bc12f6855e40b42cca3cd12fa5767___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x20000000u;
    }
    if ( DirectComposition::CShapeVisualMarshaler::EmitShapes(this, a2) )
      return 1;
  }
  return v4;
}
