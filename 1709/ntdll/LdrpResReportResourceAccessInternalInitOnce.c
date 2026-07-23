/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x180086F50
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1800754D8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternalInitOnce(
        PRTL_RUN_ONCE a1,
        void (__cdecl *a2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID),
        PVOID *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, a2, a3);
  dword_18015FFF0 = (unsigned __int16)(__rdtsc() >> 4);
  return 1LL;
}
