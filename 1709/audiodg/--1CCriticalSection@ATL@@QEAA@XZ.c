/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x14002FFD4
 * Callers:
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$4 @ 0x1400211AA (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$5 @ 0x1400211BD (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$5.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$4 @ 0x14002124C (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$4 @ 0x1400215B0 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$4.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$3 @ 0x1400218BB (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$3.c)
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x1400219D5 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140021A10 (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140059F32 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x140059F68 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14005A628 (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x14005A65E (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
