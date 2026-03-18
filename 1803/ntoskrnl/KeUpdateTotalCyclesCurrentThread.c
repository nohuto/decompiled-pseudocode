/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x140002044
 * Callers:
 *     PsQueryTotalCycleTimeProcess @ 0x14048B3B0 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x140742338 (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
