/*
 * XREFs of ??1CPencil@@UEAA@XZ @ 0x18015359C
 * Callers:
 *     ??_GCPencil@@UEAAPEAXI@Z @ 0x180153F00 (--_GCPencil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x18015354C (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ.c)
 */

void __fastcall CPencil::~CPencil(CPencil *this)
{
  *(_QWORD *)this = &CPencil::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 23);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>((__int64)this + 56);
  CResource::~CResource(this);
}
