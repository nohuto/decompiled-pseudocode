/*
 * XREFs of NtResumeThread @ 0x140567B94
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PsResumeThread @ 0x140567C50 (PsResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  ULONG v6; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( KeGetCurrentThread()->PreviousMode && SuspendCount )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SuspendCount < 0x7FFFFFFF0000LL )
      v4 = (__int64)SuspendCount;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    PsResumeThread(Object, &v6);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( SuspendCount )
      *SuspendCount = v6;
    return 0;
  }
  return result;
}
