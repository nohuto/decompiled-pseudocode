/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1C011AE80
 * Callers:
 *     <none>
 * Callees:
 *     GreWindowBeginLayoutUpdate @ 0x1C000C394 (GreWindowBeginLayoutUpdate.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 */

__int64 __fastcall NtUserBeginLayoutUpdate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 TopLevelWindow; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  if ( v3 && (v5 = (*(_WORD *)(v3 + 82) & 0x3FFFu) - 669, (v5 & 0xFFFFFFFD) != 0) )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v11;
    v11[1] = v3;
    _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
    if ( !(unsigned int)IsTopLevelWindow(v3) && *(char *)(v8 + 65) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v8);
      if ( TopLevelWindow )
      {
        v7 = *(_WORD *)(TopLevelWindow + 82) & 0x3FFF;
        if ( (_DWORD)v7 != 669 && *(char *)(TopLevelWindow + 65) < 0 )
          GreWindowBeginLayoutUpdate(*(HWND *)TopLevelWindow, v6);
      }
    }
    ThreadUnlock1(v7, v6);
  }
  else
  {
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
