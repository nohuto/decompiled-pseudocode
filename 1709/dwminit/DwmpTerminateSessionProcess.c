/*
 * XREFs of DwmpTerminateSessionProcess @ 0x1800033A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001400 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x1800015B8 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001ECC (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800024B0 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180003DF8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     DwmpRequestProcessShutdown @ 0x18000447C (DwmpRequestProcessShutdown.c)
 *     __security_check_cookie @ 0x1800082F0 (__security_check_cookie.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180008B5C (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 */

__int64 __fastcall DwmpTerminateSessionProcess(int a1)
{
  int v1; // eax
  int v2; // eax
  const GUID *v3; // r8
  const GUID *v4; // r9
  CDwmInitTelemetryAggregator *v5; // rax
  bool v7; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-55h] BYREF
  DWORD ExitCode; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  GUID *v11; // [rsp+60h] [rbp-29h]
  __int64 v12; // [rsp+68h] [rbp-21h]
  unsigned int *v13; // [rsp+70h] [rbp-19h]
  __int64 v14; // [rsp+78h] [rbp-11h]
  int *v15; // [rsp+80h] [rbp-9h]
  __int64 v16; // [rsp+88h] [rbp-1h]
  bool *v17; // [rsp+90h] [rbp+7h]
  __int64 v18; // [rsp+98h] [rbp+Fh]
  GUID *v19; // [rsp+A0h] [rbp+17h]
  __int64 v20; // [rsp+A8h] [rbp+1Fh]
  unsigned __int16 *v21; // [rsp+B0h] [rbp+27h]
  __int64 v22; // [rsp+B8h] [rbp+2Fh]
  unsigned __int16 *v23; // [rsp+C0h] [rbp+37h]
  __int64 v24; // [rsp+C8h] [rbp+3Fh]
  int v25; // [rsp+F0h] [rbp+67h] BYREF

  v25 = a1;
  v8 = 0;
  ExitCode = 0;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18000F780 = GetCurrentThreadId();
  if ( ghDwmProcess )
  {
    v1 = DwmpRequestProcessShutdown();
    v8 = v1;
    if ( v1 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_18000B3A4, 1u, v1, 0x6AFu);
    WaitForDwmExit(&ExitCode, 0LL);
  }
  v2 = UnmapDwmVirtualAccount();
  v8 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_18000B3A4, 1u, v2, 0x6B4u);
  }
  else if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
  {
    DwmMonitorExtCleanup();
  }
  dword_18000F780 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  v7 = GetModuleHandleW(L"WinInit.exe") != 0LL;
  if ( hProvider > 5u
    && (qword_18000F010 & 0x200000000000LL) != 0
    && (qword_18000F018 & 0x200000000000LL) == qword_18000F018 )
  {
    v12 = 16LL;
    v11 = &gDwmInitTelemetryActivityId;
    v13 = &v8;
    v15 = &v25;
    v17 = &v7;
    v19 = &gDwmInitTargetAppSessionGuid;
    v21 = &gBootId;
    v23 = &gSessionId;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 1LL;
    v20 = 16LL;
    v22 = 2LL;
    v24 = 2LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18000BE90, v3, v4, 9u, &pData);
  }
  TraceLoggingWriteEtw(9, v8, 0LL);
  if ( qword_18000F048 )
  {
    CDwmInitTelemetryAggregator::LogTelemetry(qword_18000F048);
    v5 = qword_18000F048;
    if ( qword_18000F048 )
    {
      *((_QWORD *)qword_18000F048 + 1) = 0LL;
      *((_QWORD *)v5 + 2) = 0LL;
    }
  }
  byte_18000F050 = 0;
  return v8;
}
