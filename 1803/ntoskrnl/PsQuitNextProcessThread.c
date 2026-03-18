/*
 * XREFs of PsQuitNextProcessThread @ 0x140584A10
 * Callers:
 *     ExpDebuggerWorker @ 0x140803030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
