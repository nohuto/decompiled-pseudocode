/*
 * XREFs of BiZwClose @ 0x140134ADC
 * Callers:
 *     BiDeleteRegistryValue @ 0x1405AE26C (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x1405AF19C (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x1405AF51C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 */

NTSTATUS __fastcall BiZwClose(void *a1)
{
  return ZwClose(a1);
}
