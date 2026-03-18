/*
 * XREFs of ?IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C015C8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CLinearTransferEffectMarshaler::IsPropertyAnimatable(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  return (a2 <= 1 || a2 > 2 && (a2 <= 4 || a2 > 5 && (a2 <= 7 || a2 - 9 <= 1))) && a3 == 18;
}
