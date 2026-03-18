/*
 * XREFs of NtUserRemoveMenu @ 0x1C0119450
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0099798 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserRemoveMenu(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdi
  int v14; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6);
    v12 = 0;
  }
  else
  {
    v7 = ValidateHmenu(a1);
    v12 = 0;
    v13 = v7;
    if ( v7 )
    {
      v14 = *(_DWORD *)(v7 + 56);
      if ( (v14 & 0x40) == 0 && (v14 & 0x200) == 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11);
        v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v19;
        v19[1] = v13;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v12 = xxxRemoveDeleteMenuHelper((struct tagMENU *)v13, a2, a3, 0LL);
        ThreadUnlock1(v17, v16);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v12;
}
