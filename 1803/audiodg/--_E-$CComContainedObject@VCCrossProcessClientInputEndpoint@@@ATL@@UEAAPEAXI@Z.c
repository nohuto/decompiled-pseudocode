/*
 * XREFs of ??_E?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050060
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400178C8 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017944 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001B350 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14004FE3C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
struct _RTL_CRITICAL_SECTION *__fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *a1,
        char a2)
{
  void *v4; // rax

  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint((CCrossProcessBaseClientEndpoint *)a1);
  if ( LOBYTE(a1[13].DebugInfo) )
  {
    LOBYTE(a1[13].DebugInfo) = 0;
    DeleteCriticalSection(a1 + 12);
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
