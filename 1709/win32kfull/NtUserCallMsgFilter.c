/*
 * XREFs of NtUserCallMsgFilter @ 0x1C01019B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxCallMsgFilter @ 0x1C0144054 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  _OWORD v10[5]; // [rsp+38h] [rbp-50h] BYREF

  memset(v10, 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *v5 = *v5;
  v5[1] = v5[1];
  v5[2] = v5[2];
  v10[0] = *a1;
  v10[1] = a1[1];
  v10[2] = a1[2];
  if ( (DWORD2(v10[0]) & 0xFFFE0000) != 0 )
  {
    v8 = 0;
    UserSetLastError(87LL, v4);
  }
  else
  {
    v8 = xxxCallMsgFilter(v10, a2);
    *a1 = v10[0];
    a1[1] = v10[1];
    a1[2] = v10[2];
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v8;
}
