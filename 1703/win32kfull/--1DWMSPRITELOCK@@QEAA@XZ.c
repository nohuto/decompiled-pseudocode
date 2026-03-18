/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C
 * Callers:
 *     GreForceClipRgnChange @ 0x1C0005328 (GreForceClipRgnChange.c)
 *     GreGetSprite @ 0x1C00062E4 (GreGetSprite.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0020DE4 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0022FD0 (GreDwmNotifySpriteDPIChange.c)
 *     GreZorderSprite @ 0x1C002374C (GreZorderSprite.c)
 *     GreHintSpriteShape @ 0x1C0023878 (GreHintSpriteShape.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00245D0 (vCleanupUMWindowlessSprite.c)
 *     GrePtInSprite @ 0x1C009CD10 (GrePtInSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C009D248 (GreUpdateSpriteClipRgn.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C00A26D0 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00B9B90 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C00B9D3C (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmGetSurfaceData @ 0x1C00F8D58 (GreDwmGetSurfaceData.c)
 *     GreGetSpriteAttributes @ 0x1C0100DA0 (GreGetSpriteAttributes.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024C6A8 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CC78 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C024DD44 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C024DEC0 (GreDwmGetRedirectionStyle.c)
 *     GreHintDxUpdate @ 0x1C024E738 (GreHintDxUpdate.c)
 *     GreProtectSpriteContent @ 0x1C024E9CC (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C024EE98 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C024F05C (GreWindowResizeStarted.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
}
