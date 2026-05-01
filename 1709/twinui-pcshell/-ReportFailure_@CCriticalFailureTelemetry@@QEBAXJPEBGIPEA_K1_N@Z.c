/*
 * XREFs of ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x1801C4104
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1801C4250 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CCriticalFailureLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C3F28 (-Provider@CCriticalFailureLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall CCriticalFailureTelemetry::ReportFailure_(
        CCriticalFailureTelemetry *this,
        int a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        bool a7)
{
  const struct _TlgProvider_t *v8; // r10
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+38h] [rbp-61h] BYREF
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  int *v14; // [rsp+68h] [rbp-31h]
  __int64 v15; // [rsp+70h] [rbp-29h]
  const WCHAR *v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+80h] [rbp-19h]
  int v18; // [rsp+84h] [rbp-15h]
  int *v19; // [rsp+88h] [rbp-11h]
  __int64 v20; // [rsp+90h] [rbp-9h]
  __int64 *v21; // [rsp+98h] [rbp-1h]
  __int64 v22; // [rsp+A0h] [rbp+7h]
  __int64 *v23; // [rsp+A8h] [rbp+Fh]
  __int64 v24; // [rsp+B0h] [rbp+17h]
  bool *v25; // [rsp+B8h] [rbp+1Fh]
  __int64 v26; // [rsp+C0h] [rbp+27h]
  int v27; // [rsp+F0h] [rbp+57h] BYREF
  int v28; // [rsp+100h] [rbp+67h] BYREF

  v28 = a4;
  v27 = a2;
  v8 = CCriticalFailureLogging::Provider();
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v15 = 4LL;
    v14 = &v27;
    v9 = &word_18021F3A8;
    LODWORD(v10) = 0;
    if ( a3 )
    {
      v9 = a3;
      v10 = -1LL;
      do
        ++v10;
      while ( a3[v10] );
    }
    v16 = v9;
    v17 = 2 * v10 + 2;
    v19 = &v28;
    v18 = 0;
    v20 = 4LL;
    if ( a5 )
      v11 = *a5;
    else
      v11 = 0LL;
    v21 = &v11;
    v22 = 8LL;
    if ( a6 )
      v12 = *a6;
    else
      v12 = 0LL;
    v24 = 8LL;
    v23 = &v12;
    v25 = &a7;
    v26 = 1LL;
    TlgWrite(v8, &unk_1802687B0, 0LL, 0LL, 8u, &pData);
  }
}
