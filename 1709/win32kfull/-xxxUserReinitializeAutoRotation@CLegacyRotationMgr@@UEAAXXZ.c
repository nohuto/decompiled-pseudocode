/*
 * XREFs of ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0042670
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00427FC (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z @ 0x1C0042C60 (-QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C0125308 (-IsNativeOrientationPortrait@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall CLegacyRotationMgr::xxxUserReinitializeAutoRotation(CLegacyRotationMgr *this)
{
  CLegacyRotationMgr *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  CLegacyRotationMgr *v5; // rcx
  unsigned int AutoRotationRegistrySetting; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  int *v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]

  dword_1C03267C8 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                      this,
                      L"Enable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    v10 = 1;
    v12 = &dword_1C03267C8;
    v13 = 4LL;
    v14 = &v10;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E868B, v3, v4, 4u, &pData);
  }
  dword_1C03267F8 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                      v2,
                      L"SlateEnable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  AutoRotationRegistrySetting = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                                  v5,
                                  L"SensorPresent",
                                  0,
                                  L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  dword_1C03267CC = AutoRotationRegistrySetting == 1;
  v7 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(AutoRotationRegistrySetting == 1),
         L"LastAutoRequest",
         0xFFFFFFFF,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  v8 = v7;
  if ( v7 > 3 )
    v8 = 0;
  gAutoRotationInfo = v8;
  dword_1C03267E8 = v7 != -1;
  v9 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(v7 != -1),
         L"LastOrientation",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( v9 > 3 )
    v9 = 0;
  dword_1C03267C4 = v9;
  dword_1C03267D8 = IsNativeOrientationPortrait();
  dword_1C03267DC = 0;
  CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
