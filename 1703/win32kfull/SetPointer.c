/*
 * XREFs of SetPointer @ 0x1C00B9720
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00B9A10 (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C00B9B70 (UserResetPointer.c)
 *     SetMouseTrails @ 0x1C00B9CC4 (SetMouseTrails.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C013B580 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C0195E08 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C01EE430 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01EE5A0 (RemoteShadowStart.c)
 * Callees:
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0047168 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     GreSetPointer @ 0x1C00471C8 (GreSetPointer.c)
 *     FixupCursorForMonitor @ 0x1C0049D7C (FixupCursorForMonitor.c)
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00B9818 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

void __fastcall SetPointer(int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  struct _CURSINFO *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rcx
  struct tagCURSOR *v9; // rax
  struct tagCURSOR *CurrentCursorFrame; // rax

  v1 = 0;
  if ( !a1 )
  {
    if ( gbForceSoftwareCursor == 1 )
      v1 = 32;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1;
    v5 = 0LL;
LABEL_5:
    GreSetPointer(v5, v4, v3, v2);
    return;
  }
  if ( !gpqForeground
    || ((v6 = *(_QWORD *)(gpqForeground + 72LL)) != 0
      ? (v7 = *(_QWORD *)(v6 + 16))
      : (v7 = *(_QWORD *)(gpqForeground + 56LL)),
        *(int *)(gpqForeground + 336LL) >= 0
     || !(unsigned int)HasHidTable(v7)
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 376) + 776LL) + 100LL) & 0x100) == 0) )
  {
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 336LL) >= 0 )
      {
        v8 = *(_QWORD *)(gpqCursor + 328LL);
        if ( v8 )
        {
          if ( *(_DWORD *)(gpsi + 1956LL) )
          {
            v9 = (struct tagCURSOR *)FixupCursorForMonitor(v8);
            CurrentCursorFrame = GetCurrentCursorFrame(v9);
            if ( CurrentCursorFrame )
            {
              v4 = (unsigned int)FCursorShadowed((struct tagCURSOR *)((char *)CurrentCursorFrame + 80)) != 0 ? 0x10 : 0;
              if ( gbForceSoftwareCursor == 1 )
                v4 = (unsigned int)v4 | 0x20;
              v2 = 50LL;
              v3 = (unsigned int)gMouseTrails;
              if ( gProtocolType )
                v3 = 0LL;
              goto LABEL_5;
            }
          }
        }
      }
    }
  }
}
