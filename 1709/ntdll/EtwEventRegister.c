/*
 * XREFs of EtwEventRegister @ 0x180075710
 * Callers:
 *     SbSelectProcedure @ 0x180021390 (SbSelectProcedure.c)
 *     TraceLoggingRegisterEx @ 0x1800754D8 (TraceLoggingRegisterEx.c)
 *     SbObtainTraceHandle @ 0x1800818D8 (SbObtainTraceHandle.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800819EC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CEC08 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CEC88 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D2020 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x1800366A0 (EtwNotificationRegister.c)
 */

__int64 __fastcall EtwEventRegister(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3u, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
