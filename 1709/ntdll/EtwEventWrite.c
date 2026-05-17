/*
 * XREFs of EtwEventWrite @ 0x180019EF0
 * Callers:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     SbSelectProcedure @ 0x180021390 (SbSelectProcedure.c)
 *     EtwEventWriteEndScenario @ 0x180068080 (EtwEventWriteEndScenario.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800819EC (LdrpLogDeprecatedDllEtwEvent.c)
 *     EtwEventWriteStartScenario @ 0x18008CC90 (EtwEventWriteStartScenario.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CEC08 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CEC88 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D2020 (LdrpLogFatalUserCallbackException.c)
 *     RtlpHpStackDbLogStackDbEnd @ 0x1800FFE4C (RtlpHpStackDbLogStackDbEnd.c)
 *     RtlpHpStackDbLogStackDbSnapshot @ 0x1800FFEC0 (RtlpHpStackDbLogStackDbSnapshot.c)
 *     SbpTraceContextUpdate @ 0x18010B4D8 (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180019F70 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}
