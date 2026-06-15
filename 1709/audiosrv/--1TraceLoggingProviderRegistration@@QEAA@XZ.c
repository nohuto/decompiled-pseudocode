/*
 * XREFs of ??1TraceLoggingProviderRegistration@@QEAA@XZ @ 0x1800324D8
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AudioLicenseTraceLoggingProviderRegistration__ @ 0x18003A720 (_dynamic_atexit_destructor_for__g_AudioLicenseTraceLoggingProviderRegistration__.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingProviderRegistration::~TraceLoggingProviderRegistration(
        TraceLoggingProviderRegistration *this)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)this;
  EtwEventUnregister(*(_QWORD *)(*(_QWORD *)this + 32LL));
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_DWORD *)v1 = 0;
}
