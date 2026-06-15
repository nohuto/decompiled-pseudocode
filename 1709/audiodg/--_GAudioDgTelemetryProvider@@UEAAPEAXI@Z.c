/*
 * XREFs of ??_GAudioDgTelemetryProvider@@UEAAPEAXI@Z @ 0x140034DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x140034D50 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AudioDgTelemetryProvider *__fastcall AudioDgTelemetryProvider::`scalar deleting destructor'(
        AudioDgTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
