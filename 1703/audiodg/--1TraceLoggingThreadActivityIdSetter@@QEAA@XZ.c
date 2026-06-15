/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x140031390
 * Callers:
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$8 @ 0x1400208D2 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$8.c)
 *     _CSystemAudioDeviceSharedBase::InnerInitializeAPO_::_1_::dtor$0 @ 0x140020A83 (_CSystemAudioDeviceSharedBase--InnerInitializeAPO_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor$3 @ 0x140020AC2 (_CSystemAudioDeviceSharedBase--_CSystemAudioDeviceSharedBase_--_1_--dtor$3.c)
 *     _CSystemAudioDeviceSharedBase::Cleanup_::_1_::dtor$0 @ 0x140020AE0 (_CSystemAudioDeviceSharedBase--Cleanup_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$3 @ 0x140020B94 (_CSubmixImpl--CreateStream_--_1_--dtor$3.c)
 *     _ATL::CComObject_CSystemAudioDeviceShared_::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x140020DFB (_ATL--CComObject_CSystemAudioDeviceShared_--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$2 @ 0x14002FF6D (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x140030152 (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::_CSystemAudioDeviceExclusive_::_1_::dtor$2 @ 0x140039A27 (_CSystemAudioDeviceExclusive--_CSystemAudioDeviceExclusive_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceExclusive::Cleanup_::_1_::dtor$0 @ 0x140039BEC (_CSystemAudioDeviceExclusive--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x14003AA9C (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$6 @ 0x14003C381 (_CSystemAudioDeviceOffload--_CSystemAudioDeviceOffload_--_1_--dtor$6.c)
 *     _CSystemAudioDeviceOffload::Cleanup_::_1_::dtor$0 @ 0x14003C52C (_CSystemAudioDeviceOffload--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::_CSystemAudioDeviceOffloadGraph_::_1_::dtor$6 @ 0x14003DCED (_CSystemAudioDeviceOffloadGraph--_CSystemAudioDeviceOffloadGraph_--_1_--dtor$6.c)
 *     _CSystemAudioDeviceOffloadGraph::Cleanup_::_1_::dtor$0 @ 0x14003DE71 (_CSystemAudioDeviceOffloadGraph--Cleanup_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x140044182 (_CStreamGroup--CreateStream_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
