/*
 * XREFs of NtUserPrintWindow @ 0x1C01DE220
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxPrintWindow @ 0x1C01C2478 (xxxPrintWindow.c)
 */

__int64 __fastcall NtUserPrintWindow(__int64 a1, HDC a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v6;
  if ( v6 )
  {
    v8 = (*(_WORD *)(v6 + 82) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v15;
      v15[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      if ( (a3 & 3) == a3 )
        v10 = xxxPrintWindow((struct tagWND *)v6, a2, a3);
      else
        UserSetLastError(87LL);
      ThreadUnlock1(v13, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v11);
  return v10;
}
