/*
 * XREFs of HUBDSM_GettingAlternateDeviceDescriptor @ 0x1C001B770
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C0023FBC (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingAlternateDeviceDescriptor(__int64 a1)
{
  HUBDTX_GetDeviceDescriptorUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
