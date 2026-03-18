/*
 * XREFs of ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0036330
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C0035B50 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     ?SetAdapterInfo@CTokenManager@@IEAAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0035E50 (-SetAdapterInfo@CTokenManager@@IEAAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0035EAC (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0035F20 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     NtDCompositionRetireFrame @ 0x1C0037500 (NtDCompositionRetireFrame.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00584A0 (-EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0151F30 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     ?AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C0153684 (-AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0153890 (-ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z @ 0x1C01538F8 (-GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z.c)
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C01539AC (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::AcquireTokenManagerLock(CTokenManager *this)
{
  ExAcquirePushLockExclusiveEx((char *)this + 64, 0LL);
  *((_QWORD *)this + 9) = KeGetCurrentThread();
}
