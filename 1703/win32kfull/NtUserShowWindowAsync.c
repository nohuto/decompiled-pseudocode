/*
 * XREFs of NtUserShowWindowAsync @ 0x1C0006200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserShowWindowAsync(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+40h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 82) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
      v13[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( a2 > 0xB )
        UserSetLastError(87LL);
      else
        v8 = PostEventMessageEx(*(_QWORD *)(v4 + 16), *(_QWORD *)(*(_QWORD *)(v4 + 16) + 384LL), 1LL);
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v9, v7);
  return v8;
}
