/*
 * XREFs of ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140036954
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000B350 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BC70 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140011CE0 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140012AD0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400145A0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?NewNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x14003771C (-NewNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x140037844 (-NewNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PE.c)
 *     ?NewNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVirtualProtectedOutput@@PEAV312@1@Z @ 0x1400405F4 (-NewNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@@.c)
 *     ?NewNode@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDisplayNode@@PEAV312@1@Z @ 0x1400434F0 (-NewNode@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?NewNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x140043598 (-NewNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@AT.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x1400366C0 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlPlex::Create(
        struct ATL::CAtlPlex **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  struct ATL::CAtlPlex *result; // rax
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&v5, a2, a3) < 0 )
    return 0LL;
  if ( (unsigned __int64)~v5 < 8 )
    return 0LL;
  result = (struct ATL::CAtlPlex *)malloc(v5 + 8);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = *a1;
  *a1 = result;
  return result;
}
