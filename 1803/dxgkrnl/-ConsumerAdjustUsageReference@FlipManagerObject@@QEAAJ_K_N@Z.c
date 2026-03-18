/*
 * XREFs of ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C004DD90
 * Callers:
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1C004E730 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     ?Complete@CFlipWaitedConsumerReturn@@UEAAXXZ @ 0x1C0052680 (-Complete@CFlipWaitedConsumerReturn@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0051364 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0051F50 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C00521B4 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerAdjustUsageReference(
        struct _LIST_ENTRY *this,
        unsigned __int64 a2,
        char a3)
{
  CEndpointResourceStateManager *v6; // rcx
  signed int v7; // ebx
  struct CFlipResourceState *ResourceState; // rax
  CPoolBufferResource *v9; // rcx

  v7 = CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  if ( v7 >= 0 )
  {
    ResourceState = CEndpointResourceStateManager::FindResourceState(v6, a2, this + 7);
    v7 = ResourceState == 0LL ? 0xC000000D : 0;
    if ( ResourceState )
    {
      v9 = (CPoolBufferResource *)*((_QWORD *)ResourceState + 3);
      if ( a3 )
        CPoolBufferResource::AddUsageReference(v9);
      else
        CPoolBufferResource::RemoveUsageReference(v9);
    }
    CPushLock::ReleaseLock((CPushLock *)&this[2]);
  }
  return (unsigned int)v7;
}
