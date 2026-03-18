/*
 * XREFs of exp @ 0x1800DB77E
 * Callers:
 *     ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z @ 0x18001C890 (-EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x1801C0610 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl exp(double X)
{
  return _o_exp(X);
}
