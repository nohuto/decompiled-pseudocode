/*
 * XREFs of McTemplateU0jjt @ 0x140048D58
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x14000E560 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x140035E94 (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0jjt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  int *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]

  v7 = a3;
  v9 = a4;
  v5 = 0;
  v8 = 16LL;
  v10 = 16LL;
  v12 = 4LL;
  v11 = &v5;
  return McGenEventWriteUM(0LL, &EVT_SYSTEM_EFFECT_APO_INITIALIZED, 4LL, (__int64)v6);
}
