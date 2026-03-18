/*
 * XREFs of NtTerminateThread @ 0x1404D94C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS v2; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( ThreadHandle )
  {
    if ( ThreadHandle != (HANDLE)-2LL )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 1,
                 (__int64)PsThreadType,
                 CurrentThread->PreviousMode,
                 1700033360,
                 &Object,
                 0LL,
                 0LL);
      v2 = result;
      if ( result < 0 )
        return result;
      if ( Object != CurrentThread )
      {
        v2 = PspTerminateThreadByPointer((__int64)Object, ExitStatus, 0);
        ObfDereferenceObjectWithTag(Object, 0x65547350u);
        return v2;
      }
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
    }
  }
  else if ( CurrentThread->ApcState.Process[1].ThreadSeed[0] == 1 )
  {
    return -1073741605;
  }
  PspTerminateThreadByPointer((__int64)CurrentThread, ExitStatus, 1);
  return v2;
}
