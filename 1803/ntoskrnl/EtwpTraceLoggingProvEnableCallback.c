/*
 * XREFs of EtwpTraceLoggingProvEnableCallback @ 0x14052D6D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpPsProvCaptureState @ 0x1407AFA90 (EtwpPsProvCaptureState.c)
 */

void __fastcall EtwpTraceLoggingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  if ( ControlCode == 2 && CallbackContext == &PsProvTraceLoggingGuid )
    EtwpPsProvCaptureState(CallbackContext, MatchAnyKeyword, Level);
}
