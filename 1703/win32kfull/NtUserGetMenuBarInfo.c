/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C00C2BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetMenuBarInfo @ 0x1C00C2D68 (xxxGetMenuBarInfo.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // rdx
  int MenuBarInfo; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v17[9]; // [rsp+48h] [rbp-80h] BYREF

  memset(&v17[3], 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a4;
    if ( a4 >= W32UserProbeAddress )
      v11 = (_BYTE *)W32UserProbeAddress;
    *v11 = *v11;
    v11[47] = v11[47];
    LODWORD(v17[3]) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v8);
    v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
    if ( (*(_BYTE *)(v14 + 224) & 1) == 0 )
    {
      v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
      if ( (*(_BYTE *)(v14 + 224) & 0x20) == 0 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        v14 = *(_DWORD *)(v8 + 368) & 0xF;
        if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v14 )
          TransformRectBetweenCoordinateSpaces((char *)&v17[3] + 4, (char *)&v17[3] + 4, 0LL, v8);
      }
    }
    if ( MenuBarInfo )
    {
      HIDWORD(v17[5]) = 0;
      HIDWORD(v17[8]) = 0;
      *(_OWORD *)a4 = *(_OWORD *)&v17[3];
      *(_OWORD *)(a4 + 16) = *(_OWORD *)&v17[5];
      *(_OWORD *)(a4 + 32) = *(_OWORD *)&v17[7];
    }
    ThreadUnlock1(v14, v13);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return MenuBarInfo;
}
