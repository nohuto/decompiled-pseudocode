/*
 * XREFs of ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000E930
 * Callers:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18000E310 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180029750 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180029A10 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CDeviceGraphObjectsStore::Lock(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *a2 = v2;
  return a2;
}
