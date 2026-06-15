/*
 * XREFs of ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000E900
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a1 + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  *a2 = v2;
  return a2;
}
