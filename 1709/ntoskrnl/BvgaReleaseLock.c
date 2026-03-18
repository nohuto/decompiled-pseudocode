/*
 * XREFs of BvgaReleaseLock @ 0x1401F4650
 * Callers:
 *     BvgaBitBlt @ 0x1401F4420 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401F44A0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401F4510 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401F45F0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401F4720 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401F47E0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 */

void BvgaReleaseLock()
{
  unsigned __int8 v0; // bl

  v0 = BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( v0 <= 2u )
    __writecr8(v0);
}
