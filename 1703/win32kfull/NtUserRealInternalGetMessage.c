/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C004DBF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(_OWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int Message; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  _OWORD v18[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v18, 0, sizeof(v18));
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL);
    Message = 0;
  }
  else
  {
    Message = xxxRealInternalGetMessage((unsigned int)v18, a2, a3, a4, a5, a6);
    HIDWORD(v18[0]) = 0;
    HIDWORD(v18[2]) = 0;
    v15 = v18[1];
    v16 = v18[2];
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (_OWORD *)W32UserProbeAddress;
    *a1 = v18[0];
    a1[1] = v15;
    a1[2] = v16;
  }
  UserSessionSwitchLeaveCrit(v11, v10, v13, v14);
  return Message;
}
