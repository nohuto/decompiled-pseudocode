/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C00F5CD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rdx
  int Message; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  ULONG64 v15; // rcx
  _OWORD v17[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v17, 0, sizeof(v17));
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, v10);
    Message = 0;
  }
  else
  {
    Message = xxxRealInternalGetMessage((__int64)v17, a2, a3, a4, a5, a6);
    HIDWORD(v17[0]) = 0;
    HIDWORD(v17[2]) = 0;
    v13 = v17[1];
    v14 = v17[2];
    v15 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v17[0];
    a1[1] = v13;
    a1[2] = v14;
  }
  UserSessionSwitchLeaveCrit(v15, v11);
  return Message;
}
