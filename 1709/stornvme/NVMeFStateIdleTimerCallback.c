/*
 * XREFs of NVMeFStateIdleTimerCallback @ 0x1C0006230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFStateIdleTimerCallback(__int64 a1)
{
  StorPortDebugPrint(
    3LL,
    "StorNVMe - POWER: F-State Idle Timer Expired, Setting Latency Tolerance to %ums\n",
    *(_DWORD *)(a1 + 1136));
  *(_DWORD *)(a1 + 1120) &= ~0x20u;
  return StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
}
