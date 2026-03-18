/*
 * XREFs of NtUserGetKeyboardState @ 0x1C00B86B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 */

__int64 __fastcall NtUserGetKeyboardState(_BYTE *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rbx
  BOOL v3; // esi
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  BOOL v7; // eax
  _BYTE *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // r8
  _BYTE *v15; // r10
  unsigned __int64 v16; // r11
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v2 = ThreadWin32Thread;
  v3 = *(_QWORD *)(ThreadWin32Thread + 408) == grpdeskRitInput;
  if ( gpqForeground )
  {
    v4 = *(_QWORD *)(gpqForeground + 380LL);
    v5 = *(_QWORD *)(ThreadWin32Thread + 376);
    v6 = *(_QWORD *)(v5 + 824);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v6 <= (unsigned int)v4 )
      {
        v7 = 0;
        if ( (_DWORD)v6 == (_DWORD)v4 )
        {
          v18 = HIDWORD(v6);
          v19 = HIDWORD(v4);
          if ( (_DWORD)v18 == (_DWORD)v19 || (_DWORD)v19 == -1 || (_DWORD)v18 == -1 )
            v7 = 1;
        }
      }
      else
      {
        v7 = 1;
      }
    }
    else
    {
      v7 = 1;
    }
    if ( !v7 && *(int *)(v5 + 12) >= 0 && !(unsigned int)IsForegroundShellFrameQueueAccessible(v2) )
    {
      EtwTraceUIPIInputError(v2, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 3);
      v3 = 0;
    }
  }
  v8 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v8 = (_BYTE *)W32UserProbeAddress;
  *v8 = *v8;
  v8[255] = v8[255];
  v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 384);
  v14 = 0LL;
  v15 = a1;
  while ( (int)v14 < 256 )
  {
    *v15 = 0;
    if ( v3 )
      goto LABEL_19;
    v9 = 0;
    if ( (int)v14 < 32 )
      goto LABEL_19;
    while ( 1 )
    {
      v10 = v9;
      if ( (unsigned __int64)v9 >= 0xE )
        break;
      if ( byte_1C02E5AB0[v9] == (_DWORD)v14 )
        goto LABEL_19;
      ++v9;
    }
    if ( (int)v14 <= 165
      && ((int)v14 < 93 || (int)v14 >= 160)
      && (int)v14 >= 91
      && ((int)v14 <= 92 || (unsigned int)(v14 - 160) <= 5) )
    {
LABEL_19:
      v13 = v14 & 3;
      v16 = (unsigned __int64)(unsigned __int8)v14 >> 2;
      if ( ((unsigned __int8)(1 << (2 * v13)) & *(_BYTE *)(v16 + v12 + 192)) != 0 )
        *v15 |= 0x80u;
      v10 = (unsigned int)(2 * v13 + 1);
      v11 = (unsigned int)(1 << (2 * v13 + 1));
      if ( ((unsigned __int8)v11 & *(_BYTE *)(v16 + v12 + 192)) != 0 )
        *v15 |= 1u;
    }
    v14 = (unsigned int)(v14 + 1);
    ++v15;
  }
  UserSessionSwitchLeaveCrit(v10, v11, v14, v13);
  return 1LL;
}
