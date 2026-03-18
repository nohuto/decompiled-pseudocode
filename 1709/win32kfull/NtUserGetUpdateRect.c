/*
 * XREFs of NtUserGetUpdateRect @ 0x1C010AB90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetUpdateRect @ 0x1C010ACF0 (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  unsigned int UpdateRect; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v22[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v23; // [rsp+50h] [rbp-38h] BYREF

  v23 = 0uLL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = v6;
  if ( v6 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v22;
    v22[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    UpdateRect = xxxGetUpdateRect(
                   v6,
                   (unsigned __int64)&v23 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v13, v14) + 456) + 224LL) & 1) == 0 )
      {
        v17 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v15, v16) + 456);
        if ( (*(_BYTE *)(v17 + 224) & 0x20) == 0 )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17, v10, v18, v19);
          v10 = 511LL;
          if ( ((*(_DWORD *)(v9 + 368) >> 8) & 0x1FF) != ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF) )
            TransformRectBetweenCoordinateSpaces(&v23, &v23, 0LL, v9);
        }
      }
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v23;
    }
    ThreadUnlock1(v11, v10);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return UpdateRect;
}
