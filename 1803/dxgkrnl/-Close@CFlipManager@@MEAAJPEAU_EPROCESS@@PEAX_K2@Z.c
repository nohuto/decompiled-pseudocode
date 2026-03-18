/*
 * XREFs of ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C004FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0050A64 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0050B10 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 */

__int64 __fastcall CFlipManager::Close(CFlipManager *this, struct _EPROCESS *a2, void *a3, __int64 a4)
{
  if ( a4 == 1 && (a2 == *((struct _EPROCESS **)this + 6) || a2 == *((struct _EPROCESS **)this + 5)) )
  {
    CPushLock::AcquireLockExclusive((CFlipManager *)((char *)this + 8));
    if ( a2 == *((struct _EPROCESS **)this + 6) )
      CFlipManager::ProcessConsumerDisconnect(this);
    if ( a2 == *((struct _EPROCESS **)this + 5) )
      CFlipManager::ProcessProducerDisconnect(this);
    CPushLock::ReleaseLock((CFlipManager *)((char *)this + 8));
  }
  return 0LL;
}
