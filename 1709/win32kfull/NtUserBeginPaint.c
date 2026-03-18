/*
 * XREFs of NtUserBeginPaint @ 0x1C007F040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxEndPaint @ 0x1C007DE24 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  _OWORD v9[7]; // [rsp+40h] [rbp-88h] BYREF

  memset(&v9[2], 0, 0x48uLL);
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v7 = 0LL;
  if ( v6 )
  {
    *(_QWORD *)&v9[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v9;
    *((_QWORD *)&v9[0] + 1) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v7 = xxxBeginPaint((struct tagWND *)v6);
    DWORD1(v9[6]) = 0;
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v9[2];
    *(_OWORD *)(a2 + 16) = v9[3];
    *(_OWORD *)(a2 + 32) = v9[4];
    *(_OWORD *)(a2 + 48) = v9[5];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v9[6];
    ThreadUnlock1(MmUserProbeAddress, MmUserProbeAddress);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v7;
}
