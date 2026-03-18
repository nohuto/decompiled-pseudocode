/*
 * XREFs of ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C01979F0
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A9760 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void TraceLoggingScreenOrientationArStateChangeEvent()
{
  const GUID *v0; // r9
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-39h] BYREF
  int v3; // [rsp+34h] [rbp-35h] BYREF
  int v4; // [rsp+38h] [rbp-31h] BYREF
  int v5; // [rsp+3Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v7; // [rsp+60h] [rbp-9h]
  __int64 v8; // [rsp+68h] [rbp-1h]
  int *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  int *v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  int *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]

  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
    {
      v2 = v1;
      v7 = &v2;
      v9 = &v3;
      v11 = &v4;
      v13 = &v5;
      v8 = 4LL;
      v3 = 0;
      v10 = 4LL;
      v4 = 0;
      v12 = 4LL;
      v5 = (int)v0;
      v14 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB768, 0LL, v0, 6u, &pData);
    }
  }
}
