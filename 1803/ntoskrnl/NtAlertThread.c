/*
 * XREFs of NtAlertThread @ 0x14077E450
 * Callers:
 *     <none>
 * Callees:
 *     KeAlertThread @ 0x140043DB0 (KeAlertThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtAlertThread(HANDLE ThreadHandle)
{
  char PreviousMode; // bl
  NTSTATUS result; // eax
  __int64 v3; // rdx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             4,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v3) = PreviousMode;
    KeAlertThread((__int64)Object, v3);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0;
  }
  return result;
}
