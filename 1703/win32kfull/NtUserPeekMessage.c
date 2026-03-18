/*
 * XREFs of NtUserPeekMessage @ 0x1C0050A30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ClientGetMessageMPH @ 0x1C00E03C8 (ClientGetMessageMPH.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, int a2, int a3, int a4, int a5)
{
  int MessageMPH; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v18; // [rsp+48h] [rbp-40h] BYREF
  __int128 v19; // [rsp+58h] [rbp-30h]
  __int128 v20; // [rsp+68h] [rbp-20h]

  v18 = 0uLL;
  v19 = 0uLL;
  v20 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL);
    v14 = 0;
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
      MessageMPH = ClientGetMessageMPH((unsigned int)&v18, a2, a3, a4, a5, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v18, a2, a3, a4, a5, 0);
    v14 = MessageMPH;
    if ( MessageMPH )
    {
      HIDWORD(v18) = 0;
      HIDWORD(v20) = 0;
      v15 = v19;
      v16 = v20;
      v11 = W32UserProbeAddress;
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        a1 = (_OWORD *)W32UserProbeAddress;
      *a1 = v18;
      a1[1] = v15;
      a1[2] = v16;
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
