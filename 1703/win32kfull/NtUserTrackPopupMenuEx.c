/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C01E0CE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(__int64 a1, int a2, int a3, int a4, __int64 a5, unsigned __int64 a6)
{
  __int128 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v23[3]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v24[3]; // [rsp+68h] [rbp-70h] BYREF
  __int128 v25; // [rsp+80h] [rbp-58h] BYREF
  int v26; // [rsp+90h] [rbp-48h]

  v10 = (__int128 *)a6;
  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL);
    v15 = 0;
  }
  else
  {
    v16 = ValidateHmenu(a1);
    v15 = 0;
    if ( v16 )
    {
      v17 = ValidateHwnd(a5);
      v11 = v17;
      if ( v17 )
      {
        v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v23;
        v23[1] = v17;
        ++*(_DWORD *)(v17 + 8);
        v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v24;
        v24[1] = v16;
        ++*(_DWORD *)(v16 + 8);
        if ( a6 )
        {
          if ( a6 >= W32UserProbeAddress )
            v10 = (__int128 *)W32UserProbeAddress;
          v25 = *v10;
          v26 = *((_DWORD *)v10 + 4);
          v10 = &v25;
        }
        v15 = xxxTrackPopupMenuEx(v16, a2, a3, a4, v17, (__int64)v10);
        ThreadUnlock1(v19, v18);
        ThreadUnlock1(v21, v20);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
