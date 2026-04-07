/*
 * XREFs of ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180013C7C
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x1800223CC (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180038DC0 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x18009FDD0 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800A0010 (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x180013CBC (--0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetScaleFactorForMonitorImp(HMONITOR a1, enum DEVICE_SCALE_FACTOR *a2)
{
  CImmersiveOrPrimaryMonitor *v3; // rax
  _BYTE v5[56]; // [rsp+20h] [rbp-48h] BYREF

  v3 = CImmersiveOrPrimaryMonitor::CImmersiveOrPrimaryMonitor((CImmersiveOrPrimaryMonitor *)v5, a1);
  *a2 = *(enum DEVICE_SCALE_FACTOR *)v3;
  return *((unsigned int *)v3 + 12);
}
