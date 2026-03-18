/*
 * XREFs of xxxWaitForInputIdle @ 0x1C0115464
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C0115410 (NtUserWaitForInputIdle.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00907F8 (LockProcessByClientId.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     WaitOnPseudoEvent @ 0x1C0115634 (WaitOnPseudoEvent.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0115708 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ReferenceW32Process @ 0x1C01A0E40 (ReferenceW32Process.c)
 */

unsigned int __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2, int a3)
{
  __int64 *v5; // rbx
  unsigned int result; // eax
  char ProcessExitProcessCalled; // al
  PVOID v8; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rbx
  int v13; // eax
  __int64 i; // rax
  int v15; // edx
  unsigned int v16; // edi
  __int64 j; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    v5 = (__int64 *)gpwtiFirst;
    if ( gpwtiFirst )
    {
      do
      {
        if ( *((_DWORD *)v5 + 6) == (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent) && (HANDLE)v5[2] == a1 )
          break;
        v5 = (__int64 *)*v5;
      }
      while ( v5 );
      if ( v5 )
      {
        result = WaitOnPseudoEvent(v5 + 4, a2);
        if ( result == 128 )
          return xxxPollAndWaitForSingleObject((PVOID)v5[4], 0LL, a2);
        return result;
      }
    }
    return -1;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == a1
    && gptiCurrent == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 304LL)
    || (int)LockProcessByClientId(a1, (PEPROCESS *)&Object) < 0 )
  {
    return -1;
  }
  ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
  v8 = Object;
  if ( ProcessExitProcessCalled )
  {
LABEL_25:
    ObfDereferenceObject(v8);
    return -1;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v12 = ProcessWin32Process;
  if ( !ProcessWin32Process || (v13 = *(_DWORD *)(ProcessWin32Process + 12), (v13 & 0x21) != 0x20) )
  {
    UserSetLastError(1471LL, v10);
    v8 = Object;
    goto LABEL_25;
  }
  *(_DWORD *)(v12 + 12) = v13 | 0x20000;
  for ( i = *(_QWORD *)(v12 + 296); i; i = *(_QWORD *)(i + 640) )
    *(_DWORD *)(i + 464) |= 0x4000u;
  PushW32ThreadLock(v12, v18, (__int64)DereferenceW32Process, v11);
  ReferenceW32Process(v12);
  ObfDereferenceObject(Object);
  v16 = WaitOnPseudoEvent(v12 + 16, a2);
  if ( v16 == 128 )
    v16 = xxxPollAndWaitForSingleObject(*(PVOID *)(v12 + 16), Object, a2);
  *(_DWORD *)(v12 + 12) &= ~0x20000u;
  for ( j = *(_QWORD *)(v12 + 296); j; j = *(_QWORD *)(j + 640) )
    *(_DWORD *)(j + 464) &= ~0x4000u;
  PopAndFreeW32ThreadLock((__int64)v18, v15);
  return v16;
}
