/*
 * XREFs of NtTerminateJobObject @ 0x14045A7BC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405617B4 (PspTerminateAllProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x14070AA40 (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v2 = ObReferenceObjectByHandle(
         JobHandle,
         8u,
         (POBJECT_TYPE)PsJobType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJob(Object, 0LL, (unsigned int)v2, 1825LL);
  }
  else
  {
    PspTerminateAllProcessesInJobHierarchy(Object);
    ObfDereferenceObject(Object);
  }
  return v3;
}
