/*
 * XREFs of ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00E7034
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C00E6DB8 (GreSetDeviceGammaRamp.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C00E6F00 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGELOCK *__fastcall DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK(DYNAMICMODECHANGELOCK *this)
{
  GreAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  return this;
}
