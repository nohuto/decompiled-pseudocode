/*
 * XREFs of ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x18000C450
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x18001EF90 (-GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsFixedFormatApo(struct IAudioProcessingObject *a1)
{
  __int64 (__fastcall *v1)(CAPOWrapperClient *__hidden, enum EXTENDED_APO_FLAGS *); // rax
  int ExtendedProperties; // eax
  char v3; // bl
  int v5; // [rsp+40h] [rbp+8h] BYREF
  CAPOWrapperClient *v6; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, CAPOWrapperClient **))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014,
         &v6) < 0
    || ((v1 = *(__int64 (__fastcall **)(CAPOWrapperClient *__hidden, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v6 + 24LL),
         v1 != CAPOWrapperClient::GetExtendedProperties)
      ? (ExtendedProperties = v1(v6, (enum EXTENDED_APO_FLAGS *)&v5))
      : (ExtendedProperties = CAPOWrapperClient::GetExtendedProperties(v6, (enum EXTENDED_APO_FLAGS *)&v5)),
        ExtendedProperties < 0 || (v3 = 1, (v5 & 1) == 0)) )
  {
    v3 = 0;
  }
  if ( v6 )
    (*(void (__fastcall **)(CAPOWrapperClient *))(*(_QWORD *)v6 + 16LL))(v6);
  return v3;
}
