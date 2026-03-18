/*
 * XREFs of BvgaReleaseLock @ 0x140231B80
 * Callers:
 *     BvgaBitBlt @ 0x140231950 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1402319D0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x140231A40 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140231B20 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x140231C50 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x140231D10 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 */

void BvgaReleaseLock()
{
  unsigned __int8 v0; // bl

  v0 = BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( v0 <= 2u )
    __writecr8(v0);
}
