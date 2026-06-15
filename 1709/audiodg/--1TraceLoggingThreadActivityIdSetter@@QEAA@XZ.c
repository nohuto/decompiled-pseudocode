/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x140030E58
 * Callers:
 *     _CSystemAudioDeviceSharedBase::InnerInitializeAPO_::_1_::dtor$0 @ 0x140021388 (_CSystemAudioDeviceSharedBase--InnerInitializeAPO_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor$3 @ 0x1400213C6 (_CSystemAudioDeviceSharedBase--_CSystemAudioDeviceSharedBase_--_1_--dtor$3.c)
 *     _CSystemAudioDeviceSharedBase::Cleanup_::_1_::dtor$0 @ 0x1400213DE (_CSystemAudioDeviceSharedBase--Cleanup_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$3 @ 0x140021494 (_CSubmixImpl--CreateStream_--_1_--dtor$3.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$8 @ 0x14002191A (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$8.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$2 @ 0x140021D88 (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x14002FD9A (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::_CSystemAudioDeviceExclusive_::_1_::dtor$2 @ 0x14003912B (_CSystemAudioDeviceExclusive--_CSystemAudioDeviceExclusive_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceExclusive::Cleanup_::_1_::dtor$0 @ 0x1400392EC (_CSystemAudioDeviceExclusive--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x14003A4AC (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$6 @ 0x14003C8E1 (_CSystemAudioDeviceOffload--_CSystemAudioDeviceOffload_--_1_--dtor$6.c)
 *     _CSystemAudioDeviceOffload::Cleanup_::_1_::dtor$0 @ 0x14003CA8C (_CSystemAudioDeviceOffload--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::_CSystemAudioDeviceOffloadGraph_::_1_::dtor$6 @ 0x14003E65D (_CSystemAudioDeviceOffloadGraph--_CSystemAudioDeviceOffloadGraph_--_1_--dtor$6.c)
 *     _CSystemAudioDeviceOffloadGraph::Cleanup_::_1_::dtor$0 @ 0x14003E7E1 (_CSystemAudioDeviceOffloadGraph--Cleanup_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x140044B32 (_CStreamGroup--CreateStream_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
