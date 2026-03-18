/*
 * XREFs of ??_GCGenericInk@@UEAAPEAXI@Z @ 0x180146B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x1801460D4 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18015A76C (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall CGenericInk::`scalar deleting destructor'(void **this, char a2)
{
  void *v4; // rcx

  FastRegion::CRegion::FreeMemory(this + 28);
  v4 = this[27];
  if ( v4 )
    WPF::ProcessHeapImpl::Free(v4);
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(this + 26);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 21);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 17);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>((__int64)(this + 9));
  CResource::~CResource((CResource *)this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
