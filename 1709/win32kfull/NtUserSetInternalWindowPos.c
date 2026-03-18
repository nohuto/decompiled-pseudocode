/*
 * XREFs of NtUserSetInternalWindowPos @ 0x1C01EB920
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2EAC (xxxSetInternalWindowPos.c)
 */

__int64 __fastcall NtUserSetInternalWindowPos(__int64 a1, int a2, struct tagRECT *a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v17; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v10 = (*(_WORD *)(v8 + 82) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v16;
      v16[1] = v8;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(1004LL, gptiCurrent);
      }
      else
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (struct tagRECT *)MmUserProbeAddress;
        v17 = *a3;
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int64 *)MmUserProbeAddress;
        v15 = *a4;
        v11 = xxxSetInternalWindowPos((struct tagWND *)v8, a2, &v17, &v15);
      }
      ThreadUnlock1(v13, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
