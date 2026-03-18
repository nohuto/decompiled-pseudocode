/*
 * XREFs of NtUserGetKeyState @ 0x1C0050420
 * Callers:
 *     <none>
 * Callees:
 *     IsKeyStateCached @ 0x1C00505F0 (IsKeyStateCached.c)
 *     IsGpqForegroundAccessible @ 0x1C0050654 (IsGpqForegroundAccessible.c)
 *     PostUpdateKeyStateEvent @ 0x1C00510EC (PostUpdateKeyStateEvent.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int16 v3; // bx
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // r15
  __int64 v15; // r14
  __int64 *v16; // rax
  int v17; // edx
  __int16 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5, v7, v8) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v4[51] + 380LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    if ( (*(_DWORD *)(v4[51] + 380LL) & 1) != 0 )
      PostUpdateKeyStateEvent();
  }
  if ( !(unsigned int)IsKeyStateCached(a1) )
  {
    if ( v4[54] != grpdeskRitInput )
      goto LABEL_19;
    if ( !(unsigned int)IsGpqForegroundAccessible(1LL) )
    {
      EtwTraceUIPIInputError(v4, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 420LL), 3);
      goto LABEL_19;
    }
  }
  if ( a1 < 0x100 )
  {
    v14 = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v10, v12, v13) )
    {
      v16 = (__int64 *)PsGetThreadWin32Thread(v14);
      if ( v16 )
        v15 = *v16;
    }
    v17 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2) + *(_QWORD *)(v15 + 408) + 224);
    v18 = (v17 & (1 << (2 * (a1 & 3) + 1))) != 0;
    if ( _bittest(&v17, (unsigned __int8)(2 * (a1 & 3))) )
      v18 = ((v17 & (1 << (2 * (a1 & 3) + 1))) != 0) | 0xFF80;
    v3 = v18;
  }
  else
  {
    UserSetLastError(87LL);
  }
LABEL_19:
  v19 = v4[57];
  *(_DWORD *)(v19 + 112) = *(_DWORD *)(gpsi + 6984LL);
  v20 = v4[57];
  *(_QWORD *)(v20 + 116) = *(_QWORD *)(v4[51] + 224LL);
  UserSessionSwitchLeaveCrit(v20, v19);
  return v3;
}
