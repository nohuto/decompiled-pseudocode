/*
 * XREFs of ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x14004FF34
 * Callers:
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$0 @ 0x140020A34 (_privateCreateCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$1 @ 0x140020A4C (_privateCreateCrossProcessEndpoint_--_1_--dtor$1.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$2 @ 0x140020A58 (_privateCreateCrossProcessEndpoint_--_1_--dtor$2.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$3 @ 0x140020A64 (_privateCreateCrossProcessEndpoint_--_1_--dtor$3.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14005162E (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140051766 (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14005189E (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x1400519D6 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140058C3E (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint___--CreateInstance_--.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140058D76 (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint___--CreateInstance_--_.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$0 @ 0x140059291 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x14005929D (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400178C8 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017944 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::operator delete(void *a1)
{
  void *v2; // rax

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(a1, v2);
}
