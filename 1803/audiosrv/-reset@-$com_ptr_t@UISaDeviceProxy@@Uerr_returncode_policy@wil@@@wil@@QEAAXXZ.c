/*
 * XREFs of ?reset@?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800981C4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x1800C06F0 (-AbortStartStream@CVADServer@@UEAAJXZ.c)
 *     ?PreStartStream@CVADServer@@UEAAJW4VadStreamStateChangeReason@@@Z @ 0x1800C2260 (-PreStartStream@CVADServer@@UEAAJW4VadStreamStateChangeReason@@@Z.c)
 *     AudioServerGetEndpointVpoContext @ 0x1800C41C0 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetStreamVpoContext @ 0x1800C4AB0 (AudioServerGetStreamVpoContext.c)
 *     ?GetVpoContext@CProcessSubmixProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x1800C9CF0 (-GetVpoContext@CProcessSubmixProxy@@UEAAJPEAPEAUIVpoContext@@@Z.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800D2530 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
