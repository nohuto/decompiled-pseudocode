/*
 * XREFs of NtUserPeekMessage @ 0x1C00A65A0
 * Callers:
 *     <none>
 * Callees:
 *     ClientGetMessageMPH @ 0x1C005C0BC (ClientGetMessageMPH.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rdx
  int MessageMPH; // eax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  int v13; // ebx
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v17; // [rsp+48h] [rbp-40h] BYREF
  __int128 v18; // [rsp+58h] [rbp-30h]
  __int128 v19; // [rsp+68h] [rbp-20h]

  v17 = 0uLL;
  v18 = 0uLL;
  v19 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, v9);
    v13 = 0;
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 16LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v17, a2, a3, a4, a5, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v17, a2, a3, a4, a5, 0);
    v13 = MessageMPH;
    if ( MessageMPH )
    {
      HIDWORD(v17) = 0;
      HIDWORD(v19) = 0;
      v14 = v18;
      v15 = v19;
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v17;
      a1[1] = v14;
      a1[2] = v15;
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v13;
}
