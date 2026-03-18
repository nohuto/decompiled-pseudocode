/*
 * XREFs of BgkpDisableConsole @ 0x140231798
 * Callers:
 *     BgkDestroy @ 0x14083DC74 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_14039BCA8);
  ExRundownCompleted(&stru_14039BCA8);
}
