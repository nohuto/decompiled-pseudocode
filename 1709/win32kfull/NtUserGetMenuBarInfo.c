/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C007BE60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxGetMenuBarInfo @ 0x1C007C018 (xxxGetMenuBarInfo.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR v8; // rsi
  _BYTE *v9; // rdx
  int MenuBarInfo; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v15[9]; // [rsp+48h] [rbp-80h] BYREF

  memset(&v15[3], 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v15;
    v15[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[47] = v9[47];
    LODWORD(v15[3]) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v8);
    v12 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
    if ( (*(_BYTE *)(v12 + 224) & 1) == 0 )
    {
      v12 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
      if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12, v11);
        v11 = 511LL;
        v12 = *(_DWORD *)(v8 + 368) >> 8;
        LOWORD(v12) = v12 & 0x1FF;
        if ( (_WORD)v12 != ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF) )
          TransformRectBetweenCoordinateSpaces((char *)&v15[3] + 4, (char *)&v15[3] + 4, 0LL, v8);
      }
    }
    if ( MenuBarInfo )
    {
      HIDWORD(v15[5]) = 0;
      HIDWORD(v15[8]) = 0;
      *(_OWORD *)a4 = *(_OWORD *)&v15[3];
      *(_OWORD *)(a4 + 16) = *(_OWORD *)&v15[5];
      *(_OWORD *)(a4 + 32) = *(_OWORD *)&v15[7];
    }
    ThreadUnlock1(v12, v11);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return MenuBarInfo;
}
