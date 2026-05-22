/*
 * XREFs of ?IsSystemInputHostStandalone@@YAHXZ @ 0x180003F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsSystemInputHostStandalone(void)
{
  InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL);
  return ((1LL << gdwDeviceFamily) & 0x224A) == 0;
}
