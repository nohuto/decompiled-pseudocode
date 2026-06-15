/*
 * XREFs of ??1CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x1800C3578
 * Callers:
 *     _CSpatialAudioResourceManagerTraceLogger::CSpatialAudioResourceManagerTraceLogger_::_1_::dtor$0 @ 0x1800C3492 (_CSpatialAudioResourceManagerTraceLogger--CSpatialAudioResourceManagerTraceLogger_--_1_--dtor$0.c)
 *     _CSpatialAudioResourceManagerTraceLogger::_CSpatialAudioResourceManagerTraceLogger_::_1_::dtor$0 @ 0x1800C35BF (_CSpatialAudioResourceManagerTraceLogger--_CSpatialAudioResourceManagerTraceLogger_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::~CSarmErrorEventValues(
        CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *this)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum SarmErrorEvent,unsigned int *>::`vftable';
}
