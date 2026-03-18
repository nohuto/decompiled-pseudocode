/*
 * XREFs of NtUserCallMsgFilter @ 0x1C00F4520
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxCallMsgFilter @ 0x1C013DDF4 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, unsigned int a2)
{
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD v11[5]; // [rsp+38h] [rbp-50h] BYREF

  memset(v11, 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v4 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v4 = (_OWORD *)W32UserProbeAddress;
  *v4 = *v4;
  v4[1] = v4[1];
  v4[2] = v4[2];
  v11[0] = *a1;
  v11[1] = a1[1];
  v11[2] = a1[2];
  if ( (DWORD2(v11[0]) & 0xFFFE0000) != 0 )
  {
    v7 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v7 = xxxCallMsgFilter(v11, a2);
    *a1 = v11[0];
    a1[1] = v11[1];
    a1[2] = v11[2];
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v7;
}
