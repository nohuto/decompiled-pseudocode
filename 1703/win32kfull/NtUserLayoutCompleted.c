/*
 * XREFs of NtUserLayoutCompleted @ 0x1C0104550
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     GreWindowLayoutComplete @ 0x1C0104658 (GreWindowLayoutComplete.c)
 *     HandleAsyncResizeComplete @ 0x1C01F5B1C (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C024B014 (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 TopLevelWindow; // rax
  void *v17; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    v18[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v2);
    if ( *(_QWORD *)(*(_QWORD *)(v8 + 24) + 304LL) == v8 )
    {
      v17 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
      DwmAsyncCancelRotationDelay(v17);
    }
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x26u, a1);
    if ( *(char *)(v8 + 65) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v8);
      if ( TopLevelWindow )
      {
        v14 = *(_WORD *)(TopLevelWindow + 82) & 0x3FFF;
        if ( (_DWORD)v14 != 669 )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v14, v13);
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
