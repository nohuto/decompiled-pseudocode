/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C008CBCC
 * Callers:
 *     xxxConsoleControl @ 0x1C0090464 (xxxConsoleControl.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = ValidateHwnd(*(_QWORD *)a1);
  v4 = (volatile signed __int32 *)v2;
  if ( v2 && (v5 = *(_QWORD *)(v2 + 24)) != 0 )
  {
    *(_OWORD *)(v5 + 144) = *(_OWORD *)a1;
    *(_QWORD *)(v5 + 160) = *((_QWORD *)a1 + 2);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v10;
    v10[1] = v4;
    _InterlockedIncrement(v4 + 2);
    xxxWindowEvent(0x800Bu, v4, 4294967288LL, 0LL, 4);
    ThreadUnlock1(v8, v7);
    return 1LL;
  }
  else
  {
    UserSetLastError(87LL, v3);
    return 0LL;
  }
}
