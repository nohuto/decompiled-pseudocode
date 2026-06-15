/*
 * XREFs of ?GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z @ 0x18001ED50
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B350 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetClsids(CCompositeSystemEffect *this, unsigned int *a2, struct _GUID **a3)
{
  unsigned __int64 v6; // r9
  struct _GUID *v7; // rbx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  *a3 = 0LL;
  if ( *((int *)this + 16) <= 0 )
    return 0LL;
  v6 = *((int *)this + 16);
  v7 = 0LL;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_5;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x10 )
    goto LABEL_9;
  v6 *= 16LL;
  if ( v6 <= 0x7FFFFFFF )
LABEL_5:
    v7 = (struct _GUID *)CoTaskMemAlloc((unsigned int)v6);
  if ( v7 )
  {
    memcpy_0(v7, *((const void **)this + 7), 16LL * *((int *)this + 16));
    *a3 = v7;
    *a2 = *((_DWORD *)this + 16);
    CoTaskMemFree(0LL);
    return 0LL;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D2,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v9);
  CoTaskMemFree(v7);
  return 2147942414LL;
}
