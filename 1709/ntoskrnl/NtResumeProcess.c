/*
 * XREFs of NtResumeProcess @ 0x1405758A4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PsResumeProcess @ 0x140575920 (PsResumeProcess.c)
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
    v1 = PsResumeProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}
