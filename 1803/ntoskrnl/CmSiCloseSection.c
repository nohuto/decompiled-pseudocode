/*
 * XREFs of CmSiCloseSection @ 0x1400CC154
 * Callers:
 *     HvpViewMapCleanup @ 0x14057A92C (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x140606D48 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x140608544 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140608704 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
