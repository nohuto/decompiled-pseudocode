/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x180086F50
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1800754D8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternalInitOnce(
        __int64 a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, a2, a3);
  dword_18015FFF0 = (unsigned __int16)(__rdtsc() >> 4);
  return 1LL;
}
