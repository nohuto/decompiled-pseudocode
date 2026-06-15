/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x14001EBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceExclusive>::Release(__int64 a1)
{
  return ATL::CComContainedObject<CProcessSubmix>::Release(a1 - 16);
}
