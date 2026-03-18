/*
 * XREFs of ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0029D30
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0029374 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0029510 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C00295A8 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00295EC (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0029F48 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::DeleteAllTokensInternal(CTokenManager *this)
{
  CTokenManager *v1; // rbx

  v1 = g_pTokenManager;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  CTokenManager::DeleteAllLegacyTokenBuffers(v1);
  CTokenManager::DeleteAllTokenQueues(v1);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)v1 + 240));
  CTokenManager::DeleteAllCompositionTokens(v1);
  *((_QWORD *)v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
}
