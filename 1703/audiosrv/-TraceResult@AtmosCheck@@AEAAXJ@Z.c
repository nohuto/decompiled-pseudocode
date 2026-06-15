/*
 * XREFs of ?TraceResult@AtmosCheck@@AEAAXJ@Z @ 0x180025F94
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::TraceResult(AtmosCheck *this, int a2)
{
  const CHAR *v2; // r9
  __int64 v3; // r10
  __int64 v4; // r10
  LPCSTR v5; // r11
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int v8; // [rsp+30h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  int *v10; // [rsp+60h] [rbp-49h]
  int v11; // [rsp+68h] [rbp-41h]
  int v12; // [rsp+6Ch] [rbp-3Dh]
  __int64 v13; // [rsp+70h] [rbp-39h]
  int v14; // [rsp+78h] [rbp-31h]
  int v15; // [rsp+7Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  __int64 v17; // [rsp+90h] [rbp-19h]
  int v18; // [rsp+98h] [rbp-11h]
  int v19; // [rsp+9Ch] [rbp-Dh]
  __int64 v20; // [rsp+A0h] [rbp-9h]
  int v21; // [rsp+A8h] [rbp-1h]
  int v22; // [rsp+ACh] [rbp+3h]
  __int64 v23; // [rsp+B0h] [rbp+7h]
  int v24; // [rsp+B8h] [rbp+Fh]
  int v25; // [rsp+BCh] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+C0h] [rbp+17h] BYREF
  int *v27; // [rsp+D0h] [rbp+27h]
  int v28; // [rsp+D8h] [rbp+2Fh]
  int v29; // [rsp+DCh] [rbp+33h]
  int v30; // [rsp+118h] [rbp+6Fh] BYREF

  v30 = a2;
  if ( (unsigned int)dword_18012A2E0 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18012A2E0, 0x400000000000uLL) )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v8;
      v8 = 2;
      v13 = v3 + 96;
      v11 = 4;
      v14 = 16;
      TlgCreateSz(&pDesc, v2);
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v20 = v4 + 74;
      v18 = 1;
      v21 = 1;
      v24 = 1;
      v23 = v4 + 75;
      v17 = v4 + 73;
      TlgCreateSz(&v26, v5);
      v29 = 0;
      v27 = &v30;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2E0, &unk_1800FC000, v6, v7, 0xAu, &pData);
    }
  }
}
