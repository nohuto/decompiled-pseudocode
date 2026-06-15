/*
 * XREFs of ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18000D750
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002ED40 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 *     ?OnEndpointLockedForExclusiveUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800944B0 (-OnEndpointLockedForExclusiveUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedSaDevice(CBaseStreamGroupProxy *this, struct ISaDeviceProxy **a2)
{
  __int64 v4; // rcx

  *a2 = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    v4 = *((_QWORD *)this + 11);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = (struct ISaDeviceProxy *)*((_QWORD *)this + 11);
  }
  return 0LL;
}
