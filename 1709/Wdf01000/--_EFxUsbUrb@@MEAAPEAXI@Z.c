/*
 * XREFs of ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1C007E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 */

FxUsbUrb *__fastcall FxUsbUrb::`vector deleting destructor'(FxUsbUrb *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxUsbUrb *v5; // rcx

  v3 = a2;
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxUsbUrb *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
