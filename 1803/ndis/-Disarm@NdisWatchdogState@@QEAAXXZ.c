/*
 * XREFs of ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00B2CD8
 * Callers:
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00B2C94 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FC3F4 (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 * Callees:
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001A7D4 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 */

void __fastcall NdisWatchdogState::Disarm(struct _KEVENT *this)
{
  struct _KEVENT *v1; // rdi

  v1 = this + 7;
  if ( !KeReadStateEvent(this + 7) && !NdisWatchdogState::CancelTimer((NdisWatchdogState *)this) )
    KeWaitForSingleObject(v1, Executive, 0, 0, 0LL);
}
