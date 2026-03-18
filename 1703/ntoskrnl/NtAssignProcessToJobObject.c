/*
 * XREFs of NtAssignProcessToJobObject @ 0x14054B1F4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PsAssignProcessToJobObject @ 0x14054B2E0 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x14070AAFC (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __stdcall NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS v4; // ebx
  PVOID v5; // rbx
  PVOID v6; // rdi
  unsigned int v7; // eax
  NTSTATUS v8; // esi
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PVOID v11; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &v11, 0LL);
  if ( v4 >= 0 )
  {
    v4 = ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)ProcessHandle,
           257,
           (__int64)PsProcessType,
           PreviousMode,
           1649046352,
           &Object,
           0LL,
           0LL);
    if ( v4 >= 0 )
    {
      v5 = Object;
      v6 = v11;
      v7 = PsAssignProcessToJobObject(v11, Object, 0LL);
      v8 = v7;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobAssignProcess(v6, v5, v7);
      ObfDereferenceObjectWithTag(v5, 0x624A7350u);
      ObfDereferenceObject(v6);
      return v8;
    }
    ObfDereferenceObject(v11);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v11, Object, (unsigned int)v4);
  return v4;
}
