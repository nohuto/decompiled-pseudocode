/*
 * XREFs of ?IsPropertyAnimatable@CColorGradientStopMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01501F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CColorGradientStopMarshaler::IsPropertyAnimatable(__int64 a1, int a2, int a3)
{
  bool result; // al

  result = 0;
  if ( !a2 )
    return a3 == 18;
  if ( a2 != 1 )
    return result;
  return a3 == 69;
}
