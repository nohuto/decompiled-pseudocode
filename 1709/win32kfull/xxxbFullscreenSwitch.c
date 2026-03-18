/*
 * XREFs of xxxbFullscreenSwitch @ 0x1C01F3D7C
 * Callers:
 *     xxxConsoleControl @ 0x1C0090464 (xxxConsoleControl.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbFullscreenSwitch(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  __int64 result; // rax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 1;
  v4 = ValidateHwnd(a2);
  v8 = v4;
  if ( !v4 || (((*(_WORD *)(v4 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 )
    return 4294967291LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
  v15[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v15;
  v15[1] = v8;
  _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
  while ( WPP_MAIN_CB.DeviceQueue.Lock )
    xxxSleepThread2(0, 1u, 0, 0, 0LL);
  if ( !gfSwitchInProgress && !gProtocolType && !gfSessionSwitchBlock )
  {
    gfSessionSwitchBlock = 1;
    if ( a1 )
    {
      if ( (*(_BYTE *)(v8 + 63) & 7) != 1 )
      {
        xxxShowWindowEx((struct tagWND *)v8, 2u, gdwPUDFlags & 0x10000);
        xxxInternalUpdateWindow((struct tagWND *)v8, 1u);
      }
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v8, 1) || WPP_MAIN_CB.DeviceQueue.Lock )
        goto LABEL_19;
      v13 = gbFullScreen == 1;
    }
    else
    {
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v8, 0) || WPP_MAIN_CB.DeviceQueue.Lock )
        goto LABEL_19;
      v13 = gbFullScreen == 2;
    }
    if ( v13 )
    {
LABEL_20:
      ThreadUnlock1(v12, v11);
      result = v3;
      gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_19:
    v3 = 0;
    goto LABEL_20;
  }
  ThreadUnlock1(ThreadWin32Thread, v9);
  return 0LL;
}
