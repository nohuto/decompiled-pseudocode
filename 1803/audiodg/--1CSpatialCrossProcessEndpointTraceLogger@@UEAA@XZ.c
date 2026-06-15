/*
 * XREFs of ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140059718
 * Callers:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400581B0 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??_GCSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x140059950 (--_GCSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAA@XZ @ 0x140059654 (--1-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger.c)
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1400596B8 (--1-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger(
        CSpatialCrossProcessEndpointTraceLogger *this)
{
  _QWORD *v2; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessEndpointTraceLogger::`vftable';
  v2 = (_QWORD *)((char *)this + 448);
  *v2 = &CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::`vftable';
  CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::~CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>((__int64)v2);
  CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>((__int64)this + 352);
  CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>((__int64)this + 256);
  *((_QWORD *)this + 20) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  *((_QWORD *)this + 12) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  *((_QWORD *)this + 3) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
