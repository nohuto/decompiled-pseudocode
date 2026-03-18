/*
 * XREFs of ?RemoveContent@FlipManagerObject@@QEAAJ_K@Z @ 0x1C004E17C
 * Callers:
 *     NtFlipObjectRemoveContent @ 0x1C004F640 (NtFlipObjectRemoveContent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0051364 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 */

__int64 __fastcall FlipManagerObject::RemoveContent(struct _LIST_ENTRY *this, unsigned __int64 a2)
{
  CEndpointResourceStateManager *v4; // rcx
  int v5; // ebx
  struct CFlipResourceState *ResourceState; // rax

  v5 = CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  if ( v5 >= 0 )
  {
    v5 = 0;
    ResourceState = CEndpointResourceStateManager::FindResourceState(v4, a2, this + 6);
    if ( ResourceState )
      (*(void (__fastcall **)(struct CFlipResourceState *))(*(_QWORD *)ResourceState + 24LL))(ResourceState);
    else
      v5 = -1073741811;
    CPushLock::ReleaseLock((CPushLock *)&this[2]);
  }
  return (unsigned int)v5;
}
