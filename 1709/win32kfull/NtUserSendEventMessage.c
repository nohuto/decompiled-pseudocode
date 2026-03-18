/*
 * XREFs of NtUserSendEventMessage @ 0x1C000AD90
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[4]; // [rsp+40h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v10 = (*(_WORD *)(v8 + 82) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v16;
      v16[1] = v8;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      if ( (unsigned int)IAMThreadAccessGranted() )
        v11 = PostEventMessageEx(*(struct tagTHREADINFO **)(v12 + 16), a2, a3, a4, 0LL);
      else
        UserSetLastError(5LL);
      ThreadUnlock1(v14, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
