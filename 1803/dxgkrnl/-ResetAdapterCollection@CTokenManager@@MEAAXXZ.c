/*
 * XREFs of ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C001C020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C000B41C (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C000B60C (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0010B70 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ResetAdapterCollection(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_BYTE *)this + 152) = 1;
  CAdapterCollection::InternalDiscard((CTokenManager *)((char *)this + 104));
  CPushLockCriticalSection::Release((CTokenManager *)((char *)this + 144));
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
}
