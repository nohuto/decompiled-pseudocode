/*
 * XREFs of BgkpDisableConsole @ 0x1401F4268
 * Callers:
 *     BgkDestroy @ 0x1407D0D0C (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_1403586B8);
  ExRundownCompleted(&stru_1403586B8);
}
