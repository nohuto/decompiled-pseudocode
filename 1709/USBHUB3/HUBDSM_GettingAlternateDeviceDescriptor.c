/*
 * XREFs of HUBDSM_GettingAlternateDeviceDescriptor @ 0x1C001ADD0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C00234BC (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingAlternateDeviceDescriptor(__int64 a1)
{
  HUBDTX_GetDeviceDescriptorUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
