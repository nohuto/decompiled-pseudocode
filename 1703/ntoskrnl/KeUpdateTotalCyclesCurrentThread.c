/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x1400073B0
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140007340 (KeQueryTotalCycleTimeThread.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14041F920 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x1406AD1B8 (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
