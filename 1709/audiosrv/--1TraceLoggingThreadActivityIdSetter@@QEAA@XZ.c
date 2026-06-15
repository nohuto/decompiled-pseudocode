/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x18005AC04
 * Callers:
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$0 @ 0x180037F3E (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::Init_::_1_::dtor$0 @ 0x180037F4A (_AudioEffectsWatcher--Init_--_1_--dtor$0.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x180039BC1 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x18008FF00 (AudioServerGetStreamVpoContext$dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
