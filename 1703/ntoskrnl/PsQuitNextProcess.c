/*
 * XREFs of PsQuitNextProcess @ 0x14045EF20
 * Callers:
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PsQuitNextProcess(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
