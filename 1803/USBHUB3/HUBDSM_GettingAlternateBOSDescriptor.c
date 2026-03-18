/*
 * XREFs of HUBDSM_GettingAlternateBOSDescriptor @ 0x1C001C7F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C0024188 (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingAlternateBOSDescriptor(__int64 a1)
{
  HUBDTX_GetBOSDescriptorUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
