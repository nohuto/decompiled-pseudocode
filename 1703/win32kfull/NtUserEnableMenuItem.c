/*
 * XREFs of NtUserEnableMenuItem @ 0x1C00C6040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxEnableMenuItem @ 0x1C00C2158 (xxxEnableMenuItem.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_6:
    v11 = -1;
    goto LABEL_5;
  }
  v6 = ValidateHmenu(a1);
  v10 = v6;
  if ( !v6 || (*(_DWORD *)(v6 + 56) & 0x40) != 0 )
    goto LABEL_6;
  v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v15;
  v15[1] = v6;
  ++*(_DWORD *)(v6 + 8);
  v11 = xxxEnableMenuItem((struct tagMENU *)v6, a2, a3);
  ThreadUnlock1(v13, v12);
LABEL_5:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
