/*
 * XREFs of KiStartDebugAccumulation @ 0x140247AA0
 * Callers:
 *     KeFreezeExecution @ 0x140246F28 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1402475A0 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
