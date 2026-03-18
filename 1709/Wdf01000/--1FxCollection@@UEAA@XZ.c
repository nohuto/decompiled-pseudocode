/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x1C0017E84
 * Callers:
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C0010DD0 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C0011FF0 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C001206C (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0017EC8 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxCollection::~FxCollection(FxCollection *this)
{
  this->__vftable = (FxCollection_vtbl *)FxIoResList::`vftable';
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxNonPagedObject::~FxNonPagedObject(this);
}
