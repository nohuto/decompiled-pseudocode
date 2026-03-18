/*
 * XREFs of xxxFullScreenCleanup @ 0x1C01092B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxFullScreenCleanup()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v6; // rcx
  struct _LARGE_STRING *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  result = (__int64)PsGetCurrentThreadId();
  if ( result == WPP_MAIN_CB.DeviceQueue.Lock )
  {
    if ( gfGdiEnabled )
    {
      gdwPUDFlags &= ~0x20000000u;
      result = zzzLockWindowUpdate2(0LL, 1LL);
    }
    else
    {
      HMAssignmentUnlock(&gspwndFullScreen);
      gbFullScreen = 1;
      v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
      v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v10;
      v10[1] = v1;
      if ( v1 )
        _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
      v6 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
      if ( v6 )
        v7 = *(struct _LARGE_STRING **)v6;
      else
        v7 = 0LL;
      xxxSendNotifyMessage(v6, 0x3Au, 2uLL, v7, 1);
      result = ThreadUnlock1(v9, v8);
    }
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
  }
  return result;
}
