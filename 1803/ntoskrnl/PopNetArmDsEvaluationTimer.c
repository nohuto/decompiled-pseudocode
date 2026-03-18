/*
 * XREFs of PopNetArmDsEvaluationTimer @ 0x14076B774
 * Callers:
 *     PdcPoNetworkResiliency @ 0x140764A70 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 */

_BOOL8 PopNetArmDsEvaluationTimer()
{
  __int64 v0; // rdx
  __int64 v1; // r9

  v0 = 0LL;
  v1 = 10000000LL * (unsigned int)PopStandbyConnectivityGracePeriod;
  if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(v1 + qword_1403CD9C8) )
    v0 = qword_1403CD9C8 + v1 - MEMORY[0xFFFFF78000000008];
  return KeSetTimer2((__int64)&PopNetEvaluationTimer, -v0, 0LL, 0LL);
}
