/*
 * XREFs of McTemplateU0jjt @ 0x1800DD4B4
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800DD214 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006487C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0jjt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[8]; // [rsp+20h] [rbp-58h] BYREF

  v6[2] = a3;
  v6[4] = a4;
  v6[7] = 4LL;
  v6[3] = 16LL;
  v6[5] = 16LL;
  v6[6] = &a5;
  return McGenEventWriteUM(AUDIO_EVENT_PROVIDER_Context, &EVT_SYSTEM_EFFECT_APO_INITIALIZED, 4LL, (__int64)v6);
}
