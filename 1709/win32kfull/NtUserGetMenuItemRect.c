/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C01E6410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxGetMenuItemRect @ 0x1C0218AD0 (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int MenuItemRect; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v23[3]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v25; // [rsp+70h] [rbp-48h] BYREF

  v25 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v23;
    v23[1] = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v11 = ValidateHmenu(a2);
    if ( v11 )
    {
      v24[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v24;
      v24[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      MenuItemRect = xxxGetMenuItemRect(a1, v11, a3, &v25);
      if ( a1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 456) + 224LL) & 1) == 0 )
        {
          v18 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v16, v17) + 456);
          if ( (*(_BYTE *)(v18 + 224) & 0x20) == 0 )
          {
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v18, v13, v19, v20);
            v13 = 511LL;
            if ( ((*(_DWORD *)(a1 + 368) >> 8) & 0x1FF) != ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF) )
              TransformRectBetweenCoordinateSpaces(&v25, &v25, 0LL, a1);
          }
        }
      }
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      *a4 = v25;
      ThreadUnlock1(MmUserProbeAddress, v13);
    }
    else
    {
      MenuItemRect = 0;
    }
    ThreadUnlock1(v12, v11);
  }
  else
  {
    MenuItemRect = 0;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return MenuItemRect;
}
