/*
 * XREFs of NtUserScrollWindowEx @ 0x1C00696B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollWindowEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  __int128 *v10; // rsi
  _OWORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  _QWORD v21[3]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v22[2]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-58h] BYREF

  v10 = (__int128 *)a5;
  v11 = (_OWORD *)a7;
  v22[0] = 0uLL;
  EnterCrit(0LL, 1LL);
  v12 = ValidateHwnd(a1);
  if ( v12 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = v12;
    ++*(_DWORD *)(v12 + 8);
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_OWORD *)W32UserProbeAddress;
      v22[1] = *a4;
    }
    if ( a5 )
    {
      if ( a5 >= W32UserProbeAddress )
        v10 = (__int128 *)W32UserProbeAddress;
      v23 = *v10;
      v10 = &v23;
    }
    v19 = xxxScrollWindowEx((struct tagWND *)v12, (__int64)v10, a6, (unsigned __int64)v22 & -(__int64)(a7 != 0), a8);
    if ( a7 )
    {
      v18 = W32UserProbeAddress;
      if ( a7 >= W32UserProbeAddress )
        v11 = (_OWORD *)W32UserProbeAddress;
      *v11 = v22[0];
    }
    ThreadUnlock1(v18, v17);
  }
  else
  {
    v19 = 0;
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v19;
}
