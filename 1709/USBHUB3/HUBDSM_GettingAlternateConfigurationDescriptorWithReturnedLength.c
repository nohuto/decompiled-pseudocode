/*
 * XREFs of HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength @ 0x1C001ADB0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C00233E4 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength(__int64 a1)
{
  HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
