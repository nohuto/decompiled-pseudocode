/*
 * XREFs of ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000DFF0
 * Callers:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000E010 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000E0D0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseStreamGroupProxy::IsPeriodicitySensitive(CBaseStreamGroupProxy *this)
{
  return *((_DWORD *)this + 34) != 0;
}
