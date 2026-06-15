/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x180097244
 * Callers:
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x18006A180 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::Init_::_1_::dtor$0 @ 0x1800A79AC (_AudioEffectsWatcher--Init_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$0 @ 0x1800A7D75 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$0.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x1800C530E (AudioServerGetStreamVpoContext$dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
