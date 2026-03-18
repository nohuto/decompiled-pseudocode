/*
 * XREFs of BvgaAcquireLock @ 0x1401EECD0
 * Callers:
 *     BvgaBitBlt @ 0x1401EED20 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401EEDA0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401EEE10 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401EEEF0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401EF010 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401EF0D0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 */

void BvgaAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( BootDriverLock )
      _mm_pause();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  KxAcquireSpinLock(&BootDriverLock);
  BvgaOldIrql = CurrentIrql;
}
