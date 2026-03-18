/*
 * XREFs of NtUserFrostCrashedWindow @ 0x1C01D8150
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxFrostCrashedWindow @ 0x1C01D3340 (xxxFrostCrashedWindow.c)
 */

unsigned __int64 __fastcall NtUserFrostCrashedWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( !a2 || ValidateHwnd(a2) )
      v9 = xxxFrostCrashedWindow(v10, a2);
    else
      UserSetLastError(1400LL);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
