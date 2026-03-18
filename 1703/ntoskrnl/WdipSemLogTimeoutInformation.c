/*
 * XREFs of WdipSemLogTimeoutInformation @ 0x140705FF0
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140454A00 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     WdipSemWriteTimeoutEvent @ 0x14070637C (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmEnabled @ 0x14070671C (WdipSemSqmEnabled.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x140706810 (WdipSemSqmLogTimeoutDataPoints.c)
 */

__int64 __fastcall WdipSemLogTimeoutInformation(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  int v6; // ebx

  v6 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_TIMEOUT) )
  {
    v6 = WdipSemWriteTimeoutEvent(a1, a2, a3);
    if ( v6 < 0 )
      v6 = 0;
  }
  if ( (unsigned __int8)WdipSemSqmEnabled() )
  {
    v6 = WdipSemSqmLogTimeoutDataPoints(a1, a2);
    if ( v6 < 0 )
      return 0;
  }
  return (unsigned int)v6;
}
