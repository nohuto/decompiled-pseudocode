/*
 * XREFs of ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0052520
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00511B8 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0051240 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipPresentUpdate::Pending(CFlipPresentUpdate *this)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 4)) >= 0 )
  {
    CEndpointResourceStateManager::CommitPendingUpdates((CEndpointResourceStateManager *)(v1 + 10));
    ++v1[24];
    if ( !*((_BYTE *)this + 72) )
      CEndpointResourceStateManager::ClearAllContentBindings((CEndpointResourceStateManager *)(v1 + 10));
    CPushLock::ReleaseLock((CPushLock *)(v1 + 4));
  }
}
