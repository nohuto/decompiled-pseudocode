/*
 * XREFs of ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400519C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140017184 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017200 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001C2A0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CCrossProcessServerOutputEndpoint@@UEAA@XZ @ 0x14002FA5C (--1CCrossProcessServerOutputEndpoint@@UEAA@XZ.c)
 */

CCrossProcessServerOutputEndpoint *__fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`scalar deleting destructor'(
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
