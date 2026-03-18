/*
 * XREFs of NtSuspendThread @ 0x140579210
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PsSuspendThread @ 0x1405792D0 (PsSuspendThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  ULONG v7; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( KeGetCurrentThread()->PreviousMode && PreviousSuspendCount )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousSuspendCount < 0x7FFFFFFF0000LL )
      v4 = (__int64)PreviousSuspendCount;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v6 = PsSuspendThread(Object, &v7);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( PreviousSuspendCount )
      *PreviousSuspendCount = v7;
    return v6;
  }
  return result;
}
