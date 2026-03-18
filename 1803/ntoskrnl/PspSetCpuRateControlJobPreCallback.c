/*
 * XREFs of PspSetCpuRateControlJobPreCallback @ 0x140584600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetCpuRateControlJobPreCallback(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1016) = (a2 + 128) & -(__int64)(a2 != 0);
  return 0LL;
}
