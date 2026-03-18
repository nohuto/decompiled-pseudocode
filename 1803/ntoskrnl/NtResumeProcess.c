/*
 * XREFs of NtResumeProcess @ 0x140567A74
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PsResumeProcess @ 0x140567AF0 (PsResumeProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResumeProcess(HANDLE ProcessHandle)
{
  NTSTATUS v1; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( v1 >= 0 )
  {
    v1 = PsResumeProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}
