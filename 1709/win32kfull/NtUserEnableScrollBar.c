/*
 * XREFs of NtUserEnableScrollBar @ 0x1C0083BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxEnableScrollBar @ 0x1C0083C74 (xxxEnableScrollBar.c)
 */

__int64 __fastcall NtUserEnableScrollBar(__int64 a1, unsigned int a2)
{
  ULONG_PTR v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

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
      if ( a2 > 3 || a2 == 2 && *(_WORD *)(v4 + 82) != 666 )
        UserSetLastError(87LL, gptiCurrent);
      else
        v7 = xxxEnableScrollBar(v4);
      ThreadUnlock1(v9, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
