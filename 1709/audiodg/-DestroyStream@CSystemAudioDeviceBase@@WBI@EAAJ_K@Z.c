/*
 * XREFs of ?DestroyStream@CSystemAudioDeviceBase@@WBI@EAAJ_K@Z @ 0x14001E930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::DestroyStream(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  return CSystemAudioDeviceBase::GetSpatialUtilization((CSystemAudioDeviceBase *)(a1 - 24), a2, a3, a4);
}
