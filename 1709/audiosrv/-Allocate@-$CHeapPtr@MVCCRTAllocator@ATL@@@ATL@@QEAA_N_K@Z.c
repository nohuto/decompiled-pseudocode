/*
 * XREFs of ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18002D9E4
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D140 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x18006B410 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x18006B510 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x180071630 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x180072CE8 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x18002DA28 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

bool __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(_QWORD *a1, __int64 a2)
{
  void *v3; // rax
  size_t Size; // [rsp+40h] [rbp+18h] BYREF

  Size = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&Size, a2, 4LL) < 0 )
    return 0;
  v3 = malloc(Size);
  *a1 = v3;
  return v3 != 0LL;
}
