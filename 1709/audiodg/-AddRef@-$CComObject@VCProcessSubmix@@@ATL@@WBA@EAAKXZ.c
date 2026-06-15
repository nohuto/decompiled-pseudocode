/*
 * XREFs of ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14001F0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CProcessSubmix>::AddRef(__int64 a1)
{
  return ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(a1 - 16);
}
