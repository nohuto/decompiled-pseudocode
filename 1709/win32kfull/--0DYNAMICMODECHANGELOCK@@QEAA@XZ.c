/*
 * XREFs of ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00F6A14
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C00F6708 (GreSetDeviceGammaRamp.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C00F68E0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGELOCK *__fastcall DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK(DYNAMICMODECHANGELOCK *this)
{
  GreAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  return this;
}
