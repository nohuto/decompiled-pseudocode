/*
 * XREFs of ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C01080AC
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0107F90 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToTopLevelWindow(
        struct tagWND *a1,
        struct tagRECT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v9;
  v9[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  xxxSendMessage((ULONG_PTR)a1);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v7, v6);
  return 1LL;
}
