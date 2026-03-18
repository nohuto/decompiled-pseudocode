/*
 * XREFs of NtUserFrostCrashedWindow @ 0x1C01E48C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxFrostCrashedWindow @ 0x1C01D760C (xxxFrostCrashedWindow.c)
 */

unsigned __int64 __fastcall NtUserFrostCrashedWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    if ( !a2 || ValidateHwnd(a2) )
      v7 = xxxFrostCrashedWindow(v8, a2);
    else
      UserSetLastError(1400LL, v9);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
