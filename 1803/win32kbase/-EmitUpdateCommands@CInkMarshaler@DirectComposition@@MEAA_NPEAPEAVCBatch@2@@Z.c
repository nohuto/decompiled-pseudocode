/*
 * XREFs of ?EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0148230
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147ECC (-EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentCountUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147F70 (-EmitSegmentCountUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147FD8 (-EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitStartPointUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01481B4 (-EmitStartPointUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInkMarshaler::EmitUpdateCommands(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CInkMarshaler::EmitBasicStateUpdate(this, a2)
    && DirectComposition::CInkMarshaler::EmitStartPointUpdate(this, a2)
    && DirectComposition::CInkMarshaler::EmitSegmentCountUpdate(this, a2) )
  {
    return DirectComposition::CInkMarshaler::EmitSegmentUpdate(this, a2);
  }
  return v4;
}
