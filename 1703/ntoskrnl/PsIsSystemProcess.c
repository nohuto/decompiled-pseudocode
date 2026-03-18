/*
 * XREFs of PsIsSystemProcess @ 0x14008B4F0
 * Callers:
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MmGetSessionCreateTime @ 0x14043D8B0 (MmGetSessionCreateTime.c)
 *     MmGetSessionGlobalVA @ 0x140454588 (MmGetSessionGlobalVA.c)
 *     MmEnumerateSystemImages @ 0x1404B0CF8 (MmEnumerateSystemImages.c)
 *     MmGetSessionLocaleId @ 0x1404F89CC (MmGetSessionLocaleId.c)
 *     MmSetSessionLocaleId @ 0x140587530 (MmSetSessionLocaleId.c)
 *     PspQueueDeferredWorkAndWait @ 0x1406DF064 (PspQueueDeferredWorkAndWait.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1407107A0 (EtwpObjectHandleRundown.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(PEPROCESS a1)
{
  return a1 == PsInitialSystemProcess;
}
