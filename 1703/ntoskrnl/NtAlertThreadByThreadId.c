/*
 * XREFs of NtAlertThreadByThreadId @ 0x140430D80
 * Callers:
 *     <none>
 * Callees:
 *     KeAlertThreadByThreadId @ 0x140018540 (KeAlertThreadByThreadId.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsLookupThreadByThreadId @ 0x14050EEE0 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __cdecl NtAlertThreadByThreadId(HANDLE ThreadId)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  _KPROCESS *Process; // rax
  PETHREAD v5; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = PsLookupThreadByThreadId(ThreadId, &Thread);
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
