/*
 * XREFs of NtUserGetKeyboardState @ 0x1C0050280
 * Callers:
 *     <none>
 * Callees:
 *     IsKeyStateCached @ 0x1C00505F0 (IsKeyStateCached.c)
 *     IsGpqForegroundAccessible @ 0x1C0050654 (IsGpqForegroundAccessible.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetKeyboardState(ULONG64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  BOOL v2; // r14d
  _BYTE *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r15
  int v7; // esi
  _BYTE *v8; // rdi
  int v9; // r8d
  unsigned __int64 v10; // r9

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v2 = *(_QWORD *)(ThreadWin32Thread + 432) == grpdeskRitInput;
  if ( !(unsigned int)IsGpqForegroundAccessible(1LL) )
  {
    EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 420LL), 3);
    v2 = 0;
  }
  v3 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (_BYTE *)MmUserProbeAddress;
  *v3 = *v3;
  v3[255] = v3[255];
  v6 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408);
  v7 = 0;
  v8 = (_BYTE *)a1;
  while ( v7 < 256 )
  {
    *v8 = 0;
    if ( v2 || (unsigned int)IsKeyStateCached((unsigned int)v7) )
    {
      v9 = v7 & 3;
      v10 = (unsigned __int64)(unsigned __int8)v7 >> 2;
      if ( ((unsigned __int8)(1 << (2 * v9)) & *(_BYTE *)(v10 + v6 + 224)) != 0 )
        *v8 = 0x80;
      v5 = (unsigned int)(2 * v9 + 1);
      v4 = (unsigned int)(1 << (2 * v9 + 1));
      if ( ((unsigned __int8)v4 & *(_BYTE *)(v10 + v6 + 224)) != 0 )
        *v8 |= 1u;
    }
    ++v7;
    ++v8;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return 1LL;
}
