/*
 * XREFs of ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050760
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140019388 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BC00 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CCrossProcessServerOutputEndpoint@@UEAA@XZ @ 0x14002FBD8 (--1CCrossProcessServerOutputEndpoint@@UEAA@XZ.c)
 */

CCrossProcessServerOutputEndpoint *__fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CCrossProcessServerOutputEndpoint *a1,
        char a2)
{
  void *v4; // rax

  CCrossProcessServerOutputEndpoint::~CCrossProcessServerOutputEndpoint(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v4);
    }
  }
  return a1;
}
