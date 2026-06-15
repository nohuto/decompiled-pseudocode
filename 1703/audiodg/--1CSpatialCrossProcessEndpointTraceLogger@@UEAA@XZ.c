/*
 * XREFs of ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14005940C
 * Callers:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140057DE4 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$5 @ 0x140057F60 (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$5.c)
 *     ??_GCSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x140059680 (--_GCSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAA@XZ @ 0x14005932C (--1-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger.c)
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140059384 (--1-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger(
        CSpatialCrossProcessEndpointTraceLogger *this)
{
  *(_QWORD *)this = &CSpatialCrossProcessEndpointTraceLogger::`vftable';
  *((_QWORD *)this + 56) = &CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::`vftable';
  CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::~CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>((__int64)this + 448);
  CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>((__int64)this + 352);
  CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>((__int64)this + 256);
  *((_QWORD *)this + 20) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  *((_QWORD *)this + 12) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  *((_QWORD *)this + 3) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
