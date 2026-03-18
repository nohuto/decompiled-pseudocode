/*
 * XREFs of ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00BA470
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BA43C (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01A9240 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AEAAHPEAUtagPROCESSINFO@@PEAK@Z @ 0x1C01A92A8 (-RotationRequired@CLegacyRotationMgr@@AEAAHPEAUtagPROCESSINFO@@PEAK@Z.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A967C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A9760 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BA560 (-CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ.c)
 */

int __fastcall CLegacyRotationMgr::QueryAutoRotationState(CLegacyRotationMgr *a1)
{
  int v1; // edx
  int result; // eax

  v1 = dword_1C032A7E4;
  if ( dword_1C032A7E4 )
  {
    CLegacyRotationMgr::CacheRotationInfo(a1);
    v1 = dword_1C032A7E4;
  }
  result = gProtocolType != 0 ? 4 : 0;
  if ( !dword_1C032A7D0 )
    result |= 1u;
  if ( dword_1C032A7EC || dword_1C032A7E8 )
    result |= 8u;
  if ( !dword_1C032A7D4 )
    result |= 0x10u;
  if ( dword_1C032A7D8 )
    result |= 0x40u;
  if ( dword_1C032A7DC )
    result |= 0x80u;
  if ( v1 )
    return result | 0x20;
  return result;
}
