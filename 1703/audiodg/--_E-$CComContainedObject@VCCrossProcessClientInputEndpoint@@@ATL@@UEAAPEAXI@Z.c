/*
 * XREFs of ??_E?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400506C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140019388 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BC00 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CCrossProcessClientInputEndpoint@@UEAA@XZ @ 0x1400504F4 (--1CCrossProcessClientInputEndpoint@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *a1,
        char a2)
{
  void *v4; // rax

  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)a1);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v4);
    }
  }
  return a1;
}
