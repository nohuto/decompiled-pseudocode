/*
 * XREFs of WdipSemWriteEvent @ 0x140467B20
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140467910 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x1405CA43C (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x140706084 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x140706168 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1407061F8 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x140706260 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1407062E8 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x14070637C (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1407065B4 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140706770 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
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
