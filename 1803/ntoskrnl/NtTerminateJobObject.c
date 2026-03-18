/*
 * XREFs of NtTerminateJobObject @ 0x140579730
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405798A0 (PspTerminateAllProcessesInJobHierarchy.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     EtwTraceJob @ 0x1407A7840 (EtwTraceJob.c)
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
      EtwTraceJob(0LL, 0LL, (unsigned int)v2, 1825LL);
  }
  else
  {
    PspTerminateAllProcessesInJobHierarchy(Object);
    ObfDereferenceObject(Object);
  }
  return v3;
}
