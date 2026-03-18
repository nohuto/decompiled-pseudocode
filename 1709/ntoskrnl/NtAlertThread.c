/*
 * XREFs of NtAlertThread @ 0x14071AA50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAlertThread @ 0x1400AB690 (KeAlertThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtAlertThread(HANDLE ThreadHandle)
{
  char PreviousMode; // bl
  NTSTATUS result; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             4,
             (__int64)PsThreadType,
             PreviousMode,
             1968403280,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    KeAlertThread((__int64)Object, PreviousMode);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0;
  }
  return result;
}
