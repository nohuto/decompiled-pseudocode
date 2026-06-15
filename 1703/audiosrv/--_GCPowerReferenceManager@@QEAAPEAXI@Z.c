/*
 * XREFs of ??_GCPowerReferenceManager@@QEAAPEAXI@Z @ 0x1800805FC
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180035B70 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x180048648 (--R-$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180082200 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180026DA4 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x18007BF50 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 *     ??1CPdcActivationClient@@QEAA@XZ @ 0x1800ADED4 (--1CPdcActivationClient@@QEAA@XZ.c)
 */

PTP_TIMER *__fastcall CPowerReferenceManager::`scalar deleting destructor'(PTP_TIMER *this)
{
  if ( this[26] )
  {
    CSebNotifier::CancelDeferredSebReferenceRelease((CSebNotifier *)(this + 14));
    CloseThreadpoolTimer(this[26]);
    this[26] = 0LL;
  }
  CSebNotifier::PublishSebEvent((CSebNotifier *)(this + 14), 0);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 15));
  CPdcActivationClient::~CPdcActivationClient((CPdcActivationClient *)this);
  operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
