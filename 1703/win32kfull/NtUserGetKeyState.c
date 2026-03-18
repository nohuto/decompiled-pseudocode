/*
 * XREFs of NtUserGetKeyState @ 0x1C00B8500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsKeyStateCached @ 0x1C00B8970 (IsKeyStateCached.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 *     PostUpdateKeyStateEvent @ 0x1C00B936C (PostUpdateKeyStateEvent.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  __int16 KeyState; // bx
  _QWORD *v3; // rdi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax

  EnterSharedCrit(0LL, 1LL);
  KeyState = 0;
  v3 = 0LL;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = (_QWORD *)*ThreadWin32Thread;
  if ( (*(_DWORD *)(v3[48] + 340LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v9 = v3[48];
    if ( (*(_DWORD *)(v9 + 340) & 1) != 0 )
      PostUpdateKeyStateEvent(v9);
  }
  if ( !(unsigned int)IsKeyStateCached(a1) )
  {
    if ( v3[51] != grpdeskRitInput )
      goto LABEL_6;
    if ( gpqForeground )
    {
      v10 = *(_QWORD *)(gpqForeground + 380LL);
      v11 = v3[47];
      v12 = *(_QWORD *)(v11 + 824);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v12 <= (unsigned int)v10 )
        {
          if ( (_DWORD)v12 != (_DWORD)v10
            || (v13 = HIDWORD(v12), v14 = HIDWORD(v10), (_DWORD)v13 != (_DWORD)v14)
            && (_DWORD)v13 != -1
            && (_DWORD)v14 != -1 )
          {
            if ( *(int *)(v11 + 12) >= 0 && !(unsigned int)IsForegroundShellFrameQueueAccessible(v3) )
            {
              EtwTraceUIPIInputError(v3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 3);
              goto LABEL_6;
            }
          }
        }
      }
    }
  }
  KeyState = GetKeyState(a1);
LABEL_6:
  v6 = v3[54];
  *(_DWORD *)(v6 + 112) = *(_DWORD *)(gpsi + 5688LL);
  v7 = v3[54];
  *(_QWORD *)(v7 + 116) = *(_QWORD *)(v3[48] + 192LL);
  UserSessionSwitchLeaveCrit(v7, gpsi, v6, v5);
  return KeyState;
}
