/*
 * XREFs of NtUserScrollWindowEx @ 0x1C006C500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollWindowEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG64 a4,
        ULONG64 a5,
        __int64 a6,
        ULONG64 a7,
        int a8)
{
  _OWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _OWORD *v13; // r9
  __int128 *v14; // rdx
  ULONG64 v15; // rdx
  ULONG64 v16; // rcx
  unsigned int v17; // ebx
  _QWORD v20[3]; // [rsp+78h] [rbp-80h] BYREF
  _OWORD v21[2]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-48h] BYREF

  v9 = (_OWORD *)a7;
  v21[0] = 0uLL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v20[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v20;
    v20[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v13 = (_OWORD *)a4;
    if ( a4 )
    {
      if ( a4 >= MmUserProbeAddress )
        v13 = (_OWORD *)MmUserProbeAddress;
      v21[1] = *v13;
    }
    v14 = (__int128 *)a5;
    if ( a5 )
    {
      if ( a5 >= MmUserProbeAddress )
        v14 = (__int128 *)MmUserProbeAddress;
      v22 = *v14;
      v14 = &v22;
    }
    v17 = xxxScrollWindowEx((struct tagWND *)v10, (__int64)v14, a6, (unsigned __int64)v21 & -(__int64)(a7 != 0), a8);
    if ( a7 )
    {
      v16 = MmUserProbeAddress;
      v15 = MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v9 = (_OWORD *)MmUserProbeAddress;
      *v9 = v21[0];
    }
    ThreadUnlock1(v16, v15);
  }
  else
  {
    v17 = 0;
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v17;
}
