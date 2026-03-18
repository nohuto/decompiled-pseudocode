/*
 * XREFs of ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BA560
 * Callers:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00BA470 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A9C64 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00BA830 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C01163A0 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

void __fastcall CLegacyRotationMgr::CacheRotationInfo(CLegacyRotationMgr *this)
{
  int CurrentOrientation; // eax
  CLegacyRotationMgr *v2; // rcx
  unsigned int v3; // [rsp+48h] [rbp+10h] BYREF

  dword_1C032A7E4 = 0;
  dword_1C032A7EC = 0;
  dword_1C032A7E8 = 0;
  dword_1C032A7CC = 0;
  CurrentOrientation = GetCurrentOrientation(&v3);
  if ( CurrentOrientation < 0 )
  {
    if ( CurrentOrientation == -1073741789 || CurrentOrientation == -2147483643 )
    {
      dword_1C032A7E8 = 1;
    }
    else if ( CurrentOrientation == -1071774975 )
    {
      dword_1C032A7EC = 1;
    }
    else
    {
      dword_1C032A7E4 = 1;
    }
  }
  else
  {
    dword_1C032A7CC = v3;
  }
  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    v2,
    dword_1C032A7CC,
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
