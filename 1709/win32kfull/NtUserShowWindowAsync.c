/*
 * XREFs of NtUserShowWindowAsync @ 0x1C000AE80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserShowWindowAsync(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 82) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v11[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v11;
      v11[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( (unsigned int)v2 > 0xB )
        UserSetLastError(87LL);
      else
        v7 = PostEventMessageEx(*(struct tagTHREADINFO **)(v4 + 16), 2, 0LL, v2 | gdwPUDFlags & 0x10000, 0LL);
      ThreadUnlock1(v9, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
