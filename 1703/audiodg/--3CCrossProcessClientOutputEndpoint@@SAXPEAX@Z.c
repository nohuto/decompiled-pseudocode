/*
 * XREFs of ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x140050598
 * Callers:
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$0 @ 0x140021F40 (_privateCreateCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$1 @ 0x140021FAF (_privateCreateCrossProcessEndpoint_--_1_--dtor$1.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$2 @ 0x140021FBB (_privateCreateCrossProcessEndpoint_--_1_--dtor$2.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$3 @ 0x140021FC7 (_privateCreateCrossProcessEndpoint_--_1_--dtor$3.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140051B68 (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140051C98 (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140051DC8 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140051EF8 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140058928 (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint___--CreateInstance_--.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140058A58 (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint___--CreateInstance_--_.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$0 @ 0x140058F71 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x140058F7D (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::operator delete(void *a1)
{
  void *v2; // rax

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(a1, v2);
}
