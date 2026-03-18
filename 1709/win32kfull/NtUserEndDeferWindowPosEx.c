/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C009CCD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 4;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v10 = 0;
  v11 = v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL, v8);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v16[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v16;
      v16[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v10 = xxxEndDeferWindowPosEx((struct tagSMWP *)v11, a2);
      ThreadUnlock1(v14, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
