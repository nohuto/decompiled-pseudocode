/*
 * XREFs of ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C01A357C
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00427FC (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01AC95C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01ACA40 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingScreenOrientationChangeEvent(__int64 a1, __int64 a2, int a3)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // r10d
  int v6; // r11d
  int v7; // [rsp+30h] [rbp-29h] BYREF
  int v8; // [rsp+34h] [rbp-25h] BYREF
  int v9; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  int *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  int *v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  int *v17; // [rsp+90h] [rbp+37h]
  __int64 v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+D0h] [rbp+77h] BYREF

  v19 = a3;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v7 = v6;
      v11 = &v7;
      v13 = &v8;
      v15 = &v19;
      v17 = &v9;
      v12 = 4LL;
      v8 = v5;
      v14 = 4LL;
      v16 = 4LL;
      v9 = (int)v4;
      v18 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E82BF, v3, v4, 6u, &pData);
    }
  }
}
