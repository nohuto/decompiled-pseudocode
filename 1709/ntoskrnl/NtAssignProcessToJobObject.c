/*
 * XREFs of NtAssignProcessToJobObject @ 0x14050BC70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PsAssignProcessToJobObject @ 0x14050BD70 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x1407459A0 (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __stdcall NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v4; // esi
  PVOID v5; // rdi
  PVOID v6; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v9; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &v9, 0LL);
  if ( v4 >= 0 )
  {
    if ( ProcessHandle == (HANDLE)-7LL )
    {
      Object = 0LL;
      goto LABEL_4;
    }
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
LABEL_4:
      v5 = Object;
      v6 = v9;
      v4 = PsAssignProcessToJobObject((ULONG_PTR)v9, Object);
      goto LABEL_5;
    }
  }
  v5 = Object;
  v6 = v9;
LABEL_5:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v6, v5, (unsigned int)v4);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x624A7350u);
  if ( v6 )
    ObfDereferenceObject(v6);
  return v4;
}
