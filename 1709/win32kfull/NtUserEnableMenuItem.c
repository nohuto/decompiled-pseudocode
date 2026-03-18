/*
 * XREFs of NtUserEnableMenuItem @ 0x1C011FB40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxEnableMenuItem @ 0x1C007ABB8 (xxxEnableMenuItem.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6);
LABEL_6:
    v14 = -1;
    goto LABEL_5;
  }
  v7 = ValidateHmenu(a1);
  v12 = v7;
  if ( !v7 || (*(_DWORD *)(v7 + 56) & 0x40) != 0 )
    goto LABEL_6;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11);
  v18[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v18;
  v18[1] = v12;
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  v14 = xxxEnableMenuItem((struct tagMENU *)v12, a2, a3);
  ThreadUnlock1(v16, v15);
LABEL_5:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v14;
}
