/*
 * XREFs of ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140059384
 * Callers:
 *     _CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger_::_1_::dtor$3 @ 0x14005929A (_CSpatialCrossProcessEndpointTraceLogger--CSpatialCrossProcessEndpointTraceLogger_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger_::_1_::dtor$4 @ 0x1400592AD (_CSpatialCrossProcessEndpointTraceLogger--CSpatialCrossProcessEndpointTraceLogger_--_1_--dtor$4.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14005940C (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     _CSpatialCrossProcessEndpointTraceLogger::_CSpatialCrossProcessEndpointTraceLogger_::_1_::dtor$3 @ 0x1400594BF (_CSpatialCrossProcessEndpointTraceLogger--_CSpatialCrossProcessEndpointTraceLogger_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessEndpointTraceLogger::_CSpatialCrossProcessEndpointTraceLogger_::_1_::dtor$4 @ 0x1400594D2 (_CSpatialCrossProcessEndpointTraceLogger--_CSpatialCrossProcessEndpointTraceLogger_--_1_--dtor$4.c)
 *     ??_E?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x140059570 (--_E-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x1400599E0 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>(
        __int64 a1)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rdx

  *(_QWORD *)a1 = &CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  TickCount64 = GetTickCount64();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
    {
      LOBYTE(v3) = 1;
      CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
        a1,
        v3);
    }
  }
  return CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>(a1);
}
