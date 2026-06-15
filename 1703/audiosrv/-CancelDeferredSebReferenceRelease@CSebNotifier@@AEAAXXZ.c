/*
 * XREFs of ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x18007BF50
 * Callers:
 *     ??_GCPowerReferenceManager@@QEAAPEAXI@Z @ 0x1800805FC (--_GCPowerReferenceManager@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSebNotifier::CancelDeferredSebReferenceRelease(CSebNotifier *this)
{
  struct _TP_TIMER *v2; // rcx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 12), 1);
  }
}
