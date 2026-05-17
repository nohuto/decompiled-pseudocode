/*
 * XREFs of RtlReportException @ 0x1800DC780
 * Callers:
 *     LdrpProcessDetachNode @ 0x180012198 (LdrpProcessDetachNode.c)
 *     LdrpCallTlsInitializers @ 0x180031350 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x180072C90 (LdrpInitializeNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEA00 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D2168 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D6034 (LdrpInitializeProcessWrapperFilter.c)
 *     RtlReportExceptionEx @ 0x1800DC850 (RtlReportExceptionEx.c)
 *     RtlpPossibleDeadlock @ 0x1800E6BDC (RtlpPossibleDeadlock.c)
 *     RtlReportCriticalFailure @ 0x1800F8394 (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F9930 (RtlUnhandledExceptionFilter2.c)
 *     TppReportExceptionFilter @ 0x18010AF50 (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18010B1B4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18010B234 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     RtlReportExceptionHelper @ 0x1800DCD18 (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD564 (WerpBreakIntoDebuggerIfPresent.c)
 */

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  int v7; // ebx
  unsigned int v8; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  ((void (*)(void))WerpBreakIntoDebuggerIfPresent)();
  v7 = 0;
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v7 = 1;
    v11 = -300000000LL;
  }
  v8 = RtlReportExceptionHelper(a1, a2, a3, (unsigned __int64)&v11 & -(__int64)(v7 != 0));
  WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  return v8;
}
