/*
 * XREFs of ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C0050740
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C00503E0 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C0050488 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C00504FC (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00512F4 (-DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::MarkInvalid(CFlipManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  CFlipPropertySetBase *v4; // rax

  if ( (**(unsigned __int8 (__fastcall ***)(CFlipManager *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CFlipManager *)((char *)this + 8));
    v2 = (void *)*((_QWORD *)this + 25);
    if ( v2 )
    {
      ObfDereferenceObject(v2);
      *((_QWORD *)this + 25) = 0LL;
    }
    v3 = (void *)*((_QWORD *)this + 26);
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      *((_QWORD *)this + 26) = 0LL;
    }
    CFlipManager::FreeCurrentUpdates(this);
    CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 56));
    CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 88));
    CFlipManager::FreeQueuedUpdates(this);
    while ( *((CFlipManager **)this + 19) != (CFlipManager *)((char *)this + 152) )
    {
      v4 = (CFlipPropertySetBase *)CFlipObjectQueue<CFlipConsumerMessage>::Dequeue((_QWORD *)this + 19);
      CFlipPropertySetBase::Release(v4);
    }
    *((_BYTE *)this + 32) &= ~1u;
    CPushLock::ReleaseLock((CFlipManager *)((char *)this + 8));
  }
}
