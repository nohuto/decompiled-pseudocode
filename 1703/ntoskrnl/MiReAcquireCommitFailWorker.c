/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x14020BDC0
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x1401202A4 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(void *a1)
{
  PsTerminateProcess(a1, 3221225773LL);
  KeForceResumeProcess((__int64)a1);
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
