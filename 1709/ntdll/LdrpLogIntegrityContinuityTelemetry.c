/*
 * XREFs of LdrpLogIntegrityContinuityTelemetry @ 0x1800D2168
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x180088068 (LdrpValidateIntegrityContinuity.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800367D0 (RtlRunOnceExecuteOnce.c)
 *     _TlgKeywordOn @ 0x18007F4A8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18007F4CC (_TlgWrite.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 *     RtlCaptureContext @ 0x1800A4090 (RtlCaptureContext.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlReportException @ 0x1800DC780 (RtlReportException.c)
 */

NTSTATUS __fastcall LdrpLogIntegrityContinuityTelemetry(__int64 a1, int a2, int a3, int a4, char a5)
{
  __int64 v9; // rax
  unsigned __int16 *v10; // rbx
  int v11; // edi
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rdx
  int v15; // ecx
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  int v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  int v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  int v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 SystemInformation; // [rsp+60h] [rbp-A8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+68h] [rbp-A0h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+108h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+5D8h] [rbp+4D0h] BYREF
  _DWORD *v30; // [rsp+5F8h] [rbp+4F0h]
  __int64 v31; // [rsp+600h] [rbp+4F8h]
  __int64 v32; // [rsp+608h] [rbp+500h]
  _DWORD v33[2]; // [rsp+610h] [rbp+508h] BYREF
  int *v34; // [rsp+618h] [rbp+510h]
  __int64 v35; // [rsp+620h] [rbp+518h]
  int *v36; // [rsp+628h] [rbp+520h]
  __int64 v37; // [rsp+630h] [rbp+528h]
  int *v38; // [rsp+638h] [rbp+530h]
  __int64 v39; // [rsp+640h] [rbp+538h]
  int *v40; // [rsp+648h] [rbp+540h]
  __int64 v41; // [rsp+650h] [rbp+548h]
  _DWORD *v42; // [rsp+658h] [rbp+550h]
  __int64 v43; // [rsp+660h] [rbp+558h]
  __int64 v44; // [rsp+668h] [rbp+560h]
  _DWORD v45[2]; // [rsp+670h] [rbp+568h] BYREF
  int *v46; // [rsp+678h] [rbp+570h]
  __int64 v47; // [rsp+680h] [rbp+578h]
  int *v48; // [rsp+688h] [rbp+580h]
  __int64 v49; // [rsp+690h] [rbp+588h]
  int *v50; // [rsp+698h] [rbp+590h]
  __int64 v51; // [rsp+6A0h] [rbp+598h]
  __int64 *v52; // [rsp+6A8h] [rbp+5A0h]
  __int64 v53; // [rsp+6B0h] [rbp+5A8h]
  int *v54; // [rsp+6B8h] [rbp+5B0h]
  __int64 v55; // [rsp+6C0h] [rbp+5B8h]

  SystemInformation = 0LL;
  if ( RtlRunOnceExecuteOnce(
         &LibLoaderTelemetryInitRunOnce,
         (PRTL_RUN_ONCE_INIT_FN)LibLoaderTelemetryInitOnce,
         0LL,
         0LL) >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v10 = (unsigned __int16 *)(v9 + 72);
    if ( v9 )
    {
      v11 = *(unsigned __int8 *)(v9 + 284);
    }
    else
    {
      v10 = (unsigned __int16 *)&unk_1801141A0;
      v11 = -1;
    }
    LODWORD(SystemInformation) = 8;
    NtQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, 0LL);
    if ( dword_1801594C0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1801594C0, 0x800000000000uLL) )
    {
      v14 = *(_QWORD *)(a1 + 56);
      v18 = *(unsigned __int8 *)(v14 + 284);
      v19 = *(_DWORD *)(a1 + 32);
      v20 = *(_DWORD *)(a1 + 36);
      v24 = HIDWORD(SystemInformation);
      LOBYTE(v17) = a5;
      v21 = a3;
      v22 = v11;
      v23 = a2;
      LODWORD(v25) = a4;
      v15 = *(unsigned __int16 *)(v14 + 72);
      v32 = *(_QWORD *)(v14 + 80);
      v34 = &v18;
      v36 = &v19;
      v38 = &v20;
      v40 = &v21;
      v42 = v45;
      v44 = *((_QWORD *)v10 + 1);
      v45[0] = *v10;
      v46 = &v22;
      v48 = &v23;
      v50 = &v24;
      v52 = &v25;
      v54 = &v17;
      v30 = v33;
      v31 = 2LL;
      v33[0] = v15;
      v33[1] = 0;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 2LL;
      v45[1] = 0;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801594C0, &unk_180126961, v12, v13, 0xFu, &pData);
    }
  }
  RtlCaptureContext(&ContextRecord);
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073740791;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionAddress = 0LL;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = 45LL;
  return RtlReportException(&ExceptionRecord, &ContextRecord, 0x1Eu);
}
