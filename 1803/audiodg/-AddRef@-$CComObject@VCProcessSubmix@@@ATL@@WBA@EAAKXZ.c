/*
 * XREFs of ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14001E2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CProcessSubmix>::AddRef(__int64 a1, volatile int *a2)
{
  return ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(a1 - 16, a2);
}
