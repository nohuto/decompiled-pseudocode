/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ @ 0x180033C3C
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x180033C7C (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristicsCache::RuntimeClassInitialize(RTL_SRWLOCK *pv)
{
  struct _TP_WORK *ThreadpoolWork; // rax

  InitializeSRWLock(pv + 2);
  ThreadpoolWork = CreateThreadpoolWork(CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache, pv, 0LL);
  pv[12].Ptr = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  return 0LL;
}
