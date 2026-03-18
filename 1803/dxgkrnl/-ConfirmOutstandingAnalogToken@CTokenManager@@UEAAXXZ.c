/*
 * XREFs of ?ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C004A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0010B70 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::ConfirmOutstandingAnalogToken(CTokenManager *this)
{
  __int64 v2; // rcx

  CTokenManager::AcquireTokenManagerLock(this);
  v2 = *((_QWORD *)this + 35);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 40LL))(*((_QWORD *)this + 35));
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 120LL))(this);
  }
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
}
