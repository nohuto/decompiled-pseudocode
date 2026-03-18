/*
 * XREFs of ??1CPrimitiveColor@@MEAA@XZ @ 0x180024730
 * Callers:
 *     ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x180024774 (--_GCPrimitiveColor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x180024534 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CPrimitiveColor::~CPrimitiveColor(CPrimitiveColor *this)
{
  *(_QWORD *)this = &CPrimitiveColor::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 1) = &CPrimitiveColor::`vftable'{for `CResource'};
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 64);
  CResource::~CResource((CPrimitiveColor *)((char *)this + 8));
}
