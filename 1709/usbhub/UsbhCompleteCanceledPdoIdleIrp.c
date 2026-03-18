/*
 * XREFs of UsbhCompleteCanceledPdoIdleIrp @ 0x1C00568B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhIdleIrp_Event @ 0x1C0056DEC (UsbhIdleIrp_Event.c)
 */

void __fastcall UsbhCompleteCanceledPdoIdleIrp(PIO_CSQ Csq, PIRP Irp)
{
  UsbhIdleIrp_Event(Csq[-5].CsqReleaseLock, Csq[-10].CsqPeekNextIrp, Irp, 6LL, 0);
}
