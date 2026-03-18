/*
 * XREFs of KeReadyThread @ 0x14011216C
 * Callers:
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     KiInSwapSingleProcess @ 0x1400B2A20 (KiInSwapSingleProcess.c)
 *     KiFastReadyThread @ 0x140113FBC (KiFastReadyThread.c)
 */

char __fastcall KeReadyThread(_KTHREAD *a1)
{
  __int64 Process; // rdx
  char result; // al
  unsigned __int8 CurrentIrql; // r8

  Process = (__int64)a1->ApcState.Process;
  if ( (*(_DWORD *)(Process + 572) & 7) == 0 )
    return KiFastReadyThread(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  result = KiInSwapSingleProcess(a1, Process, CurrentIrql);
  if ( !result )
    return KiFastReadyThread(a1);
  return result;
}
