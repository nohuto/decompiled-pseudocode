/*
 * XREFs of xxxAddShadow @ 0x1C011EA6C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0021428 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011EEFC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsSysShadow @ 0x1C013E2CC (IsSysShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v10; // zf
  char v11; // al
  struct tagWND *Window; // rdi
  __int64 v13; // r8
  _DWORD *v14; // rdx
  struct tagWND *v15; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int128 v23; // [rsp+98h] [rbp-29h]
  __int128 v24; // [rsp+A8h] [rbp-19h]
  __int128 v25; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v26; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v27[3]; // [rsp+D8h] [rbp+17h] BYREF
  _QWORD v28[3]; // [rsp+F0h] [rbp+2Fh] BYREF

  if ( gbDisableAlpha )
    return 0LL;
  if ( gcOverlays )
    return 0LL;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80040000) != 0x80040000 )
    return 0LL;
  if ( *((char *)a1 + 59) < 0 )
    return 0LL;
  if ( (unsigned int)IsSysShadow(a1) )
    return 0LL;
  v2 = Win32AllocPoolZInit(24LL, 1685287765LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  PushW32ThreadLock(v2, v27, (__int64)Win32FreePool);
  v4 = *((_BYTE *)a1 + 64) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v6, v5)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7),
        v10 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
        v11 = 1,
        v10) )
  {
    v11 = 0;
  }
  Window = (struct tagWND *)xxxCreateWindowEx(
                              v4,
                              (wchar_t *)(unsigned __int16)gatomShadow,
                              (unsigned __int16)gatomShadow,
                              0LL,
                              0x80000000,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              0LL,
                              hModuleWin,
                              0LL,
                              *((_DWORD *)a1 + 80),
                              0xA00u,
                              v11,
                              0LL);
  if ( !Window || *((char *)a1 + 59) < 0 )
  {
LABEL_26:
    PopAndFreeAlwaysW32ThreadLock((__int64)v27);
    return 0LL;
  }
  v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v28;
  v28[1] = Window;
  ++*((_DWORD *)Window + 2);
  xxxInheritWindowMonitor(Window, (__int64 *)a1, 1);
  v14 = (_DWORD *)gdwDeferWinEvent;
  ++gdwDeferWinEvent;
  if ( *((char *)a1 + 59) < 0 || FindShadow(a1) )
  {
LABEL_22:
    v10 = (*v14)-- == 1;
    if ( v10 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    xxxDestroyWindow((__int64)Window, (__int64)v14, v13);
    ThreadUnlock1(v22, v21);
    goto LABEL_26;
  }
  if ( !zzzApplyShadow(v15, Window) )
  {
    v14 = (_DWORD *)gdwDeferWinEvent;
    goto LABEL_22;
  }
  *(_QWORD *)(v3 + 16) = gpshadowFirst;
  *(_QWORD *)&v23 = v3;
  *((_QWORD *)&v23 + 1) = a1;
  gpshadowFirst = (struct tagSHADOW *)v3;
  v25 = v23;
  HMAssignmentLock(&v25);
  *((_QWORD *)&v24 + 1) = Window;
  *(_QWORD *)&v24 = v3 + 8;
  v26 = v24;
  HMAssignmentLock(&v26);
  if ( (unsigned int)GetWindowCloakState((__int64)a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v3 + 8), 0LL, 1u);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v27[0];
  PushW32ThreadLock(v3, v27, (__int64)RemoveShadow);
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v18, v17);
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v19 + 16) = v27[0];
  return 1LL;
}
