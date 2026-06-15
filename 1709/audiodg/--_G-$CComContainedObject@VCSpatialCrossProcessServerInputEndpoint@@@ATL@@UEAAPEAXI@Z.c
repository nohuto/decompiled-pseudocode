/*
 * XREFs of ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005AAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140017184 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017200 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001C2A0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x14005A96C (--1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessServerInputEndpoint *__fastcall ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CSpatialCrossProcessServerInputEndpoint *a1,
        char a2)
{
  void *v4; // rax

  CSpatialCrossProcessServerInputEndpoint::~CSpatialCrossProcessServerInputEndpoint(a1);
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
