/*
 * XREFs of ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x14001D870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CStreamGroup>::AddRef(__int64 a1, volatile int *a2)
{
  return ATL::CComObject<CStreamGroup>::AddRef(a1 - 8, a2);
}
