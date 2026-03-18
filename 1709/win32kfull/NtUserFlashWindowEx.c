/*
 * XREFs of NtUserFlashWindowEx @ 0x1C01E4780
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C009AB94 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int128 v9; // [rsp+40h] [rbp-58h]
  _QWORD v10[3]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v11; // [rsp+70h] [rbp-28h]
  __int128 v12; // [rsp+80h] [rbp-18h]
  struct tagWND *v13; // [rsp+A8h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v9 = a1[1];
  v11 = *a1;
  v12 = v9;
  v3 = 0;
  if ( ValidateHWNDND(*((HWND *)&v11 + 1), &v13) && (_DWORD)v11 == 32 && (v9 & 0xFFFFFFF0) == 0 )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v10;
    v10[1] = v13;
    _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
    v3 = xxxFlashWindow(v13, (unsigned __int16)v9 | (WORD2(v9) << 16), SDWORD2(v9));
    ThreadUnlock1(v5, v4);
  }
  else
  {
    UserSetLastError(87LL, v2);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v3;
}
