/*
 * XREFs of ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0008808
 * Callers:
 *     NtUserUpdateWindowInputSinkHints @ 0x1C0008750 (NtUserUpdateWindowInputSinkHints.c)
 * Callees:
 *     UpdateGlobalInputSinkHint @ 0x1C00088E4 (UpdateGlobalInputSinkHint.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 */

__int64 __fastcall UpdateWindowInputSinkHint(HWND a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r9
  int v7; // ecx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v5 = 0;
  if ( v4 && (((*(_WORD *)(v4 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v9[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v9;
    v9[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( (unsigned int)IsTopLevelWindow(v4) )
    {
      v7 = *(_DWORD *)(v6 + 304);
      *(_DWORD *)(v6 + 304) = v7 ^ (v7 ^ (a2 << 20)) & 0x100000;
      if ( -__CFSHR__(v7, 21) != a2 )
        UpdateGlobalInputSinkHint(a2);
    }
    else
    {
      v5 = -1073741811;
    }
    ThreadUnlock1();
  }
  else
  {
    v5 = -1073741811;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
