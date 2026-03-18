/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x140251120
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x1400BCFB4 (KeForceResumeProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PsTerminateProcess @ 0x14057FB00 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
