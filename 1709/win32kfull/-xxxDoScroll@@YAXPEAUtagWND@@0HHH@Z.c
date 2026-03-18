/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020FBDC
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020FAD0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020FED8 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0210740 (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C0210910 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0210C18 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 *     xxxTrackBox @ 0x1C0211A90 (xxxTrackBox.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxDoScroll(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v9;
  v9[1] = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  xxxSendMessage((ULONG_PTR)a2);
  xxxWindowEvent(0x800Eu, (volatile signed __int32 *)a2, (unsigned int)(a5 != 0) - 6, 0LL, 1);
  ThreadUnlock1(v8, v7);
}
