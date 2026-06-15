/*
 * XREFs of ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x1400059FC
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000C710 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x14000DBD4 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x1400415C0 (-GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x140041920 (-GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z.c)
 *     ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x140041B10 (-GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z.c)
 *     ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140041D10 (-GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x140042070 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    ATL::AtlThrowImpl(-2147467259);
  return v1 + 16;
}
