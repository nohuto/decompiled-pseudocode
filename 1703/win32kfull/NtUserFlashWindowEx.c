/*
 * XREFs of NtUserFlashWindowEx @ 0x1C01D8010
 * Callers:
 *     <none>
 * Callees:
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0045944 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  int v2; // ebx
  struct tagWND *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+40h] [rbp-58h]
  _QWORD v12[3]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v13; // [rsp+70h] [rbp-28h]
  __int128 v14; // [rsp+80h] [rbp-18h]
  struct tagWND *v15; // [rsp+A8h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > W32UserProbeAddress )
    a1 = (__int128 *)W32UserProbeAddress;
  v11 = a1[1];
  v13 = *a1;
  v14 = v11;
  v2 = 0;
  if ( ValidateHWNDND(*((HWND *)&v13 + 1), &v15) && (_DWORD)v13 == 32 && (v11 & 0xFFFFFFF0) == 0 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v12;
    v3 = v15;
    v12[1] = v15;
    ++*((_DWORD *)v15 + 2);
    v2 = xxxFlashWindow(v3, (unsigned __int16)v11 | (WORD2(v11) << 16), SDWORD2(v11));
    ThreadUnlock1(v5, v4);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v2;
}
