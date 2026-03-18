/*
 * XREFs of ?CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0005660
 * Callers:
 *     NtUserNavigateFocus @ 0x1C0005570 (NtUserNavigateFocus.c)
 *     GetActiveTrackPwnd @ 0x1C01BC974 (GetActiveTrackPwnd.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

__int64 __fastcall CoreWindowProp::CompositeAppHasForeground(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  struct tagWND *TopLevelWindow; // rbp
  __int64 v4; // rax
  struct tagWND *v5; // rdi
  struct tagWND *TopLevelHost; // rax
  __int64 v7; // rsi
  struct tagWND *v8; // rax
  __int64 v9; // rax

  v1 = 0;
  if ( !gpqForeground )
    return 0LL;
  v2 = *(_QWORD *)(gpqForeground + 88LL);
  if ( !v2 )
    return 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  v4 = GetTopLevelWindow(v2);
  v5 = (struct tagWND *)v4;
  if ( !TopLevelWindow || !v4 )
    return 0LL;
  TopLevelHost = CoreWindowProp::GetTopLevelHost(TopLevelWindow);
  v7 = GetTopLevelWindow(TopLevelHost);
  if ( !v7 )
    v7 = (__int64)TopLevelWindow;
  v8 = CoreWindowProp::GetTopLevelHost(v5);
  v9 = GetTopLevelWindow(v8);
  if ( !v9 )
    v9 = (__int64)v5;
  if ( v7 == v9 || *(_QWORD *)(v7 + 256) == v9 )
    return 1;
  return v1;
}
