/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1C0112640
 * Callers:
 *     <none>
 * Callees:
 *     GreWindowBeginLayoutUpdate @ 0x1C0007EB8 (GreWindowBeginLayoutUpdate.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall NtUserBeginLayoutUpdate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 TopLevelWindow; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  if ( v3 && (v5 = (*(_WORD *)(v3 + 82) & 0x3FFFu) - 669, (v5 & 0xFFFFFFFD) != 0) )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v3;
    ++*(_DWORD *)(v3 + 8);
    if ( !(unsigned int)IsTopLevelWindow(v3) && *(char *)(v10 + 65) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v10);
      if ( TopLevelWindow )
      {
        v9 = *(_WORD *)(TopLevelWindow + 82) & 0x3FFF;
        if ( (_DWORD)v9 != 669 && *(char *)(TopLevelWindow + 65) < 0 )
          GreWindowBeginLayoutUpdate(*(HWND *)TopLevelWindow, v8);
      }
    }
    ThreadUnlock1(v9, v8);
  }
  else
  {
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
