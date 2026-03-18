/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x140202BF4
 * Callers:
 *     KeEnableProfiling @ 0x1406D84B8 (KeEnableProfiling.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140716370 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread((__int64)KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
