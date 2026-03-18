/*
 * XREFs of NtUserSetScrollInfo @ 0x1C0083580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSetScrollBar @ 0x1C0083690 (xxxSetScrollBar.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+68h] [rbp-40h]

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    v8 = (*(_WORD *)(v6 + 82) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v13;
      v13[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      if ( a2 > 3 )
      {
        UserSetLastError(87LL, gptiCurrent);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v14 = *(_OWORD *)a3;
        v15 = *(_QWORD *)(a3 + 16);
        v16 = *(_DWORD *)(a3 + 24);
        v9 = xxxSetScrollBar((struct tagWND *)v6);
      }
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
