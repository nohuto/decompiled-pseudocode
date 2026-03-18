/*
 * XREFs of WheapSqmCollectWheaPolicyTelemetry @ 0x1407CB4D4
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1407CBB04 (WheapPfaMemoryCheck.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1407CBE60 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1407CC4F0 (WheapSqmWaitWorkerRoutine.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x1402C03A8 (WheapSqmDwordCommon.c)
 */

NTSTATUS WheapSqmCollectWheaPolicyTelemetry()
{
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7201, WheaRegistryKeysPresent);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7310, WheapPolicyDisableOffline != 0);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7197, WheapPolicyMemPersistOffline != 0);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7200, WheapPolicyMemPfaDisable == 0);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7199, WheapPolicyMemPfaPageCount);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7198, WheapPolicyMemPfaThreshold);
  return WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7251, WheapPolicyMemPfaTimeout / 0x989680uLL);
}
