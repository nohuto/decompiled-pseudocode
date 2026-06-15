/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x18007B16C
 * Callers:
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x18005AC80 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::Init_::_1_::dtor$0 @ 0x180089424 (_AudioEffectsWatcher--Init_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$0 @ 0x1800897E5 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$0.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x1800A376D (AudioServerGetStreamVpoContext$dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
