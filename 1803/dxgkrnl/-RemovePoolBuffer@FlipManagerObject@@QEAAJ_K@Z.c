/*
 * XREFs of ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C004E1F8
 * Callers:
 *     NtFlipObjectRemovePoolBuffer @ 0x1C004F730 (NtFlipObjectRemovePoolBuffer.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0051364 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C0051D90 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::RemovePoolBuffer(struct _LIST_ENTRY *this, unsigned __int64 a2)
{
  CEndpointResourceStateManager *v4; // rcx
  signed int v5; // ebx
  struct CPoolBufferResourceState *ResourceState; // rax
  CEndpointResourceStateManager *v7; // r8
  struct CPoolBufferResourceState *v8; // rbx

  v5 = CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  if ( v5 >= 0 )
  {
    ResourceState = CEndpointResourceStateManager::FindResourceState(v4, a2, this + 5);
    v8 = ResourceState;
    if ( ResourceState )
      CEndpointResourceStateManager::RemovePoolBufferState(v7, ResourceState);
    v5 = v8 == 0LL ? 0xC000000D : 0;
    CPushLock::ReleaseLock((CPushLock *)&this[2]);
  }
  return (unsigned int)v5;
}
