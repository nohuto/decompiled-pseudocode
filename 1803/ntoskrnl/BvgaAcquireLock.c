/*
 * XREFs of BvgaAcquireLock @ 0x140231900
 * Callers:
 *     BvgaBitBlt @ 0x140231950 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1402319D0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x140231A40 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140231B20 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x140231C50 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x140231D10 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
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
