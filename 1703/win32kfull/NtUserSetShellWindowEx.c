/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C0015280
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetShellWindow @ 0x1C00154D0 (xxxSetShellWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0045944 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct tagWND *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v21[4]; // [rsp+38h] [rbp-20h] BYREF
  struct tagWND *v22; // [rsp+70h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 82) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v20;
      v20[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( (unsigned int)ValidateHWNDND(a2, &v22) )
      {
        if ( PsGetCurrentProcessWin32Process(v12, v11)
          && ((unsigned int)*(_QWORD *)(PsGetCurrentProcessWin32Process(v14, v13) + 824) >= 0x2000 || !gbEnforceUIPI)
          && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 376LL) == PsGetCurrentProcessWin32Process(gbEnforceUIPI, v15) )
        {
          v16 = v22;
          v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v21;
          v21[1] = v16;
          ++*((_DWORD *)v16 + 2);
          v9 = xxxSetShellWindow(v10);
          ThreadUnlock1(v18, v17);
        }
        else
        {
          UserSetLastError(5LL);
        }
      }
      ThreadUnlock1(v12, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
