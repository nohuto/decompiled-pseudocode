/*
 * XREFs of ??_GAudioDgTelemetryProvider@@UEAAPEAXI@Z @ 0x140035570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1400354FC (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
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
