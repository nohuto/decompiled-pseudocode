/*
 * XREFs of ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x18028DC50
 * Callers:
 *     ?cleanup@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAXXZ @ 0x1802CFADC (-cleanup@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180104A74 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ImmersiveIconsLogging *__fastcall ImmersiveIconsLogging::`vector deleting destructor'(
        ImmersiveIconsLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
