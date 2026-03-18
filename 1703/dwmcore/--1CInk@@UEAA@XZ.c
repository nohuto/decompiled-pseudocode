/*
 * XREFs of ??1CInk@@UEAA@XZ @ 0x180001864
 * Callers:
 *     ??_ECInk@@UEAAPEAXI@Z @ 0x1800016D0 (--_ECInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x180001C94 (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CInk::~CInk(CInk *this)
{
  *(_QWORD *)this = &CInk::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 152);
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>((char *)this + 56);
  CResource::~CResource(this);
}
