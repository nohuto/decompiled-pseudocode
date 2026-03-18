/*
 * XREFs of NtUserGetImeInfoEx @ 0x1C0010A50
 * Callers:
 *     <none>
 * Callees:
 *     GetImeInfoEx @ 0x1C0010C30 (GetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C0010D60 (_GetProcessWindowStation.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetImeInfoEx(_OWORD *a1, unsigned int a2)
{
  _BYTE *v4; // rdx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 ProcessWindowStation; // rax
  __int64 v10; // rdx
  int ImeInfo; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  _OWORD *v14; // rcx
  _BYTE v16[352]; // [rsp+40h] [rbp-178h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v4 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v4 = (_BYTE *)W32UserProbeAddress;
    *v4 = *v4;
    v4[351] = v4[351];
    v5 = a1;
    v6 = v16;
    v7 = 2LL;
    v8 = 2LL;
    do
    {
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v6 += 8;
      *(v6 - 1) = v5[7];
      v5 += 8;
      --v8;
    }
    while ( v8 );
    *v6 = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    v6[3] = v5[3];
    v6[4] = v5[4];
    v6[5] = v5[5];
    ProcessWindowStation = GetProcessWindowStation(0LL);
    ImeInfo = GetImeInfoEx(ProcessWindowStation, v16, a2);
    v14 = v16;
    do
    {
      *a1 = *v14;
      a1[1] = v14[1];
      a1[2] = v14[2];
      a1[3] = v14[3];
      a1[4] = v14[4];
      a1[5] = v14[5];
      a1[6] = v14[6];
      a1 += 8;
      *(a1 - 1) = v14[7];
      v14 += 8;
      --v7;
    }
    while ( v7 );
    *a1 = *v14;
    a1[1] = v14[1];
    a1[2] = v14[2];
    a1[3] = v14[3];
    a1[4] = v14[4];
    a1[5] = v14[5];
  }
  else
  {
    UserSetLastError(120LL);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v14, v10, v12, v13);
  return ImeInfo;
}
