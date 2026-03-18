/*
 * XREFs of BgkpDisableConsole @ 0x1401EEB68
 * Callers:
 *     BgkDestroy @ 0x140758A14 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140340058);
  ExRundownCompleted(&stru_140340058);
}
