/*
 * XREFs of NtUserValidateRect @ 0x1C0108600
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxValidateRect @ 0x1C01086F8 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v13; // [rsp+58h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (__int128 *)W32UserProbeAddress;
    v13 = *a2;
    a2 = &v13;
  }
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_7;
  }
  else
  {
    v7 = 0LL;
  }
  v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v12;
  v12[1] = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v4 = xxxValidateRect(v7, a2);
  ThreadUnlock1(v10, v9);
LABEL_7:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
