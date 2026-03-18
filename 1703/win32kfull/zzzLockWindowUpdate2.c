/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C00B6C84
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     xxxFullScreenCleanup @ 0x1C00FD0D0 (xxxFullScreenCleanup.c)
 *     NtUserLockWindowUpdate @ 0x1C01DCAF0 (NtUserLockWindowUpdate.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 *     FreeSpb @ 0x1C01E3B70 (FreeSpb.c)
 *     SpbCheck @ 0x1C01E3F34 (SpbCheck.c)
 *     SpbCheckPwnd @ 0x1C01E3FA4 (SpbCheckPwnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rbx
  __int64 v6; // rbp
  __int64 *i; // rdi
  BOOL v8; // esi
  struct tagWND *StyleWindow; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+80h] [rbp+18h] BYREF

  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !a2 )
  {
    v4 = 1440LL;
    goto LABEL_9;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( a2 )
      return 0LL;
    v4 = 87LL;
LABEL_9:
    UserSetLastError(v4);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1);
    v12[1] = a1;
    v12[0] = &gspwndLockUpdate;
    HMAssignmentLock(v12);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v5 = gspwndLockUpdate;
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v5;
    if ( v5 )
      ++*((_DWORD *)v5 + 2);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v5, 1, 0LL);
    v6 = 1LL;
    for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
    {
      if ( (i[6] & 2) != 0 )
      {
        if ( i[5] )
        {
          v6 = ghrgnSPB1;
          SetRectRgnIndirect(ghrgnSPB1, i + 3);
          v8 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, i[5], 4LL) != 1;
        }
        else
        {
          v8 = 0;
        }
        FreeSpb(i);
        if ( !v8 )
          goto LABEL_31;
        break;
      }
    }
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)v5, 2568);
    if ( !StyleWindow )
      StyleWindow = (struct tagWND *)GetDesktopWindow((__int64)v5);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
    ++gdwDeferWinEvent;
    xxxInternalInvalidate(StyleWindow, (HRGN)v6, 66693LL);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    if ( !v14 )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v14);
    }
LABEL_31:
    SpbCheckPwnd(v5);
    ThreadUnlock1(v11, v10);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return 1LL;
}
