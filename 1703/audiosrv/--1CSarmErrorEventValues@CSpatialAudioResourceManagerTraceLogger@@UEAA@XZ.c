/*
 * XREFs of ??1CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x1800C696C
 * Callers:
 *     _CSpatialAudioResourceManagerTraceLogger::CSpatialAudioResourceManagerTraceLogger_::_1_::dtor$0 @ 0x18005BA67 (_CSpatialAudioResourceManagerTraceLogger--CSpatialAudioResourceManagerTraceLogger_--_1_--dtor$0.c)
 *     _CSpatialAudioResourceManagerTraceLogger::_CSpatialAudioResourceManagerTraceLogger_::_1_::dtor$0 @ 0x1800C69B3 (_CSpatialAudioResourceManagerTraceLogger--_CSpatialAudioResourceManagerTraceLogger_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::~CSarmErrorEventValues(
        CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *this)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum SarmErrorEvent,unsigned int *>::`vftable';
}
