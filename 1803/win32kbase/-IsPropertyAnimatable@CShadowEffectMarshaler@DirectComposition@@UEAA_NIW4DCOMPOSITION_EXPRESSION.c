/*
 * XREFs of ?IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C015BE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CShadowEffectMarshaler::IsPropertyAnimatable(__int64 a1, unsigned int a2, int a3)
{
  return (!a2 || a2 > 1 && a2 <= 5) && a3 == 18;
}
