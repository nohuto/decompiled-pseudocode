/*
 * XREFs of ApiSetDoPrediction @ 0x1C013911C
 * Callers:
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C01122D0 (rimPredictionPolicyUpdateStateAndApply.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ApiSetDoPrediction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  _QWORD *result; // rax

  if ( (int)IsDoPredictionSupported() >= 0 )
    return (_QWORD *)DoPrediction(a1, a2, a3, a4, a5, a6, a7);
  *a6 = a2;
  result = a7;
  *a7 = a3;
  return result;
}
