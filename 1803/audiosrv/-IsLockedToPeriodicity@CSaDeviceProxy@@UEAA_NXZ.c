/*
 * XREFs of ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x180046400
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsLockedToPeriodicity(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 21) != 0;
}
