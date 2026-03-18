/*
 * XREFs of MmQuitNextSession @ 0x14052D250
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x14016E7DC (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1402801A0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140552770 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyMandatoryThunks @ 0x140823D28 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140823DFC (VfThunkApplyThunks.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
