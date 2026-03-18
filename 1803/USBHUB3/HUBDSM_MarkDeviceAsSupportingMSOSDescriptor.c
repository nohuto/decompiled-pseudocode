/*
 * XREFs of HUBDSM_MarkDeviceAsSupportingMSOSDescriptor @ 0x1C001BF40
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry @ 0x1C006E080 (HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry.c)
 */

__int64 __fastcall HUBDSM_MarkDeviceAsSupportingMSOSDescriptor(__int64 a1)
{
  HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
