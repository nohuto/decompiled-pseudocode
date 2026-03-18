/*
 * XREFs of KiSendSoftwareInterrupt @ 0x1400ABAA4
 * Callers:
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400AAB38 (KiApplyForegroundBoostThread.c)
 *     KiSignalThreadForApc @ 0x1400AB2FC (KiSignalThreadForApc.c)
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F888 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRequestTimer2Expiration @ 0x140128108 (KiRequestTimer2Expiration.c)
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x140153ED0 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140208FF0 (KeSetSelectedCpuSetsThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14020AAC8 (KiSendHeteroRescheduleIntRequestHelper.c)
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
