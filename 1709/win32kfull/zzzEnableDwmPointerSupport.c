/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C00471BC
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     SetPointerMetaVisibility @ 0x1C0046DAC (SetPointerMetaVisibility.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 * Callees:
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     GreDwmHasSoftwareCursor @ 0x1C0047458 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C004752C (GreDwmEnableSoftwareCursorRendering.c)
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzEnableDwmPointerSupport(unsigned int a1, int a2)
{
  int HasSoftwareCursor; // eax
  __int64 v5; // rcx
  int v6; // edi

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
      SetPointer(0LL);
      gbForceSoftwareCursor = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v5, a1);
    if ( v6 )
    {
      gbForceSoftwareCursor = gSoftwareCursorCount > 0;
      SetPointer(1LL);
      if ( !a2 )
        zzzInternalSetCursorPos(*(unsigned int *)(gpsi + 4944LL), *(unsigned int *)(gpsi + 4948LL), 2LL);
    }
  }
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 32LL));
  GreUnlockPointer(*(_QWORD *)(gpDispInfo + 32LL));
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  return zzzEndDeferWinEventNotify();
}
