/*
 * XREFs of NtUserNavigateFocus @ 0x1C0005570
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0005660 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserNavigateFocus(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  struct tagWND *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // rbx
  __int64 TopLevelWindow; // r10
  __int64 v12; // rbx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  gbValidateHandleForIL = 0;
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v10 = v5;
  if ( !v5 )
    goto LABEL_9;
  if ( a2 > 6 )
  {
    v17 = 87LL;
    goto LABEL_12;
  }
  if ( !(unsigned int)CoreWindowProp::CompositeAppHasForeground(v5) )
  {
    v17 = 5LL;
LABEL_12:
    UserSetLastError(v17);
    goto LABEL_9;
  }
  TopLevelWindow = GetTopLevelWindow(v10);
  v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v18;
  v18[1] = TopLevelWindow;
  if ( TopLevelWindow )
    ++*(_DWORD *)(TopLevelWindow + 8);
  v12 = 0LL;
  v13 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
  if ( v13 )
    v12 = *v13;
  v4 = v12 & -(__int64)((unsigned int)xxxSetForegroundWindow2((struct tagWND *)TopLevelWindow) != 0);
  ThreadUnlock1(v15, v14);
LABEL_9:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
