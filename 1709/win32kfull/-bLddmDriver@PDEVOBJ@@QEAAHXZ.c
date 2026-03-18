/*
 * XREFs of ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003D6D0
 * Callers:
 *     UpdateGammaRampOnDevice @ 0x1C00F6D00 (UpdateGammaRampOnDevice.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C011C91C (GreLddmProcessDesktopSwitch.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024E138 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0250D90 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02510B4 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x1C0252A20 (GreDxDwmShutdown.c)
 *     ?MulIcmSetDeviceGammaRamp@@YAKPEAUDHPDEV__@@KPEAX@Z @ 0x1C027F070 (-MulIcmSetDeviceGammaRamp@@YAKPEAUDHPDEV__@@KPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bLddmDriver(PDEVOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)this + 2592LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    return (*(_DWORD *)(v1 + 160) >> 23) & 1;
  else
    return 0LL;
}
