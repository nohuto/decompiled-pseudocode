/*
 * XREFs of ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00429C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00427FC (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxSetAutoRotationConvertible@CLegacyRotationMgr@@AEAAXH@Z @ 0x1C0042AB8 (-xxxSetAutoRotationConvertible@CLegacyRotationMgr@@AEAAXH@Z.c)
 *     ?xxxSetAutoRotationDocked@CLegacyRotationMgr@@AEAAXH@Z @ 0x1C0042B8C (-xxxSetAutoRotationDocked@CLegacyRotationMgr@@AEAAXH@Z.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01AC95C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 */

void __fastcall CLegacyRotationMgr::xxxRefreshDisplayOrientation(CLegacyRotationMgr *this)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v7 = 0;
    v5 = &dword_1C03267CC;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E86D7, v2, v3, 3u, &pData);
  }
  CLegacyRotationMgr::xxxSetAutoRotationConvertible(this, (*(_DWORD *)(gpsi + 2220LL) >> 3) & 1);
  CLegacyRotationMgr::xxxSetAutoRotationDocked(this, (*(_DWORD *)(gpsi + 2220LL) >> 4) & 1);
  if ( dword_1C03267D4 || dword_1C03267D0 )
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  else
    CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
