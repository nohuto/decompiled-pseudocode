/*
 * XREFs of ?ReleaseAllReferences@CNineGridBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0001D30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CNineGridBrushMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[5]);
  this[5] = 0LL;
}
