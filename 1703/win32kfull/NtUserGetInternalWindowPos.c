/*
 * XREFs of NtUserGetInternalWindowPos @ 0x1C01D9760
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x1C001CFF0 (_GetWindowPlacement.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserGetInternalWindowPos(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  _OWORD *v11; // rax
  _QWORD *v12; // rdx
  _DWORD v14[12]; // [rsp+38h] [rbp-50h] BYREF

  memset(v14, 0, 0x2CuLL);
  EnterSharedCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v11 = (_OWORD *)W32UserProbeAddress;
      *v11 = *v11;
    }
    if ( a3 )
    {
      v12 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v12 = (_QWORD *)W32UserProbeAddress;
      *v12 = *v12;
    }
    v14[0] = 44;
    GetWindowPlacement(v9, (__int64)v14, 0);
    v10 = v14[2];
    if ( a2 )
      *a2 = *(_OWORD *)&v14[7];
    if ( a3 )
      *a3 = *(_QWORD *)&v14[3];
  }
  else
  {
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
