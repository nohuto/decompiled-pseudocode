/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ @ 0x18005F624
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x18005F454 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristicsCache::RuntimeClassInitialize(RTL_SRWLOCK *pv)
{
  struct _TP_WORK *ThreadpoolWork; // rax

  InitializeSRWLock(pv + 2);
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache,
                     pv,
                     0LL);
  pv[12].Ptr = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  return 0LL;
}
