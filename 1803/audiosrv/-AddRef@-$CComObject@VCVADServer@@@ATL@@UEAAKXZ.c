/*
 * XREFs of ?AddRef@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x180016F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CVADServer>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 8), a2);
}
