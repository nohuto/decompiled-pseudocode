/*
 * XREFs of NtUserGetMessage @ 0x1C004E480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ClientGetMessageMPH @ 0x1C00E03C8 (ClientGetMessageMPH.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, int a2, int a3, int a4)
{
  int v8; // ebx
  int MessageMPH; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  _OWORD v17[3]; // [rsp+48h] [rbp-50h] BYREF

  memset(v17, 0, sizeof(v17));
  EnterCrit(0LL, 1LL);
  v8 = 0;
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
      MessageMPH = ClientGetMessageMPH((unsigned int)v17, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)v17, a2, a3, a4, 1, 1);
    v8 = MessageMPH;
    HIDWORD(v17[0]) = 0;
    HIDWORD(v17[2]) = 0;
    v14 = v17[1];
    v15 = v17[2];
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (_OWORD *)W32UserProbeAddress;
    *a1 = v17[0];
    a1[1] = v14;
    a1[2] = v15;
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
