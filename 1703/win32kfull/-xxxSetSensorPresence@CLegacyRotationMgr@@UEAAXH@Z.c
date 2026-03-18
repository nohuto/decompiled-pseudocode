/*
 * XREFs of ?xxxSetSensorPresence@CLegacyRotationMgr@@UEAAXH@Z @ 0x1C01A9D70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00BA830 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall CLegacyRotationMgr::xxxSetSensorPresence(CLegacyRotationMgr *this, int a2)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+64h] [rbp-24h]

  v4 = a2;
  if ( (int)CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"SensorPresent",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") >= 0 )
  {
    dword_1C032A7D4 = v4;
    if ( !dword_1C032A7F4 )
      dword_1C032A7F4 = v4 != 0;
    if ( dword_1C0324850 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000001uLL) )
      {
        v8 = 0;
        v6 = &v4;
        v7 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBCC8, v2, v3, 3u, &pData);
      }
    }
  }
}
