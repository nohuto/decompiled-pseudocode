/*
 * XREFs of ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x1C004A220
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C000E618 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0010B70 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ClearAnalogTokenQueue(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 304));
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
}
