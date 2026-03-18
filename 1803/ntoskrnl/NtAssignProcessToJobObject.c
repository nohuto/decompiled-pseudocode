/*
 * XREFs of NtAssignProcessToJobObject @ 0x140530290
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsAssignProcessToJobObject @ 0x140530390 (PsAssignProcessToJobObject.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTraceJobAssignProcess @ 0x1407A790C (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __stdcall NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  int v3; // esi
  PVOID v4; // rdi
  PVOID v5; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v8; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v3 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, KeGetCurrentThread()->PreviousMode, &v8, 0LL);
  if ( v3 >= 0 )
  {
    if ( ProcessHandle == (HANDLE)-7LL )
    {
      Object = 0LL;
      goto LABEL_4;
    }
    v3 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x624A7350u, (__int64)&Object, 0LL, 0LL);
    if ( v3 >= 0 )
    {
LABEL_4:
      v4 = Object;
      v5 = v8;
      v3 = PsAssignProcessToJobObject((ULONG_PTR)v8, Object);
      goto LABEL_5;
    }
  }
  v4 = Object;
  v5 = v8;
LABEL_5:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v5, v4, (unsigned int)v3);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x624A7350u);
  if ( v5 )
    ObfDereferenceObject(v5);
  return v3;
}
