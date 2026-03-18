/*
 * XREFs of NtAlertThreadByThreadId @ 0x1404C6634
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAlertThreadByThreadId @ 0x1400893F0 (KeAlertThreadByThreadId.c)
 *     PsLookupThreadByThreadId @ 0x1404C5690 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall NtAlertThreadByThreadId(void *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  int v3; // edi
  _KPROCESS *Process; // rax
  PETHREAD v5; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = PsLookupThreadByThreadId(a1, &Thread);
  v3 = 0;
  if ( result >= 0 )
  {
    Process = CurrentThread->Process;
    v5 = Thread;
    if ( Thread->Process == Process )
      KeAlertThreadByThreadId((__int64)Thread);
    else
      v3 = -1073741790;
    ObfDereferenceObject(v5);
    return v3;
  }
  return result;
}
