/*
 * XREFs of MmQuitNextSession @ 0x14045EE60
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x140168578 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1402350E0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140428DC0 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyMandatoryThunks @ 0x14077427C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140774350 (VfThunkApplyThunks.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
