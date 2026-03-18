/*
 * XREFs of NtUserQueryBSDRWindow @ 0x1C01DE560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserQueryBSDRWindow()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( gspwndBSDR )
    v4 = *(_QWORD *)gspwndBSDR;
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  return v4;
}
