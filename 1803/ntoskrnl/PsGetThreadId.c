/*
 * XREFs of PsGetThreadId @ 0x1400BCBB0
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x14047CCFC (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x140494618 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
