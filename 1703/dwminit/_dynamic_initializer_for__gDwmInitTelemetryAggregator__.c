/*
 * XREFs of _dynamic_initializer_for__gDwmInitTelemetryAggregator__ @ 0x180001140
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180003EBC (--2@YAPEAX_K@Z.c)
 */

int dynamic_initializer_for__gDwmInitTelemetryAggregator__()
{
  CDwmInitTelemetryAggregator *v0; // rax

  v0 = (CDwmInitTelemetryAggregator *)operator new(0x18uLL);
  if ( v0 )
  {
    *((_QWORD *)v0 + 1) = 0LL;
    *(_QWORD *)v0 = &CDwmInitTelemetryAggregator::`vftable';
    *((_QWORD *)v0 + 2) = 0LL;
    qword_18000C048 = v0;
  }
  else
  {
    qword_18000C048 = 0LL;
  }
  byte_18000C051 = 1;
  gDwmInitTelemetryAggregator = &CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::`vftable';
  qword_18000C060 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__gDwmInitTelemetryAggregator__);
}
