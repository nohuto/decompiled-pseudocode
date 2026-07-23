/*
 * XREFs of NtAlertThreadByThreadId @ 0x1404D7534
 * Callers:
 *     <none>
 * Callees:
 *     KeAlertThreadByThreadId @ 0x140062644 (KeAlertThreadByThreadId.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsLookupThreadByThreadId @ 0x1404D75A0 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __cdecl NtAlertThreadByThreadId(HANDLE ThreadId)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  __int64 v3; // rdx
  NTSTATUS v4; // edi
  _KPROCESS *Process; // rax
  PETHREAD v6; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = PsLookupThreadByThreadId(ThreadId, &Thread);
  v4 = 0;
  if ( result >= 0 )
  {
    Process = CurrentThread->Process;
    v6 = Thread;
    if ( Thread->Process == Process )
      KeAlertThreadByThreadId((__int64)Thread, v3);
    else
      v4 = -1073741790;
    ObfDereferenceObject(v6);
    return v4;
  }
  return result;
}
