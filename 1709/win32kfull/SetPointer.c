/*
 * XREFs of SetPointer @ 0x1C0047300
 * Callers:
 *     SetMouseTrails @ 0x1C00470EC (SetMouseTrails.c)
 *     UserResetPointer @ 0x1C0047170 (UserResetPointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00471BC (zzzEnableDwmPointerSupport.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0142100 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01A0F94 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C01F88E0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01F8A50 (RemoteShadowStart.c)
 * Callees:
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0047434 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     FixupCursorForMonitor @ 0x1C0089620 (FixupCursorForMonitor.c)
 *     GreSetPointer @ 0x1C0089688 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0089938 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 */

__int64 __fastcall SetPointer(int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct tagCURSOR *v6; // rax
  unsigned int v7; // edx
  struct _CURSINFO *v8; // rcx
  unsigned int v9; // r8d

  if ( !a1 )
  {
    v1 = 0;
    v2 = 1;
    if ( gbForceSoftwareCursor == 1 )
      v1 = 32;
    result = GreSetPointer(0LL, v1, 0, 0);
LABEL_5:
    if ( v2 )
      return NotifySetPointerGraphicDevice(v2);
    return result;
  }
  if ( !gpqForeground
    || ((v4 = *(_QWORD *)(gpqForeground + 104LL)) != 0
      ? (v5 = *(_QWORD *)(v4 + 16))
      : (v5 = *(_QWORD *)(gpqForeground + 88LL)),
        *(int *)(gpqForeground + 376LL) >= 0
     || !(unsigned int)HasHidTable(v5)
     || (result = *(_QWORD *)(v5 + 400), (*(_DWORD *)(*(_QWORD *)(result + 784) + 100LL) & 0x100) == 0)) )
  {
    result = -gpqCursor;
    v2 = gpqCursor == 0LL ? 3 : 0;
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 376LL) >= 0 )
      {
        if ( *(_QWORD *)(gpqCursor + 368LL) )
        {
          result = gpsi;
          if ( *(_DWORD *)(gpsi + 1956LL) )
          {
            v6 = (struct tagCURSOR *)FixupCursorForMonitor();
            result = (__int64)GetCurrentCursorFrame(v6);
            if ( result )
            {
              v7 = (unsigned int)FCursorShadowed((struct _CURSINFO *)(result + 80)) != 0 ? 0x10 : 0;
              if ( gbForceSoftwareCursor == 1 )
                v7 |= 0x20u;
              v9 = gMouseTrails;
              if ( gProtocolType )
                v9 = 0;
              result = GreSetPointer(v8, v7, v9, 0x32u);
              v2 = 2;
            }
          }
        }
      }
    }
    goto LABEL_5;
  }
  return result;
}
