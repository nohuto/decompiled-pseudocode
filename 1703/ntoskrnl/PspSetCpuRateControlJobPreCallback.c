/*
 * XREFs of PspSetCpuRateControlJobPreCallback @ 0x14045E5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetCpuRateControlJobPreCallback(__int64 a1, __int64 a2)
{
  if ( a2 )
    *(_QWORD *)(a1 + 1016) = a2 + 128;
  else
    *(_QWORD *)(a1 + 1016) = 0LL;
  return 0LL;
}
