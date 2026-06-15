/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x1400303D8
 * Callers:
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$10 @ 0x14002209C (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$10.c)
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$6 @ 0x140057F73 (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$6.c)
 *     _CSpatialCrossProcessServerEndpoint::_CSpatialCrossProcessServerEndpoint_::_1_::dtor$1 @ 0x1400581FB (_CSpatialCrossProcessServerEndpoint--_CSpatialCrossProcessServerEndpoint_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessServerEndpoint::_CSpatialCrossProcessServerEndpoint_::_1_::dtor$2 @ 0x14005820E (_CSpatialCrossProcessServerEndpoint--_CSpatialCrossProcessServerEndpoint_--_1_--dtor$2.c)
 *     _CSpatialCrossProcessServerEndpoint::_CSpatialCrossProcessServerEndpoint_::_1_::dtor$3 @ 0x140058221 (_CSpatialCrossProcessServerEndpoint--_CSpatialCrossProcessServerEndpoint_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessServerEndpoint::_CSpatialCrossProcessServerEndpoint_::_1_::dtor$4 @ 0x140058234 (_CSpatialCrossProcessServerEndpoint--_CSpatialCrossProcessServerEndpoint_--_1_--dtor$4.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$0 @ 0x14005C7A8 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1400303B4 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CHandle::~CHandle(void **this)
{
  if ( *this )
    ATL::CHandle::Close(this);
}
