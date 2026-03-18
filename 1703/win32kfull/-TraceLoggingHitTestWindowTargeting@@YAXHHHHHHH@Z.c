/*
 * XREFs of ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C0196680
 * Callers:
 *     TouchTargetChildTree @ 0x1C01D1850 (TouchTargetChildTree.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingHitTestWindowTargeting(int a1, int a2, int a3, int a4, char a5, char a6, char a7)
{
  const GUID *v7; // r8
  const GUID *v8; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-71h] BYREF
  int *v10; // [rsp+58h] [rbp-51h]
  __int64 v11; // [rsp+60h] [rbp-49h]
  int *v12; // [rsp+68h] [rbp-41h]
  __int64 v13; // [rsp+70h] [rbp-39h]
  int *v14; // [rsp+78h] [rbp-31h]
  __int64 v15; // [rsp+80h] [rbp-29h]
  int *v16; // [rsp+88h] [rbp-21h]
  __int64 v17; // [rsp+90h] [rbp-19h]
  char *v18; // [rsp+98h] [rbp-11h]
  __int64 v19; // [rsp+A0h] [rbp-9h]
  char *v20; // [rsp+A8h] [rbp-1h]
  __int64 v21; // [rsp+B0h] [rbp+7h]
  char *v22; // [rsp+B8h] [rbp+Fh]
  __int64 v23; // [rsp+C0h] [rbp+17h]
  int v24; // [rsp+F8h] [rbp+4Fh] BYREF
  int v25; // [rsp+100h] [rbp+57h] BYREF
  int v26; // [rsp+108h] [rbp+5Fh] BYREF
  int v27; // [rsp+110h] [rbp+67h] BYREF

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v24 = a1;
  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
    {
      v11 = 4LL;
      v10 = &v24;
      v12 = &v25;
      v14 = &v26;
      v16 = &v27;
      v18 = &a5;
      v20 = &a6;
      v22 = &a7;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB195, v7, v8, 9u, &pData);
    }
  }
}
