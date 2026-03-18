/*
 * XREFs of ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BA600
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BA43C (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A967C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A9880 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 */

void __fastcall CLegacyRotationMgr::xxxRefreshDisplayOrientation(CLegacyRotationMgr *this)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  const GUID *v4; // r9
  const GUID *v5; // r8
  int v6; // r10d
  const GUID *v7; // r8
  _DWORD v8[4]; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-49h] BYREF
  int *v10; // [rsp+60h] [rbp-29h]
  int v11; // [rsp+68h] [rbp-21h]
  int v12; // [rsp+6Ch] [rbp-1Dh]
  _DWORD *v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  int v15; // [rsp+7Ch] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+7h] BYREF
  int *v17; // [rsp+B0h] [rbp+27h]
  int v18; // [rsp+B8h] [rbp+2Fh]
  int v19; // [rsp+BCh] [rbp+33h]

  if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000001uLL) )
  {
    v19 = 0;
    v17 = &dword_1C032A7D4;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBBD4, v2, v3, 3u, &pData);
  }
  LODWORD(v4) = (*(unsigned __int8 *)(gpsi + 2220LL) >> 3) & 1;
  v8[0] = (_DWORD)v4;
  if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000001uLL) )
  {
    v12 = 0;
    v15 = 0;
    v10 = &dword_1C032A7DC;
    v13 = v8;
    v11 = 4;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBC1B, v5, v4, 4u, &v9);
    LODWORD(v4) = v8[0];
  }
  if ( dword_1C032A7DC && !(_DWORD)v4 && !dword_1C032A7D8 )
  {
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
    LODWORD(v4) = v8[0];
  }
  dword_1C032A7DC = (int)v4;
  v6 = (*(unsigned __int8 *)(gpsi + 2220LL) >> 4) & 1;
  v8[0] = v6;
  if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000001uLL) )
  {
    v12 = 0;
    v15 = 0;
    v10 = &dword_1C032A7D8;
    v13 = v8;
    v11 = 4;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBC74, v7, v4, 4u, &v9);
    v6 = v8[0];
    LODWORD(v4) = dword_1C032A7DC;
  }
  if ( dword_1C032A7D8 && !v6 && !(_DWORD)v4 )
  {
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
    v6 = v8[0];
    LODWORD(v4) = dword_1C032A7DC;
  }
  dword_1C032A7D8 = v6;
  if ( (_DWORD)v4 || v6 )
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  else
    CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
