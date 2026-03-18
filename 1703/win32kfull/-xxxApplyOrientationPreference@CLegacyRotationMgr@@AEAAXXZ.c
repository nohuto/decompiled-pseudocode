/*
 * XREFs of ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BA43C
 * Callers:
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BA2A0 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BA600 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     ?GetActivePpi@CRotationMgr@@SAPEAUtagPROCESSINFO@@XZ @ 0x1C0007B60 (-GetActivePpi@CRotationMgr@@SAPEAUtagPROCESSINFO@@XZ.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00BA470 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C01163A0 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0197ACC (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AEAAHPEAUtagPROCESSINFO@@PEAK@Z @ 0x1C01A92A8 (-RotationRequired@CLegacyRotationMgr@@AEAAHPEAUtagPROCESSINFO@@PEAK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01A98BC (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxApplyOrientationPreference(CLegacyRotationMgr *this)
{
  struct tagPROCESSINFO *ActivePpi; // rdi
  CLegacyRotationMgr *v3; // rcx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)CLegacyRotationMgr::QueryAutoRotationState() <= 1 )
  {
    ActivePpi = CRotationMgr::GetActivePpi();
    if ( (int)GetCurrentOrientation(&v4) >= 0 )
    {
      if ( (unsigned int)CLegacyRotationMgr::RotationRequired(this, ActivePpi, &v4) )
      {
        TraceLoggingScreenOrientationChangeEvent(v4, 1LL, 1LL, 1000LL);
        CLegacyRotationMgr::xxxRotateScreen(v3, v4, 0, 0LL);
      }
    }
  }
}
