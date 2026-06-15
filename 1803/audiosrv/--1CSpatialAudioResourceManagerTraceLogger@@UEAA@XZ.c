/*
 * XREFs of ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x1800F5ABC
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800F1E70 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     ??_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x1800F5BD0 (--_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z.c)
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x1800F8350 (--1CExclusiveModeListener@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1800F5A60 (--1-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger(
        CSpatialAudioResourceManagerTraceLogger *this)
{
  *(_QWORD *)this = &CSpatialAudioResourceManagerTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>((__int64)this + 72);
  *((_QWORD *)this + 1) = &CAggregateValuesBase<enum SarmErrorEvent,unsigned int *>::`vftable';
}
