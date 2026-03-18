/*
 * XREFs of ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00584A0
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00574B8 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C00354DC (-EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0036330 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

__int64 __fastcall CTokenManager::EnsureTokenQueueForPresent(struct CompositionSurfaceObject *a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  CTokenManager *v4; // rcx

  v2 = -1073741823;
  if ( g_pTokenManager )
  {
    CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
    v3 = CTokenManager::EnsureTokenQueue(g_pTokenManager, a1, 0LL);
    v4 = g_pTokenManager;
    v2 = v3;
    *((_QWORD *)g_pTokenManager + 9) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v4 + 64, 0LL);
  }
  return v2;
}
