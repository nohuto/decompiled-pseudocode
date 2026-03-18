/*
 * XREFs of ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0033E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

FxFileObject *__fastcall FxFileObject::`vector deleting destructor'(FxFileObject *this, char a2, unsigned int a3)
{
  FX_POOL_TRACKER *p_m_Lock; // rax
  FX_POOL_TRACKER *CallersAddress; // rdi
  FX_POOL_TRACKER *v7; // rcx
  FxVerifierLock *v9; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
  this->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v9 = (FxVerifierLock *)this[-1].IFxHasCallbacks::__vftable;
    if ( v9 )
    {
      FxVerifierLock::`scalar deleting destructor'(v9, a2);
      this[-1].IFxHasCallbacks::__vftable = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      p_m_Lock = (FX_POOL_TRACKER *)&this[-1].m_NPLock.m_Lock;
    else
      p_m_Lock = (FX_POOL_TRACKER *)this;
    if ( !p_m_Lock )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)p_m_Lock & 0xFFF) != 0 )
    {
      CallersAddress = (FX_POOL_TRACKER *)p_m_Lock[-1].CallersAddress;
      if ( *(_BYTE *)(*((_QWORD *)&p_m_Lock[-1].CallersAddress + 1) + 264LL) )
      {
        if ( FxIsPagedPoolType(CallersAddress->PoolType) )
          FxPoolRemovePagedAllocateTracker(CallersAddress);
        else
          FxPoolRemoveNonPagedAllocateTracker(CallersAddress);
        memset(CallersAddress, 0, CallersAddress->Size + 64);
      }
      v7 = CallersAddress;
    }
    else
    {
      v7 = p_m_Lock;
    }
    ExFreePoolWithTag(v7, 0);
  }
  return this;
}
