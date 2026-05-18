/*
 * XREFs of sub_180001140 @ 0x180001140
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180003F8C (--2@YAPEAX_K@Z.c)
 */

int sub_180001140()
{
  CDwmInitTelemetryAggregator *v0; // rax

  v0 = (CDwmInitTelemetryAggregator *)operator new(0x18uLL);
  if ( v0 )
  {
    *((_QWORD *)v0 + 1) = 0LL;
    *(_QWORD *)v0 = &CDwmInitTelemetryAggregator::`vftable';
    *((_QWORD *)v0 + 2) = 0LL;
    qword_18000F048 = v0;
  }
  else
  {
    qword_18000F048 = 0LL;
  }
  byte_18000F051 = 1;
  gDwmInitTelemetryAggregator = &CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::`vftable';
  qword_18000F060 = 0LL;
  return atexit((void (__cdecl *)())sub_180009BA0);
}
