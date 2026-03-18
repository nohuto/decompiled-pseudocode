/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C00B9A10
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0016490 (zzzDwmStartRedirection.c)
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     SetPointerMetaVisibility @ 0x1C00F0E8C (SetPointerMetaVisibility.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00B9B90 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C00B9D3C (GreDwmEnableSoftwareCursorRendering.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzEnableDwmPointerSupport(unsigned int a1, int a2)
{
  int HasSoftwareCursor; // eax
  __int64 v5; // rcx
  int v6; // edi
  __int64 result; // rax

  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  GreLockPointer(*(_QWORD *)(gpDispInfo + 32LL));
  GreLockSprite(*(_QWORD *)(gpDispInfo + 32LL));
  HasSoftwareCursor = GreDwmHasSoftwareCursor(*(_QWORD *)(gpDispInfo + 32LL), 0LL);
  if ( !a2 || HasSoftwareCursor || a1 )
  {
    if ( HasSoftwareCursor == a1 )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      SetPointer(0);
      gbForceSoftwareCursor = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v5, a1);
    if ( v6 )
    {
      gbForceSoftwareCursor = gSoftwareCursorCount > 0;
      SetPointer(1);
      if ( !a2 )
        zzzInternalSetCursorPos(*(unsigned int *)(gpsi + 5368LL), *(unsigned int *)(gpsi + 5372LL), 2LL);
    }
  }
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 32LL));
  GreUnlockPointer(*(_QWORD *)(gpDispInfo + 32LL));
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  result = gdwDeferWinEvent;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      return xxxFlushDeferredWindowEvents();
  }
  return result;
}
