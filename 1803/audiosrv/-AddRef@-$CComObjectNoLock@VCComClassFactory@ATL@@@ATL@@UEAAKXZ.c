/*
 * XREFs of ?AddRef@?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x1800EDDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObjectNoLock<ATL::CComClassFactory>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 8), a2);
}
