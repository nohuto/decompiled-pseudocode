/*
 * XREFs of ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C004A610
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C000E618 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0010B70 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C004A448 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C004A534 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C004A5C4 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 */

void __fastcall CTokenManager::DeleteAllTokens(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this);
  CTokenManager::DeleteAllTokenQueues(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 304));
  (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 120LL))(this);
  CTokenManager::DeleteAllCompositionTokens(this);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
}
