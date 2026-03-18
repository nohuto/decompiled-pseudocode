/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x140212D30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x1400ACDDC (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
