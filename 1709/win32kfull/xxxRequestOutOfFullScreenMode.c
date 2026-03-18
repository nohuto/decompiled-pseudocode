/*
 * XREFs of xxxRequestOutOfFullScreenMode @ 0x1C01F3C94
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxRequestOutOfFullScreenMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF

  v4 = gspwndFullScreen;
  v5 = 0;
  if ( gspwndFullScreen )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v10;
    v10[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((__int64 *)gspwndFullScreen, 1030LL, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v8, v7);
    while ( WPP_MAIN_CB.DeviceQueue.Lock )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
    if ( gspwndFullScreen && gbFullScreen == 1 )
      return (unsigned int)-1073741823;
  }
  return v5;
}
