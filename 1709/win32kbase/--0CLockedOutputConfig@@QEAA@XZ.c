/*
 * XREFs of ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C0017908
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0015FC8 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00160F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C001638C (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     GetMouseHitTestContext @ 0x1C0017B34 (GetMouseHitTestContext.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C005DAA4 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C005DBD8 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     MonitorFromMousePoint @ 0x1C005E770 (MonitorFromMousePoint.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0017930 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

CLockedOutputConfig *__fastcall CLockedOutputConfig::CLockedOutputConfig(
        CLockedOutputConfig *this,
        struct CInpPushLock *a2)
{
  *(_QWORD *)this = 0LL;
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CLockedOutputConfig *)((char *)this + 8), a2);
  return this;
}
