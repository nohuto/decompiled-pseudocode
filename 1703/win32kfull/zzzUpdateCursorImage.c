/*
 * XREFs of zzzUpdateCursorImage @ 0x1C0049A60
 * Callers:
 *     zzzSetCursor @ 0x1C0041A08 (zzzSetCursor.c)
 *     zzzCalcStartCursorHide @ 0x1C0049970 (zzzCalcStartCursorHide.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00B22F0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C00C1638 (zzzSetSystemImage.c)
 *     zzzShowCursor @ 0x1C0115E10 (zzzShowCursor.c)
 *     HideAutorunCursor @ 0x1C0195EB0 (HideAutorunCursor.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 *     _SetCursorContents @ 0x1C01C50C4 (_SetCursorContents.c)
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C00465D8 (GetAnimatedCursorFrame.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0047168 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     GreSetPointer @ 0x1C00471C8 (GreSetPointer.c)
 *     FixupCursorForMonitor @ 0x1C0049D7C (FixupCursorForMonitor.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     SetRITTimer @ 0x1C00B22B0 (SetRITTimer.c)
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 zzzUpdateCursorImage()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // r8
  _BOOL8 v12; // rcx
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // rax

  if ( gpqForeground )
  {
    v0 = *(_QWORD *)(gpqForeground + 72LL);
    v1 = v0 ? *(_QWORD *)(v0 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    if ( v1 )
    {
      v2 = *(_QWORD *)(v1 + 376);
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 776);
        if ( v3 )
        {
          if ( (*(_DWORD *)(v3 + 100) & 0x100) != 0 && *(int *)(gpqForeground + 336LL) < 0 )
            goto LABEL_38;
        }
      }
    }
  }
  result = gpqCursor;
  if ( !gpqCursor )
    return result;
  if ( *(int *)(gpqCursor + 336LL) < 0 || (v5 = *(_QWORD *)(gpqCursor + 328LL)) == 0 )
  {
LABEL_38:
    v5 = 0LL;
  }
  else if ( (gtimeStartCursorHide || gtmridAutorunCursor)
         && (v5 == gasyscur[1] || v5 == gasyscur[33] || v5 == gasyscur[23]) )
  {
    if ( gtmridAutorunCursor )
      v5 = gasyscur[33];
    else
      v5 = gasyscur[23];
  }
  if ( v5 != gpcurLogCurrent )
  {
    EtwTraceWaitCursor(v5);
    if ( gtmridAniCursor )
    {
      FindTimer(0, gtmridAniCursor, 4, 1, 0LL);
      gtmridAniCursor = 0LL;
    }
    if ( v5 && (*(_DWORD *)(v5 + 80) & 8) != 0 && *(_QWORD *)(v5 + 112) )
    {
      *(_DWORD *)(v5 + 120) = 0;
      v15 = *(_DWORD **)(v5 + 112);
      gdwLastAniTick = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      gtmridAniCursor = SetRITTimer(gtmridAniCursor, 100 * *v15 / 6u, zzzAnimateCursor);
    }
  }
  gpcurLogCurrent = v5;
  result = FixupCursorForMonitor(v5);
  v6 = result;
  if ( result && (*(_DWORD *)(result + 80) & 8) != 0 )
  {
    result = GetAnimatedCursorFrame(result, *(_DWORD *)(result + 120));
    v6 = result;
  }
  v7 = gpcurPhysCurrent;
  if ( v6 != gpcurPhysCurrent )
  {
    gpcurPhysCurrent = v6;
    if ( v6 )
    {
      v8 = FCursorShadowed((struct _CURSINFO *)(v5 + 80));
      v10 = v9 | 0x10;
      if ( !v8 )
        v10 = v9;
      if ( gbForceSoftwareCursor == 1 )
        v10 = (unsigned int)v10 | 0x20;
      v11 = (unsigned int)gMouseTrails;
      if ( gProtocolType )
        v11 = 0LL;
      GreSetPointer((struct _CURSINFO *)(v6 + 80), v10, v11, 50LL);
    }
    else
    {
      SetPointer(0LL);
    }
    v12 = v6 != 0;
    if ( v12 != (v7 != 0) )
    {
      LOBYTE(v12) = v6 != 0;
      SendVisibilityChanged(v12);
    }
    if ( v6 )
      v13 = v7 != 0 ? 32780 : 32770;
    else
      v13 = 32771;
    v14 = 3;
    if ( !gdwDeferWinEvent )
      v14 = 1;
    return xxxWindowEvent(v13, 0, -9, 0, v14);
  }
  return result;
}
