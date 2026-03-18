/*
 * XREFs of NtUserBeginPaint @ 0x1C005D9A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxEndPaint @ 0x1C003BF60 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  _OWORD v11[7]; // [rsp+40h] [rbp-88h] BYREF

  memset(&v11[2], 0, 0x48uLL);
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( v6 )
  {
    *(_QWORD *)&v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    *((_QWORD *)&v11[0] + 1) = v6;
    ++*(_DWORD *)(v6 + 8);
    v8 = xxxBeginPaint((struct tagWND *)v6);
    DWORD1(v11[6]) = 0;
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    *(_OWORD *)a2 = v11[2];
    *(_OWORD *)(a2 + 16) = v11[3];
    *(_OWORD *)(a2 + 32) = v11[4];
    *(_OWORD *)(a2 + 48) = v11[5];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v11[6];
    ThreadUnlock1(W32UserProbeAddress, v9);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
