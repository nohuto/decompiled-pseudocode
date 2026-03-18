/*
 * XREFs of NtUserTranslateMessage @ 0x1C00525D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxTranslateMessage @ 0x1C005265C (xxxTranslateMessage.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserTranslateMessage(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  _OWORD v8[4]; // [rsp+38h] [rbp-40h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v8[0] = *a1;
  v8[1] = a1[1];
  v8[2] = a1[2];
  v6 = 0;
  if ( ValidateHwnd(*(_QWORD *)&v8[0]) )
    v6 = xxxTranslateMessage(v8, a2);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
