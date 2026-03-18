/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C00CB554
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     xxxFullScreenCleanup @ 0x1C01092B0 (xxxFullScreenCleanup.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserLockWindowUpdate @ 0x1C01E8CD0 (NtUserLockWindowUpdate.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     FreeSpb @ 0x1C01EFB8C (FreeSpb.c)
 *     SpbCheck @ 0x1C01EFF50 (SpbCheck.c)
 *     SpbCheckPwnd @ 0x1C01EFFBC (SpbCheckPwnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, __int64 a2)
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

  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !(_DWORD)a2 )
  {
    v4 = 1440LL;
    goto LABEL_9;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( (_DWORD)a2 )
      return 0LL;
    v4 = 87LL;
LABEL_9:
    UserSetLastError(v4, a2);
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
    v13[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v13;
    v13[1] = v5;
    if ( v5 )
      _InterlockedAdd((volatile signed __int32 *)v5 + 2, 1u);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v5, 1, 0LL);
    v6 = 1LL;
    for ( i = *(__int64 **)(gpDispInfo + 24LL); ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_24;
      if ( (i[6] & 2) != 0 )
        break;
    }
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
    if ( v8 )
    {
LABEL_24:
      StyleWindow = (struct tagWND *)GetStyleWindow((__int64)v5, 2568);
      if ( !StyleWindow )
        StyleWindow = (struct tagWND *)GetDesktopWindow((__int64)v5);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v6, 0x10485u);
      zzzEndDeferWinEventNotify();
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
    }
    SpbCheckPwnd(v5);
    ThreadUnlock1(v11, v10);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
