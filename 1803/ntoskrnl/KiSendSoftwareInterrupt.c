/*
 * XREFs of KiSendSoftwareInterrupt @ 0x14007CC8C
 * Callers:
 *     KiSignalThreadForApc @ 0x140041EC4 (KiSignalThreadForApc.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KiRequestTimer2Expiration @ 0x14007CC18 (KiRequestTimer2Expiration.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400A6F7C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1401815B8 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402488A8 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSendSoftwareInterrupt(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  return HalSendSoftwareInterrupt(a1, a2);
}
