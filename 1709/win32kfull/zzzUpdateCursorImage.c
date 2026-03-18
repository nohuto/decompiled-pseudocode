/*
 * XREFs of zzzUpdateCursorImage @ 0x1C0089310
 * Callers:
 *     xxxSetMonitorIcoCurIndex @ 0x1C0051864 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0051988 (zzzSetSystemImage.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00874F0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C0089210 (zzzCalcStartCursorHide.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     zzzShowCursor @ 0x1C011E824 (zzzShowCursor.c)
 *     HideAutorunCursor @ 0x1C01A1000 (HideAutorunCursor.c)
 *     _SetCursorContents @ 0x1C01C73C4 (_SetCursorContents.c)
 * Callees:
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 *     FixupCursorForMonitor @ 0x1C0089620 (FixupCursorForMonitor.c)
 *     GreSetPointer @ 0x1C0089688 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0089938 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     GetAnimatedCursorFrame @ 0x1C0089978 (GetAnimatedCursorFrame.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void zzzUpdateCursorImage()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 AnimatedCursorFrame; // rdi
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // r9d
  unsigned int v10; // edx
  unsigned int v11; // r8d
  _BOOL8 v12; // rcx
  unsigned int v13; // ecx
  int v14; // edx
  _DWORD *v15; // rax

  if ( gpqForeground )
  {
    v0 = *(_QWORD *)(gpqForeground + 104LL);
    v1 = v0 ? *(_QWORD *)(v0 + 16) : *(_QWORD *)(gpqForeground + 88LL);
    if ( v1 )
    {
      v2 = *(_QWORD *)(v1 + 400);
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 784);
        if ( v3 )
        {
          if ( (*(_DWORD *)(v3 + 100) & 0x100) != 0 && *(int *)(gpqForeground + 376LL) < 0 )
            goto LABEL_37;
        }
      }
    }
  }
  if ( !gpqCursor )
    return;
  if ( *(int *)(gpqCursor + 376LL) < 0 || (v4 = *(_QWORD *)(gpqCursor + 368LL)) == 0 )
  {
LABEL_37:
    v4 = 0LL;
  }
  else if ( (gtimeStartCursorHide || gtmridAutorunCursor)
         && (v4 == *(_QWORD *)&gasyscur[4] || v4 == *(_QWORD *)&gasyscur[132] || v4 == *(_QWORD *)&gasyscur[92]) )
  {
    if ( gtmridAutorunCursor )
      v4 = *(_QWORD *)&gasyscur[132];
    else
      v4 = *(_QWORD *)&gasyscur[92];
  }
  if ( v4 != gpcurLogCurrent )
  {
    EtwTraceWaitCursor(v4);
    if ( gtmridAniCursor )
    {
      FindTimer(0, gtmridAniCursor, 4, 1, 0LL);
      gtmridAniCursor = 0LL;
    }
    if ( v4 && (*(_DWORD *)(v4 + 80) & 8) != 0 && *(_QWORD *)(v4 + 112) )
    {
      *(_DWORD *)(v4 + 120) = 0;
      v15 = *(_DWORD **)(v4 + 112);
      gdwLastAniTick = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      gtmridAniCursor = SetRITTimer(gtmridAniCursor, 100 * *v15 / 6u, (int)zzzAnimateCursor, 1);
    }
  }
  gpcurLogCurrent = v4;
  v5 = FixupCursorForMonitor(v4);
  AnimatedCursorFrame = v5;
  if ( v5 && (*(_DWORD *)(v5 + 80) & 8) != 0 )
    AnimatedCursorFrame = GetAnimatedCursorFrame(v5, *(unsigned int *)(v5 + 120));
  v7 = gpcurPhysCurrent;
  if ( AnimatedCursorFrame != gpcurPhysCurrent )
  {
    gpcurPhysCurrent = AnimatedCursorFrame;
    if ( AnimatedCursorFrame )
    {
      v8 = FCursorShadowed((struct _CURSINFO *)(v4 + 80));
      v10 = v9 | 0x10;
      if ( !v8 )
        v10 = v9;
      if ( gbForceSoftwareCursor == 1 )
        v10 |= 0x20u;
      v11 = gMouseTrails;
      if ( gProtocolType )
        v11 = 0;
      GreSetPointer((struct _CURSINFO *)(AnimatedCursorFrame + 80), v10, v11, 0x32u);
    }
    else
    {
      SetPointer(0);
    }
    v12 = AnimatedCursorFrame != 0;
    if ( v12 != (v7 != 0) )
    {
      LOBYTE(v12) = AnimatedCursorFrame != 0;
      SendVisibilityChanged(v12);
    }
    if ( AnimatedCursorFrame )
      v13 = v7 != 0 ? 32780 : 32770;
    else
      v13 = 32771;
    v14 = 3;
    if ( !gdwDeferWinEvent )
      v14 = 1;
    xxxWindowEvent(v13, 0LL, 4294967287LL, 0LL, v14);
  }
}
