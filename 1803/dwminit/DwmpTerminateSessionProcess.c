/*
 * XREFs of DwmpTerminateSessionProcess @ 0x180003460
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000134C (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001498 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?IsRunningInWininit@@YA_NXZ @ 0x180001574 (-IsRunningInWininit@@YA_NXZ.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001D4C (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002330 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180003B0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     DwmpRequestProcessShutdown @ 0x1800040CC (DwmpRequestProcessShutdown.c)
 *     __security_check_cookie @ 0x180007120 (__security_check_cookie.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180008090 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 */

__int64 __fastcall DwmpTerminateSessionProcess(int a1)
{
  int v1; // eax
  int v2; // eax
  bool v3; // al
  TraceLoggingHProvider v4; // rcx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v7; // rdx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v8; // rcx
  __int64 v9; // r8
  const GUID *v10; // r9
  bool v12; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-55h] BYREF
  DWORD ExitCode; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  GUID *v16; // [rsp+60h] [rbp-29h]
  int v17; // [rsp+68h] [rbp-21h]
  int v18; // [rsp+6Ch] [rbp-1Dh]
  unsigned int *v19; // [rsp+70h] [rbp-19h]
  int v20; // [rsp+78h] [rbp-11h]
  int v21; // [rsp+7Ch] [rbp-Dh]
  int *v22; // [rsp+80h] [rbp-9h]
  int v23; // [rsp+88h] [rbp-1h]
  int v24; // [rsp+8Ch] [rbp+3h]
  bool *v25; // [rsp+90h] [rbp+7h]
  int v26; // [rsp+98h] [rbp+Fh]
  int v27; // [rsp+9Ch] [rbp+13h]
  GUID *v28; // [rsp+A0h] [rbp+17h]
  int v29; // [rsp+A8h] [rbp+1Fh]
  int v30; // [rsp+ACh] [rbp+23h]
  unsigned __int16 *v31; // [rsp+B0h] [rbp+27h]
  int v32; // [rsp+B8h] [rbp+2Fh]
  int v33; // [rsp+BCh] [rbp+33h]
  unsigned __int16 *v34; // [rsp+C0h] [rbp+37h]
  int v35; // [rsp+C8h] [rbp+3Fh]
  int v36; // [rsp+CCh] [rbp+43h]
  int v37; // [rsp+F0h] [rbp+67h] BYREF

  v37 = a1;
  v13 = 0;
  ExitCode = 0;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18000E7C0 = GetCurrentThreadId();
  if ( ghDwmProcess )
  {
    v1 = DwmpRequestProcessShutdown();
    v13 = v1;
    if ( v1 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180009D38, 1u, v1, 0x691u);
    WaitForDwmExit(&ExitCode, 0LL);
  }
  v2 = UnmapDwmVirtualAccount();
  v13 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180009D38, 1u, v2, 0x696u);
  }
  else if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
  {
    DwmMonitorExtCleanup();
  }
  dword_18000E7C0 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( (unsigned int)dword_18000E000 > 5
    && (qword_18000E010 & 0x200000000000LL) != 0
    && (qword_18000E018 & 0x200000000000LL) == qword_18000E018 )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &gDwmInitTelemetryActivityId;
    v19 = &v13;
    v22 = &v37;
    v17 = 16;
    v20 = 4;
    v23 = 4;
    v3 = IsRunningInWininit();
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v12 = v3;
    v25 = &v12;
    v28 = &gDwmInitTargetAppSessionGuid;
    v31 = &gBootId;
    v34 = &gSessionId;
    v26 = 1;
    v29 = 16;
    v32 = 2;
    v35 = 2;
    TlgWrite(v4, &unk_18000AAD0, v5, v6, 9u, &pData);
  }
  TraceLoggingWriteEtw((const struct _TlgProvider_t *)9, v13, 0LL);
  _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v8, v7, v9, v10);
  return v13;
}
