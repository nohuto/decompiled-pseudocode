/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x1400155B0
 * Callers:
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x1400144C0 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ @ 0x14001D9F0 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ @ 0x14001DA00 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14001E2B0 (-AddRef@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 296), a2);
}
