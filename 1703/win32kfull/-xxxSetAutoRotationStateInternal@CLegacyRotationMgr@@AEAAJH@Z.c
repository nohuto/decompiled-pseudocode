/*
 * XREFs of ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A9C64
 * Callers:
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01A9240 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A967C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A9880 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z @ 0x1C01A9C30 (-xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BA560 (-CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00BA830 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSetAutoRotationStateInternal(CLegacyRotationMgr *this, int a2)
{
  int v2; // ebx
  int updated; // edi
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v8; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v10; // [rsp+60h] [rbp-48h]
  int v11; // [rsp+68h] [rbp-40h]
  int v12; // [rsp+6Ch] [rbp-3Ch]
  int *v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+7Ch] [rbp-2Ch]

  v2 = a2;
  updated = CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"Enable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_1C032A7D0 = v2;
    if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000001uLL) )
    {
      v12 = 0;
      v8 = 0;
      v15 = 0;
      v10 = &dword_1C032A7D0;
      v13 = &v8;
      v11 = 4;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBB3F, v5, v6, 4u, &pData);
      v2 = dword_1C032A7D0;
    }
    if ( !v2 )
      CLegacyRotationMgr::CacheRotationInfo(this);
  }
  return (unsigned int)updated;
}
