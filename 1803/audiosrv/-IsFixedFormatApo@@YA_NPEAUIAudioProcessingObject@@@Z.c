/*
 * XREFs of ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x1800CA014
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180039F30 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsFixedFormatApo(struct IAudioProcessingObject *a1)
{
  char v1; // bl
  int v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1 )
    return 0;
  v3 = 0;
  v4 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014,
         &v4) < 0
    || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 24LL))(v4, &v3) < 0
    || (v1 = 1, (v3 & 1) == 0) )
  {
    v1 = 0;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v1;
}
