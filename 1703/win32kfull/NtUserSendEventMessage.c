/*
 * XREFs of NtUserSendEventMessage @ 0x1C0005040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r9
  _QWORD v10[4]; // [rsp+40h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v2;
  if ( v2 )
  {
    v4 = (*(_WORD *)(v2 + 82) & 0x3FFFu) - 669;
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v10;
      v10[1] = v2;
      ++*(_DWORD *)(v2 + 8);
      if ( (unsigned int)IAMThreadAccessGranted() )
        v6 = PostEventMessageEx(*(_QWORD *)(v8 + 16), *(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL), 9LL);
      else
        UserSetLastError(5LL);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v7);
  return v6;
}
