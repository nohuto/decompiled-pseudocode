/*
 * XREFs of NtUserNavigateFocus @ 0x1C0008DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0008F1C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserNavigateFocus(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  __int64 v8; // rcx
  __int64 TopLevelWindow; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 *v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  gbValidateHandleForIL = 0;
  v7 = (struct tagWND *)ValidateHwnd(a1);
  if ( v7 )
  {
    if ( a2 > 6 )
    {
      v8 = 87LL;
      goto LABEL_17;
    }
    if ( gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground(v7) )
    {
      v8 = 5LL;
LABEL_17:
      UserSetLastError(v8);
      goto LABEL_18;
    }
    TopLevelWindow = GetTopLevelWindow(v7);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v16[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v16;
    v16[1] = TopLevelWindow;
    if ( TopLevelWindow )
      _InterlockedIncrement((volatile signed __int32 *)(TopLevelWindow + 8));
    v11 = gptiCurrent;
    v12 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL);
    if ( v12 )
      v13 = *v12;
    else
      v13 = 0LL;
    v14 = gpqForeground;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) == TopLevelWindow )
      v4 = v13;
    else
      v4 = v13 & -(__int64)((unsigned int)xxxSetForegroundWindow2((struct tagWND *)TopLevelWindow) != 0);
    ThreadUnlock1(v14, v11);
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
