/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x140034D3C
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$6 @ 0x14005A697 (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$6.c)
 *     _CSpatialCrossProcessServerEndpoint::_CSpatialCrossProcessServerEndpoint_::_1_::dtor$1 @ 0x14005A91F (_CSpatialCrossProcessServerEndpoint--_CSpatialCrossProcessServerEndpoint_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessServerEndpoint::_CSpatialCrossProcessServerEndpoint_::_1_::dtor$2 @ 0x14005A932 (_CSpatialCrossProcessServerEndpoint--_CSpatialCrossProcessServerEndpoint_--_1_--dtor$2.c)
 *     _CSpatialCrossProcessServerEndpoint::_CSpatialCrossProcessServerEndpoint_::_1_::dtor$3 @ 0x14005A945 (_CSpatialCrossProcessServerEndpoint--_CSpatialCrossProcessServerEndpoint_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessServerEndpoint::_CSpatialCrossProcessServerEndpoint_::_1_::dtor$4 @ 0x14005A958 (_CSpatialCrossProcessServerEndpoint--_CSpatialCrossProcessServerEndpoint_--_1_--dtor$4.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$0 @ 0x14005F618 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x140034F38 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CHandle::~CHandle(ATL::CHandle *this)
{
  if ( *(_QWORD *)this )
    ATL::CHandle::Close(this);
}
