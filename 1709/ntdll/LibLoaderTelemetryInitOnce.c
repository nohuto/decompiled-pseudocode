/*
 * XREFs of LibLoaderTelemetryInitOnce @ 0x180088C80
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1800754D8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall LibLoaderTelemetryInitOnce(
        PRTL_RUN_ONCE a1,
        void (__cdecl *a2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID),
        PVOID *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1801594C0, a2, a3);
  return 1LL;
}
