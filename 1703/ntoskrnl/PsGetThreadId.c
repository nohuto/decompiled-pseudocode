/*
 * XREFs of PsGetThreadId @ 0x140026D00
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x140412B98 (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x140565618 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return Thread[1].KernelStack;
}
