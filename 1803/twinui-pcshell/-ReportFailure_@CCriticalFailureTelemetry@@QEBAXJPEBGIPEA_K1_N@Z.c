/*
 * XREFs of ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x1802FF374
 * Callers:
 *     ??$ReportFailure@AEAJAEAPEBGAEAIAEAPEA_KAEAPEA_KAEB_N@CCriticalFailureTelemetry@@SAXAEAJAEAPEBGAEAIAEAPEA_K3AEB_N@Z @ 0x1802FF0A4 (--$ReportFailure@AEAJAEAPEBGAEAIAEAPEA_KAEAPEA_KAEB_N@CCriticalFailureTelemetry@@SAXAEAJAEAPEBGA.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AXXZ@Z @ 0x1802FF90C (-get@-$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AX.c)
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
  __int64 v8; // rax
  const struct _TlgProvider_t *v9; // r10
  unsigned __int64 *v10; // rax
  int v11; // r11d
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 *v14; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  int *v16; // [rsp+68h] [rbp-31h]
  int v17; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+74h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-21h] BYREF
  int *v20; // [rsp+88h] [rbp-11h]
  int v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+94h] [rbp-5h]
  unsigned __int64 **v23; // [rsp+98h] [rbp-1h]
  int v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A4h] [rbp+Bh]
  unsigned __int64 **v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B4h] [rbp+1Bh]
  bool *v29; // [rsp+B8h] [rbp+1Fh]
  int v30; // [rsp+C0h] [rbp+27h]
  int v31; // [rsp+C4h] [rbp+2Bh]
  int v32; // [rsp+F0h] [rbp+57h] BYREF
  int v33; // [rsp+100h] [rbp+67h] BYREF

  v33 = a4;
  v32 = a2;
  v8 = wil::details::static_lazy<CCriticalFailureLogging>::get(
         this,
         lambda_67a4077a10b7c017ab26ed22531248f2_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v8 + 8), 0x200000000000uLL) )
  {
    v18 = 0;
    v16 = &v32;
    v17 = 4;
    TlgCreateWsz(&pDesc, a3);
    v10 = a5;
    v22 = 0;
    v20 = &v33;
    v21 = v11;
    if ( a5 )
      v10 = (unsigned __int64 *)*a5;
    v25 = 0;
    v13 = v10;
    v23 = &v13;
    v12 = a6;
    v24 = 8;
    if ( a6 )
      v12 = (unsigned __int64 *)*a6;
    v28 = 0;
    v31 = 0;
    v14 = v12;
    v26 = &v14;
    v29 = &a7;
    v27 = 8;
    v30 = 1;
    TlgWrite(v9, &unk_18039E9E3, 0LL, 0LL, 8u, &pData);
  }
}
