/*
 * XREFs of ?xxxSetAutoRotationDocked@CLegacyRotationMgr@@AEAAXH@Z @ 0x1C0042B8C
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00429C0 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01ACB60 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 */

void __fastcall CLegacyRotationMgr::xxxSetAutoRotationDocked(CLegacyRotationMgr *this, int a2)
{
  const GUID *v2; // r9
  const GUID *v4; // r8
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v6; // [rsp+50h] [rbp-38h]
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  int *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  LODWORD(v2) = a2;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v8 = 0;
    v11 = 0;
    v6 = &dword_1C03267D0;
    v9 = &v12;
    v7 = 4;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8777, v4, v2, 4u, &pData);
    LODWORD(v2) = v12;
  }
  if ( dword_1C03267D0 && !(_DWORD)v2 && !dword_1C03267D4 )
  {
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
    LODWORD(v2) = v12;
  }
  dword_1C03267D0 = (int)v2;
}
