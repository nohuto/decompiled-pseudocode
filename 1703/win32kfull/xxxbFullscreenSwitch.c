/*
 * XREFs of xxxbFullscreenSwitch @ 0x1C01E7D70
 * Callers:
 *     xxxConsoleControl @ 0x1C001B784 (xxxConsoleControl.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0048FB4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbFullscreenSwitch(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 1;
  v4 = ValidateHwnd(a2);
  v6 = v4;
  if ( !v4 || (((*(_WORD *)(v4 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 )
    return 4294967291LL;
  v7 = gptiCurrent;
  v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v12;
  v12[1] = v4;
  ++*(_DWORD *)(v4 + 8);
  while ( ghSwitcher )
    xxxSleepThread2(0, 1u, 0, 0, 0LL);
  if ( !gfSwitchInProgress && !gProtocolType && !gfSessionSwitchBlock )
  {
    gfSessionSwitchBlock = 1;
    if ( a1 )
    {
      if ( (*(_BYTE *)(v6 + 63) & 7) != 1 )
      {
        xxxShowWindowEx((struct tagWND *)v6, 2u, gdwPUDFlags & 0x10000);
        xxxInternalUpdateWindow((struct tagWND *)v6, 1u);
      }
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v6, 1) || ghSwitcher )
        goto LABEL_19;
      v10 = gbFullScreen == 1;
    }
    else
    {
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v6, 0) || ghSwitcher )
        goto LABEL_19;
      v10 = gbFullScreen == 2;
    }
    if ( v10 )
    {
LABEL_20:
      ThreadUnlock1(v9, v8);
      result = v3;
      gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_19:
    v3 = 0;
    goto LABEL_20;
  }
  ThreadUnlock1(v7, v5);
  return 0LL;
}
