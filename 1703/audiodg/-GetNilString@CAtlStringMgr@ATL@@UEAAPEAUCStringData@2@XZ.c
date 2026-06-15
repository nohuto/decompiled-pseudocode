/*
 * XREFs of ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x14001BB70
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005840 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 * Callees:
 *     <none>
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::GetNilString(ATL::CAtlStringMgr *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 8);
  return (ATL::CAtlStringMgr *)((char *)this + 16);
}
