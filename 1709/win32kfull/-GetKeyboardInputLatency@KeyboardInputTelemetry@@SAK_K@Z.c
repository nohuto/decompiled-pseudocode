/*
 * XREFs of ?GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z @ 0x1C00CE990
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00CF124 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0124768 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardInputTelemetry::GetKeyboardInputLatency(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return RIMQpcCountToMilliSecs(PerformanceCounter.QuadPart - a1);
}
