/*
 * XREFs of ?ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014F530
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000A2E0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CInjectionAnimationMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = this[15];
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    this[15] = 0LL;
    this[17] = 0LL;
    this[16] = 0LL;
  }
}
