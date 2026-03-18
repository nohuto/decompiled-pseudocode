/*
 * XREFs of NtUserLayoutCompleted @ 0x1C010F930
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     GreWindowLayoutComplete @ 0x1C010FA38 (GreWindowLayoutComplete.c)
 *     HandleAsyncResizeComplete @ 0x1C01DCE50 (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C024C914 (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 TopLevelWindow; // rax
  void *v11; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v12;
    v12[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v5);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 304LL) == v5 )
    {
      v11 = (void *)ReferenceDwmApiPort(v6);
      DwmAsyncCancelRotationDelay(v11);
    }
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 0x26u, a1);
    if ( *(char *)(v5 + 65) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      if ( TopLevelWindow )
      {
        v8 = *(_WORD *)(TopLevelWindow + 82) & 0x3FFF;
        if ( (_DWORD)v8 != 669 )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v8, v7);
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
