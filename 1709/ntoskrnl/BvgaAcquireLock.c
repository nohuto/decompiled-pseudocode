/*
 * XREFs of BvgaAcquireLock @ 0x1401F43D0
 * Callers:
 *     BvgaBitBlt @ 0x1401F4420 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401F44A0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401F4510 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401F45F0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401F4720 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401F47E0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
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
