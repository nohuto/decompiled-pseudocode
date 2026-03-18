/*
 * XREFs of ??1CFilterEffect@@MEAA@XZ @ 0x1800033F0
 * Callers:
 *     ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x180002A80 (--_ECTurbulenceEffect@@UEAAPEAXI@Z.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x18016F500 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x180001C94 (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 *     ?RemoveAll@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAXXZ @ 0x180001E6C (-RemoveAll@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEA.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1800033B0 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 */

void __fastcall CFilterEffect::~CFilterEffect(CFilterEffect *this)
{
  *(_QWORD *)this = &CFilterEffect::`vftable';
  CFilterEffect::EmptyFilterInputMap(this);
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((__int64)this + 152);
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>((CFilterEffect *)((char *)this + 72));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
