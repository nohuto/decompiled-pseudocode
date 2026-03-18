/*
 * XREFs of WdipSemWriteEvent @ 0x1405AB5BC
 * Callers:
 *     WdipSemSqmInit @ 0x1405AB538 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x14073F758 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x14073F83C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x14073F8CC (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x14073F934 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemActionsEvent @ 0x14073F9BC (WdipSemWriteSemActionsEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14073FB9C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x14073FC30 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x140740158 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x14074030C (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  REGHANDLE v5; // rdi

  v5 = WdipSemRegHandle;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled(WdipSemRegHandle, a2) )
    return EtwWrite(v5, a2, a3, a4, UserData);
  return -1073741816;
}
