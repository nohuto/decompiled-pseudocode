/*
 * XREFs of xxxWaitForInputIdle @ 0x1C010C2F4
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C010C2A0 (NtUserWaitForInputIdle.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C001BB38 (LockProcessByClientId.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     WaitOnPseudoEvent @ 0x1C010C448 (WaitOnPseudoEvent.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010C51C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 */

unsigned int __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2, int a3)
{
  char ProcessExitProcessCalled; // al
  PVOID v6; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 i; // rax
  unsigned int v11; // edi
  __int64 j; // rax
  unsigned int result; // eax
  __int64 *v14; // rbx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( !a3 )
  {
    if ( (PsGetThreadProcessId((PETHREAD)*gptiCurrent) != a1
       || gptiCurrent != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 296LL))
      && (int)LockProcessByClientId(a1, (PEPROCESS *)&Object) >= 0 )
    {
      ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
      v6 = Object;
      if ( !ProcessExitProcessCalled )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Object);
        v8 = ProcessWin32Process;
        if ( ProcessWin32Process )
        {
          v9 = *(_DWORD *)(ProcessWin32Process + 12);
          if ( (v9 & 1) == 0 )
          {
            *(_DWORD *)(v8 + 12) = v9 | 0x20000;
            for ( i = *(_QWORD *)(v8 + 288); i; i = *(_QWORD *)(i + 584) )
              *(_DWORD *)(i + 440) |= 0x4000u;
            PushW32ThreadLock(v8, v15, (__int64)DereferenceW32Process);
            ObfReferenceObject(*(PVOID *)v8);
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
            ObfDereferenceObject(Object);
            v11 = WaitOnPseudoEvent(v8 + 16, a2);
            if ( v11 == 128 )
              v11 = xxxPollAndWaitForSingleObject(*(PVOID *)(v8 + 16), Object, a2);
            *(_DWORD *)(v8 + 12) &= ~0x20000u;
            for ( j = *(_QWORD *)(v8 + 288); j; j = *(_QWORD *)(j + 584) )
              *(_DWORD *)(j + 440) &= ~0x4000u;
            PopAndFreeW32ThreadLock((__int64)v15);
            return v11;
          }
        }
        UserSetLastError(1471LL);
        v6 = Object;
      }
      ObfDereferenceObject(v6);
    }
    return -1;
  }
  v14 = (__int64 *)gpwtiFirst;
  if ( !gpwtiFirst )
    return -1;
  do
  {
    if ( *((_DWORD *)v14 + 6) == (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent) && (HANDLE)v14[2] == a1 )
      break;
    v14 = (__int64 *)*v14;
  }
  while ( v14 );
  if ( !v14 )
    return -1;
  result = WaitOnPseudoEvent(v14 + 4, a2);
  if ( result == 128 )
    return xxxPollAndWaitForSingleObject((PVOID)v14[4], 0LL, a2);
  return result;
}
