/*
 * XREFs of BvgaReleaseLock @ 0x1401EEF50
 * Callers:
 *     BvgaBitBlt @ 0x1401EED20 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401EEDA0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401EEE10 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401EEEF0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401EF010 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401EF0D0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 */

void BvgaReleaseLock()
{
  unsigned __int8 v0; // bl

  v0 = BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( v0 <= 2u )
    __writecr8(v0);
}
