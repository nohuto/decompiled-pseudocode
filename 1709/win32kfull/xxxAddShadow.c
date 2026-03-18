/*
 * XREFs of xxxAddShadow @ 0x1C012AC08
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C010A6A4 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012B000 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsSysShadow @ 0x1C0144434 (IsSysShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v9; // zf
  char v10; // al
  __int64 v11; // rdx
  _DWORD *Window; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int128 v33; // [rsp+98h] [rbp-29h]
  __int128 v34; // [rsp+A8h] [rbp-19h]
  __int128 v35; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v36; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v37[3]; // [rsp+D8h] [rbp+17h] BYREF
  _QWORD v38[3]; // [rsp+F0h] [rbp+2Fh] BYREF

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
  v4 = v2;
  if ( !v2 )
    return 0LL;
  PushW32ThreadLock(v2, v37, (__int64)Win32FreePool, v3);
  v5 = *((_BYTE *)a1 + 64) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v6)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7),
        v9 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
        v10 = 1,
        v9) )
  {
    v10 = 0;
  }
  Window = xxxCreateWindowEx(
             v5,
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
             v10,
             0LL);
  if ( !Window || *((char *)a1 + 59) < 0 )
  {
LABEL_19:
    PopAndFreeAlwaysW32ThreadLock((__int64)v37, v11, v13, v14);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13, v14);
  v38[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v38;
  v38[1] = Window;
  _InterlockedIncrement(Window + 2);
  xxxInheritWindowMonitor((struct tagWND *)Window, a1, 1);
  ++gdwDeferWinEvent;
  if ( *((char *)a1 + 59) < 0 || FindShadow(a1) || !zzzApplyShadow(v16, (struct tagWND *)Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow(Window, v29, v30);
    ThreadUnlock1(v32, v31);
    goto LABEL_19;
  }
  *(_QWORD *)(v4 + 16) = gpshadowFirst;
  *(_QWORD *)&v33 = v4;
  *((_QWORD *)&v33 + 1) = a1;
  gpshadowFirst = (struct tagSHADOW *)v4;
  v35 = v33;
  HMAssignmentLock(&v35);
  *((_QWORD *)&v34 + 1) = Window;
  *(_QWORD *)&v34 = v4 + 8;
  v36 = v34;
  HMAssignmentLock(&v36);
  if ( (unsigned int)GetWindowCloakState((__int64)a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v4 + 8), 0LL, 1u);
  v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
  *(_QWORD *)(v20 + 16) = v37[0];
  PushW32ThreadLock(v4, v37, (__int64)RemoveShadow, v21);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos((struct tagWND *)Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v23, v22);
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
  *(_QWORD *)(v27 + 16) = v37[0];
  return 1LL;
}
