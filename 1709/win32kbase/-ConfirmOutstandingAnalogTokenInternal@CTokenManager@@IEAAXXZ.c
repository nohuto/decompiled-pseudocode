/*
 * XREFs of ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0153890
 * Callers:
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0153380 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0035568 (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0036330 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::ConfirmOutstandingAnalogTokenInternal(CTokenManager *this)
{
  CTokenManager *v1; // rbx
  __int64 v2; // rcx

  v1 = g_pTokenManager;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  v2 = *((_QWORD *)v1 + 28);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 28) + 40LL))(*((_QWORD *)v1 + 28));
    CTokenManager::DeleteOutstandingAnalogTokenInternal(v1);
  }
  *((_QWORD *)v1 + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 64, 0LL);
}
