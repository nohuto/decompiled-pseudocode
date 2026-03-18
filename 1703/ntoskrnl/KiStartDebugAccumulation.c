/*
 * XREFs of KiStartDebugAccumulation @ 0x140203B6C
 * Callers:
 *     KeFreezeExecution @ 0x1402030B4 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1402036D4 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
