/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C01D9BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxGetMenuItemRect @ 0x1C021794C (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int MenuItemRect; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v19[3]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v20[4]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v21; // [rsp+70h] [rbp-48h] BYREF

  v21 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v19;
    v19[1] = a1;
    if ( a1 )
      ++*(_DWORD *)(a1 + 8);
    v13 = ValidateHmenu(a2);
    if ( v13 )
    {
      v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v20;
      v20[1] = v13;
      ++*(_DWORD *)(v13 + 8);
      MenuItemRect = xxxGetMenuItemRect(a1, v13, a3, &v21);
      if ( a1 )
      {
        v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
        if ( (*(_BYTE *)(v16 + 224) & 1) == 0 )
        {
          v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
          if ( (*(_BYTE *)(v16 + 224) & 0x20) == 0 )
          {
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
            v16 = *(_DWORD *)(a1 + 368) & 0xF;
            if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v16 )
              TransformRectBetweenCoordinateSpaces(&v21, &v21, 0LL, a1);
          }
        }
      }
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_OWORD *)W32UserProbeAddress;
      *a4 = v21;
      ThreadUnlock1(v16, v15);
    }
    else
    {
      MenuItemRect = 0;
    }
    ThreadUnlock1(v14, v13);
  }
  else
  {
    MenuItemRect = 0;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return MenuItemRect;
}
