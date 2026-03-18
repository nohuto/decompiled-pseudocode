/*
 * XREFs of NtResumeProcess @ 0x1406E4154
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsResumeProcess @ 0x140440D70 (PsResumeProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResumeProcess(HANDLE ProcessHandle)
{
  NTSTATUS v1; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = ObpReferenceObjectByHandleWithTag(
         (ULONG_PTR)ProcessHandle,
         2048,
         (__int64)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         1968403280,
         &Object,
         0LL,
         0LL);
  if ( v1 >= 0 )
  {
    v1 = PsResumeProcess((struct _EX_RUNDOWN_REF *)Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}
