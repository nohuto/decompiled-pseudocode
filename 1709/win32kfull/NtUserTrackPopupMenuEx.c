/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C01ECE40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(__int64 a1, int a2, int a3, int a4, __int64 a5, ULONG64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int128 *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v22[3]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-70h] BYREF
  __int128 v24; // [rsp+80h] [rbp-58h] BYREF
  int v25; // [rsp+90h] [rbp-48h]

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v10);
    v13 = 0;
  }
  else
  {
    v14 = ValidateHmenu(a1);
    v13 = 0;
    if ( v14 )
    {
      v15 = ValidateHwnd(a5);
      if ( v15 )
      {
        v22[0] = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = v22;
        v22[1] = v15;
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v23[0] = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = v23;
        v23[1] = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v16 = (__int128 *)a6;
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v16 = (__int128 *)MmUserProbeAddress;
          v24 = *v16;
          v25 = *((_DWORD *)v16 + 4);
          v16 = &v24;
        }
        v13 = xxxTrackPopupMenuEx(v14, a2, a3, a4, (struct tagWND *)v15, (__int64)v16);
        ThreadUnlock1(v18, v17);
        ThreadUnlock1(v20, v19);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v13;
}
