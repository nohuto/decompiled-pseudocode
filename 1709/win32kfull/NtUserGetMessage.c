/*
 * XREFs of NtUserGetMessage @ 0x1C00A3B80
 * Callers:
 *     <none>
 * Callees:
 *     ClientGetMessageMPH @ 0x1C005C0BC (ClientGetMessageMPH.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  int MessageMPH; // eax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  ULONG64 v14; // rcx
  _OWORD v16[3]; // [rsp+48h] [rbp-50h] BYREF

  memset(v16, 0, sizeof(v16));
  EnterCrit(0LL, 1LL);
  v9 = 0;
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8);
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 16LL) > 0 )
      MessageMPH = ClientGetMessageMPH(v16, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)v16, a2, a3, a4, 1, 1);
    v9 = MessageMPH;
    HIDWORD(v16[0]) = 0;
    HIDWORD(v16[2]) = 0;
    v12 = v16[1];
    v13 = v16[2];
    v14 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v16[0];
    a1[1] = v12;
    a1[2] = v13;
  }
  UserSessionSwitchLeaveCrit(v14, v11);
  return v9;
}
