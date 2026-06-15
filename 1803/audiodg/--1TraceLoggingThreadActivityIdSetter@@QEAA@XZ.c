/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x14002FE70
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$3 @ 0x14001F814 (_CSubmixImpl--CreateStream_--_1_--dtor$3.c)
 *     _CSystemAudioDeviceSharedBase::InnerInitializeAPO_::_1_::dtor$0 @ 0x1400206C0 (_CSystemAudioDeviceSharedBase--InnerInitializeAPO_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::Cleanup_::_1_::dtor$0 @ 0x1400206CC (_CSystemAudioDeviceSharedBase--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x14002ED8E (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::Cleanup_::_1_::dtor$0 @ 0x140037F3C (_CSystemAudioDeviceExclusive--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x140038D40 (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::Cleanup_::_1_::dtor$0 @ 0x14003B1DC (_CSystemAudioDeviceOffload--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::Cleanup_::_1_::dtor$0 @ 0x14003CAB1 (_CSystemAudioDeviceOffloadGraph--Cleanup_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x1400433C5 (_CStreamGroup--CreateStream_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
