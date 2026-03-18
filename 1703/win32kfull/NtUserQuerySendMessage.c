/*
 * XREFs of NtUserQuerySendMessage @ 0x1C01DE5A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     _QuerySendMessage @ 0x1C01E6C98 (_QuerySendMessage.c)
 */

__int64 __fastcall NtUserQuerySendMessage(_OWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int SendMessage; // ebx
  _OWORD v9[4]; // [rsp+28h] [rbp-40h] BYREF

  memset(v9, 0, 0x30uLL);
  v2 = EnterSharedCrit(0LL, 1LL);
  if ( *(_QWORD *)(v2 + 464) )
  {
    SendMessage = QuerySendMessage(v2, v9);
    if ( SendMessage && a1 )
    {
      HIDWORD(v9[0]) = 0;
      HIDWORD(v9[2]) = 0;
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        a1 = (_OWORD *)W32UserProbeAddress;
      *a1 = v9[0];
      a1[1] = v9[1];
      a1[2] = v9[2];
    }
  }
  else
  {
    SendMessage = 0;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return SendMessage;
}
