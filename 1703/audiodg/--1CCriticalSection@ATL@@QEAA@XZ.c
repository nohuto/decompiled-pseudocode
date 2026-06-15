/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x14003038C
 * Callers:
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$3 @ 0x140020873 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$3.c)
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$4 @ 0x140020CF0 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$4 @ 0x1400215D3 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$5 @ 0x1400215E6 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$5.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$4 @ 0x140021767 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140021EF0 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$8 @ 0x140021F5F (_privateCreateCrossProcessEndpoint_--_1_--dtor$8.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14002FDBF (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140057806 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x14005783C (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140057F04 (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x140057F3A (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
