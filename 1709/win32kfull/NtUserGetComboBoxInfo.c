/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C0137280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetComboBoxInfo @ 0x1C013743C (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG_PTR v6; // rsi
  _BYTE *v7; // rdx
  int ComboBoxInfo; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _OWORD v20[6]; // [rsp+50h] [rbp-78h] BYREF

  memset(&v20[2], 0, 0x40uLL);
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    *(_QWORD *)&v20[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v20;
    *((_QWORD *)&v20[0] + 1) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[63] = v7[63];
    LODWORD(v20[2]) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v6);
    v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) + 456);
    if ( (*(_BYTE *)(v13 + 224) & 1) == 0 )
    {
      v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 456);
      if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12, v16, v17);
        v12 = 511LL;
        v13 = *(_DWORD *)(v6 + 368) >> 8;
        LOWORD(v13) = v13 & 0x1FF;
        if ( (_WORD)v13 != ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF) )
        {
          TransformRectBetweenCoordinateSpaces((char *)&v20[3] + 4, (char *)&v20[3] + 4, 0LL, v6);
          TransformRectBetweenCoordinateSpaces((char *)&v20[2] + 4, (char *)&v20[2] + 4, 0LL, v6);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v20[2];
      *(_OWORD *)(a2 + 16) = v20[3];
      *(_OWORD *)(a2 + 32) = v20[4];
      *(_OWORD *)(a2 + 48) = v20[5];
    }
    ThreadUnlock1(v13, v12);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return ComboBoxInfo;
}
