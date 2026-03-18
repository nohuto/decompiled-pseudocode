/*
 * XREFs of PsQuitNextProcess @ 0x1405F1520
 * Callers:
 *     ExpDebuggerWorker @ 0x140796030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcess(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
