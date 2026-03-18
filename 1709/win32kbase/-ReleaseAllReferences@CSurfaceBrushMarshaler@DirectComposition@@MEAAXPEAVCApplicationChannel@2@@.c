/*
 * XREFs of ?ReleaseAllReferences@CSurfaceBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0023340
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CSurfaceBrushMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[5]);
  v4 = this[6];
  this[5] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  this[6] = 0LL;
}
