/*
 * XREFs of PsGetThreadId @ 0x140120070
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x14043112C (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x140453AA8 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
