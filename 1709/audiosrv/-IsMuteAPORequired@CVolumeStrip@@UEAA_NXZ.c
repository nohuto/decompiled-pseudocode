/*
 * XREFs of ?IsMuteAPORequired@CVolumeStrip@@UEAA_NXZ @ 0x180009530
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::IsMuteAPORequired(CVolumeStrip *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31));
}
