/*
 * XREFs of ??0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ @ 0x1800C3424
 * Callers:
 *     ??0CExclusiveModeListener@@QEAA@XZ @ 0x1800BF044 (--0CExclusiveModeListener@@QEAA@XZ.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x1800BF1AC (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@_K11@Z @ 0x1800C336C (--0-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValuesClu.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialAudioResourceManagerTraceLogger *__fastcall CSpatialAudioResourceManagerTraceLogger::CSpatialAudioResourceManagerTraceLogger(
        CSpatialAudioResourceManagerTraceLogger *this)
{
  *(_QWORD *)this = &CSpatialAudioResourceManagerTraceLogger::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = &g_SarmTelemetryProvider;
  *((_QWORD *)this + 6) = &GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 1) = &CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::`vftable';
  CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>(
    (__int64)this + 72,
    (__int64)this + 8);
  return this;
}
