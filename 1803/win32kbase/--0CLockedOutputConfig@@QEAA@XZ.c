/*
 * XREFs of ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C00558B0
 * Callers:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0039174 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00391F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00394DC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 *     MonitorFromMousePoint @ 0x1C00557F0 (MonitorFromMousePoint.c)
 *     GetMouseHitTestContext @ 0x1C0055864 (GetMouseHitTestContext.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0055A4C (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0055B4C (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00558DC (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

CLockedOutputConfig *__fastcall CLockedOutputConfig::CLockedOutputConfig(CLockedOutputConfig *this)
{
  *(_QWORD *)this = 0LL;
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
    (CLockedOutputConfig *)((char *)this + 8),
    (struct CInpPushLock *)&CInputConfig::slock);
  return this;
}
