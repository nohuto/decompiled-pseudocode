/*
 * XREFs of ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0024D00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

FxRegKey *__fastcall FxRegKey::`scalar deleting destructor'(FxRegKey *this, char a2, unsigned int a3)
{
  void *m_Key; // rcx
  MxPagedLock *m_Lock; // rcx
  FxRegKey *v7; // rax
  FX_POOL_TRACKER *v8; // rdi
  FX_POOL_TRACKER *v9; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
  m_Key = this->m_Key;
  if ( m_Key )
  {
    ZwClose(m_Key);
    this->m_Key = 0LL;
  }
  m_Lock = this->m_Lock;
  this->__vftable = (FxRegKey_vtbl *)FxPagedObject::`vftable';
  if ( m_Lock )
  {
    FxPoolFree(m_Lock);
    this->m_Lock = 0LL;
  }
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      v7 = (FxRegKey *)((char *)this - 48);
    else
      v7 = this;
    if ( !v7 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v7 & 0xFFF) != 0 )
    {
      v8 = (FX_POOL_TRACKER *)v7[-1].m_Key;
      if ( v7[-1].m_Globals->FxPoolTrackingOn )
      {
        if ( FxIsPagedPoolType(v8->PoolType) )
          FxPoolRemovePagedAllocateTracker(v8);
        else
          FxPoolRemoveNonPagedAllocateTracker(v8);
        memset(v8, 0, v8->Size + 64);
      }
      v9 = v8;
    }
    else
    {
      v9 = (FX_POOL_TRACKER *)v7;
    }
    ExFreePoolWithTag(v9, 0);
  }
  return this;
}
