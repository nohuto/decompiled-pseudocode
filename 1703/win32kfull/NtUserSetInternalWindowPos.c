/*
 * XREFs of NtUserSetInternalWindowPos @ 0x1C01DF760
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2BBC (xxxSetInternalWindowPos.c)
 */

__int64 __fastcall NtUserSetInternalWindowPos(__int64 a1, int a2, __int128 *a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  if ( v8 )
  {
    v10 = (*(_WORD *)(v8 + 82) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v18;
      v18[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(1004LL);
      }
      else
      {
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          a3 = (__int128 *)W32UserProbeAddress;
        v19 = *a3;
        if ( (unsigned __int64)a4 >= W32UserProbeAddress )
          a4 = (__int64 *)W32UserProbeAddress;
        v17 = *a4;
        v13 = xxxSetInternalWindowPos((struct tagWND *)v8, a2, (int *)&v19, &v17);
      }
      ThreadUnlock1(v15, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
