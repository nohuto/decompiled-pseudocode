/*
 * XREFs of ??_G?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAAPEAXI@Z @ 0x180153B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x180001C94 (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

struct IDeviceResourceNotify *__fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::`scalar deleting destructor'(
        struct IDeviceResourceNotify *lpMem,
        char a2)
{
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
