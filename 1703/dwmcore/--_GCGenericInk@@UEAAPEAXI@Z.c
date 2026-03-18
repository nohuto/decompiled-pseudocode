/*
 * XREFs of ??_GCGenericInk@@UEAAPEAXI@Z @ 0x180153DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x18015354C (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ.c)
 */

void **__fastcall CGenericInk::`scalar deleting destructor'(void **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this + 28);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 23);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 18);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>((__int64)(this + 8));
  CResource::~CResource((CResource *)this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
