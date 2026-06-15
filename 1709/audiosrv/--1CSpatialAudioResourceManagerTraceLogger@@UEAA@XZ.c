/*
 * XREFs of ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x1800C3584
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800BF5C4 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$9 @ 0x1800BF77E (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$9.c)
 *     ??_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x1800C36B0 (--_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z.c)
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x1800C5E24 (--1CExclusiveModeListener@@UEAA@XZ.c)
 *     _CExclusiveModeListener::_CExclusiveModeListener_::_1_::dtor$6 @ 0x1800C5F44 (_CExclusiveModeListener--_CExclusiveModeListener_--_1_--dtor$6.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1800C3518 (--1-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger(
        CSpatialAudioResourceManagerTraceLogger *this)
{
  *(_QWORD *)this = &CSpatialAudioResourceManagerTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>((__int64)this + 72);
  *((_QWORD *)this + 1) = &CAggregateValuesBase<enum SarmErrorEvent,unsigned int *>::`vftable';
}
