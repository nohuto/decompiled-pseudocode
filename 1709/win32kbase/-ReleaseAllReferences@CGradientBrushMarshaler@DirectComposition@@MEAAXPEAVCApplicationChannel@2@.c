/*
 * XREFs of ?ReleaseAllReferences@CGradientBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00027E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0002A68 (-ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CGradientBrushMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[6]);
  this[6] = 0LL;
  DirectComposition::CGradientBrushMarshaler::ClearStops((DirectComposition::CGradientBrushMarshaler *)this, a2);
}
