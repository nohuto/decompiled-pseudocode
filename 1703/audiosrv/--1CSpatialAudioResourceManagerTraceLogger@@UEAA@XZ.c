/*
 * XREFs of ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x1800C6978
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800C1D6C (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$7 @ 0x1800C1EDC (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$7.c)
 *     ??_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x1800C6AB0 (--_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1800C690C (--1-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger(
        CSpatialAudioResourceManagerTraceLogger *this)
{
  *(_QWORD *)this = &CSpatialAudioResourceManagerTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>((__int64)this + 72);
  *((_QWORD *)this + 1) = &CAggregateValuesBase<enum SarmErrorEvent,unsigned int *>::`vftable';
}
