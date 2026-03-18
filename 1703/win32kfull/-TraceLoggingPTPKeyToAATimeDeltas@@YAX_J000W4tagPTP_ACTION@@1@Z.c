/*
 * XREFs of ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C0196D6C
 * Callers:
 *     TraceLoggingPTPAAPKeyPress @ 0x1C0197EC0 (TraceLoggingPTPAAPKeyPress.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPKeyToAATimeDeltas(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // r10d
  int v10; // r11d
  int v11; // [rsp+30h] [rbp-79h] BYREF
  int v12; // [rsp+34h] [rbp-75h] BYREF
  int v13; // [rsp+38h] [rbp-71h] BYREF
  int v14; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v15; // [rsp+40h] [rbp-69h] BYREF
  int v16; // [rsp+44h] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  int *v20; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  int *v22; // [rsp+90h] [rbp-19h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  int *v24; // [rsp+A0h] [rbp-9h]
  __int64 v25; // [rsp+A8h] [rbp-1h]
  int *v26; // [rsp+B0h] [rbp+7h]
  __int64 v27; // [rsp+B8h] [rbp+Fh]
  int *v28; // [rsp+C0h] [rbp+17h]
  __int64 v29; // [rsp+C8h] [rbp+1Fh]

  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
    {
      v11 = a1;
      v18 = &v11;
      v20 = &v12;
      v22 = &v13;
      v24 = &v14;
      v15 = a5;
      v26 = &v15;
      v16 = a6;
      v28 = &v16;
      v19 = 4LL;
      v12 = v10;
      v21 = 4LL;
      v13 = v9;
      v23 = 4LL;
      v14 = (int)v8;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB35E, v7, v8, 8u, &pData);
    }
  }
}
