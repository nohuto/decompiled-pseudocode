/*
 * XREFs of ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400501E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x1400176F0 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400178C8 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017944 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001B350 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  void *v4; // rax

  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint((CCrossProcessBaseServerEndpoint *)a1);
  if ( a1[512] )
  {
    a1[512] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 472));
  }
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
