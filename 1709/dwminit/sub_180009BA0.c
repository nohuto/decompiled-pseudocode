/*
 * XREFs of sub_180009BA0 @ 0x180009BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void sub_180009BA0()
{
  gDwmInitTelemetryAggregator = &CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::`vftable';
  CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::~CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>((__int64)&gDwmInitTelemetryAggregator);
}
