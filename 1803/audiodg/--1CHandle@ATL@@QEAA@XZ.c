/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x140033BF4
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$0 @ 0x14005CB87 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x140033E04 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CHandle::~CHandle(ATL::CHandle *this)
{
  if ( *(_QWORD *)this )
    ATL::CHandle::Close(this);
}
