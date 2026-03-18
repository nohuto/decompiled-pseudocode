/*
 * XREFs of KiStartDebugAccumulation @ 0x140209E70
 * Callers:
 *     KeFreezeExecution @ 0x1402093B0 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1402099CC (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
