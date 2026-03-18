/*
 * XREFs of ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01A8E48
 * Callers:
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A967C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A9760 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z @ 0x1C01A913C (-QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AEAAJPEAK0@Z.c)
 */

__int64 __fastcall CLegacyRotationMgr::GetDockedOrientationValue(CLegacyRotationMgr *this, unsigned int *a2)
{
  if ( !*((_DWORD *)this + 2) )
  {
    dword_1C032A7F8 = 0;
    dword_1C032A7FC = dword_1C032A7E0 != 0 ? 3 : 0;
    if ( (int)CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(this, &dword_1C032A7F8, &dword_1C032A7FC) >= 0 )
    {
      if ( dword_1C032A7FC > 3 )
        dword_1C032A7FC = dword_1C032A7E0 != 0 ? 3 : 0;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return dword_1C032A7FC;
}
