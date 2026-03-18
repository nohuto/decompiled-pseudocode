/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033554
 * Callers:
 *     GreGetDeviceCaps @ 0x1C0054280 (GreGetDeviceCaps.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00C84B0 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00D7190 (NtGdiGetAppliedDeviceGammaRamp.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
