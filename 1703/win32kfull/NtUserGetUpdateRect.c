/*
 * XREFs of NtUserGetUpdateRect @ 0x1C01029E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetUpdateRect @ 0x1C0102B2C (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int UpdateRect; // ebx
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v17[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v18; // [rsp+50h] [rbp-38h] BYREF

  v18 = 0uLL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  if ( v6 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    UpdateRect = xxxGetUpdateRect(
                   v6,
                   (unsigned __int64)&v18 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
      if ( (*(_BYTE *)(v13 + 224) & 1) == 0 )
      {
        v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
        if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
          v13 = *(_DWORD *)(v11 + 368) & 0xF;
          if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v13 )
            TransformRectBetweenCoordinateSpaces(&v18, &v18, 0LL, v11);
        }
      }
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_OWORD *)W32UserProbeAddress;
      *a2 = v18;
    }
    ThreadUnlock1(v13, v12);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return UpdateRect;
}
