/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C0131C80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetComboBoxInfo @ 0x1C0131E2C (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE *v9; // rdx
  int ComboBoxInfo; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v15[4]; // [rsp+50h] [rbp-78h] BYREF
  int v16[16]; // [rsp+70h] [rbp-58h] BYREF

  memset(v16, 0, sizeof(v16));
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent, v4, v7, v8) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a2;
    if ( a2 >= W32UserProbeAddress )
      v9 = (_BYTE *)W32UserProbeAddress;
    *v9 = *v9;
    v9[63] = v9[63];
    v16[0] = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v6, (int)v16);
    v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
    if ( (*(_BYTE *)(v12 + 224) & 1) == 0 )
    {
      v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
      if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        v12 = *(_DWORD *)(v6 + 368) & 0xF;
        if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v12 )
        {
          TransformRectBetweenCoordinateSpaces(&v16[5], &v16[5], 0LL, v6);
          TransformRectBetweenCoordinateSpaces(&v16[1], &v16[1], 0LL, v6);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = *(_OWORD *)v16;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&v16[4];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&v16[8];
      *(_OWORD *)(a2 + 48) = *(_OWORD *)&v16[12];
    }
    ThreadUnlock1(v12, v11);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return ComboBoxInfo;
}
