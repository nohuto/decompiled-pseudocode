/*
 * XREFs of ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BA2A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BA43C (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z @ 0x1C00BA744 (-QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C011B054 (-IsNativeOrientationPortrait@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall CLegacyRotationMgr::xxxUserReinitializeAutoRotation(CLegacyRotationMgr *this)
{
  CLegacyRotationMgr *v2; // rcx
  CLegacyRotationMgr *v3; // rcx
  unsigned int AutoRotationRegistrySetting; // eax
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v12; // [rsp+60h] [rbp-48h]
  __int64 v13; // [rsp+68h] [rbp-40h]
  int *v14; // [rsp+70h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp-30h]

  dword_1C032A7D0 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                      this,
                      L"Enable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000001uLL) )
  {
    v10 = 1;
    v12 = &dword_1C032A7D0;
    v13 = 4LL;
    v14 = &v10;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBB3F, v8, v9, 4u, &pData);
  }
  dword_1C032A800 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                      v2,
                      L"SlateEnable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  AutoRotationRegistrySetting = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                                  v3,
                                  L"SensorPresent",
                                  0,
                                  L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  dword_1C032A7D4 = AutoRotationRegistrySetting == 1;
  v5 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(AutoRotationRegistrySetting == 1),
         L"LastAutoRequest",
         0xFFFFFFFF,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  v6 = v5;
  if ( v5 > 3 )
    v6 = 0;
  gAutoRotationInfo = v6;
  dword_1C032A7F0 = v5 != -1;
  v7 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(v5 != -1),
         L"LastOrientation",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( v7 > 3 )
    v7 = 0;
  dword_1C032A7CC = v7;
  dword_1C032A7E0 = IsNativeOrientationPortrait();
  dword_1C032A7E4 = 0;
  CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
