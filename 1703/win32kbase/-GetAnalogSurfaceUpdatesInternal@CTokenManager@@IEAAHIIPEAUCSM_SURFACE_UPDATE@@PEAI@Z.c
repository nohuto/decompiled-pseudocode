/*
 * XREFs of ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C015250C
 * Callers:
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C0151F20 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C00294E8 (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0029F48 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C0152808 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 */

_BOOL8 __fastcall CTokenManager::GetAnalogSurfaceUpdatesInternal(
        CTokenManager *this,
        unsigned int a2,
        unsigned int a3,
        struct CSM_SURFACE_UPDATE *a4,
        unsigned int *a5)
{
  CTokenManager *v5; // rbx
  BOOL v9; // edi
  CTokenQueue *v10; // rcx
  bool Updates; // al
  struct CToken *v12; // rsi
  void *v13; // rcx
  struct CToken *v15; // [rsp+40h] [rbp-28h] BYREF
  CTokenManager *v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = this;
  v5 = g_pTokenManager;
  LOBYTE(v16) = 0;
  v9 = 0;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  v10 = (CTokenManager *)((char *)v5 + 240);
  if ( *(CTokenQueue **)v10 == v10 )
    goto LABEL_5;
  v15 = 0LL;
  Updates = CTokenQueue::ReleaseAnalogTokensAndGetUpdates(v10, a2, a4, a3, (bool *)&v16, a5, &v15);
  v12 = v15;
  v9 = Updates;
  if ( v15 )
  {
    CTokenManager::DeleteOutstandingAnalogTokenInternal(v5);
    *((_QWORD *)v5 + 27) = v12;
  }
  if ( !(_BYTE)v16 )
  {
LABEL_5:
    v13 = (void *)*((_QWORD *)v5 + 6);
    if ( v13 )
      ZwClearEvent(v13);
  }
  *((_QWORD *)v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v5 + 56, 0LL);
  return v9;
}
