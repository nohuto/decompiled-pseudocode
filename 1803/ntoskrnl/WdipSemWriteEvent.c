/*
 * XREFs of WdipSemWriteEvent @ 0x14060CBE4
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x14060C9A8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x1406392D8 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1407A1ACC (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1407A1BB0 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1407A1C40 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1407A1CA8 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1407A1D30 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1407A1DC4 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1407A2004 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1407A21C0 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
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
