/*
 * XREFs of MmQuitNextSession @ 0x14059E950
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x14015D43C (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x14024A230 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140568570 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyMandatoryThunks @ 0x1407B6038 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1407B610C (VfThunkApplyThunks.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
