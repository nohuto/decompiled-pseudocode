/*
 * XREFs of ??1FxDeviceBase@@MEAA@XZ @ 0x1C007AC5C
 * Callers:
 *     ??_GFxDeviceBase@@MEAAPEAXI@Z @ 0x1C007AD90 (--_GFxDeviceBase@@MEAAPEAXI@Z.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C007D234 (--1FxDevice@@UEAA@XZ.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0017EC8 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxDeviceBase::~FxDeviceBase(FxDeviceBase *this, unsigned int a2, unsigned int a3)
{
  FxDisposeList *m_DisposeList; // rcx
  FxCallbackLock *m_CallbackLockPtr; // rcx

  this->FxNonPagedObject::FxObject::__vftable = (FxDeviceBase_vtbl *)FxDeviceBase::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
  {
    m_DisposeList->DeleteObject(m_DisposeList);
    this->m_DisposeList = 0LL;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( m_CallbackLockPtr )
  {
    ((void (__fastcall *)(FxCallbackLock *, __int64))m_CallbackLockPtr->~FxCallbackLock)(m_CallbackLockPtr, 1LL);
    this->m_CallbackLockPtr = 0LL;
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
