/*
 * XREFs of NtUserSetMenu @ 0x1C01343A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSetMenu @ 0x1C01344BC (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  struct tagWND *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 82) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      v17[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( a2 )
      {
        v11 = ValidateHmenu(a2);
        v13 = v11;
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 56) & 1) == 0 )
          {
LABEL_6:
            v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v18;
            v18[1] = v13;
            if ( v13 )
              ++*(_DWORD *)(v13 + 8);
            v9 = xxxSetMenu(v10);
            ThreadUnlock1(v15, v14);
            goto LABEL_9;
          }
          UserSetLastError(87LL);
        }
LABEL_9:
        ThreadUnlock1(v12, v13);
        goto LABEL_10;
      }
      v13 = 0LL;
      goto LABEL_6;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
