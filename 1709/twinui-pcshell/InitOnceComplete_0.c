/*
 * XREFs of InitOnceComplete_0 @ 0x1801E31D3
 * Callers:
 *     ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C3844 (-Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x1801C3960 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceComplete_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, LPVOID lpContext)
{
  return InitOnceComplete(lpInitOnce, dwFlags, lpContext);
}
