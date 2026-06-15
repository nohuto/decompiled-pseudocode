/*
 * XREFs of ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BE0F8
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BDBCC (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180021268 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x1800E0B14 (-IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayEleme.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall EffectPolicy::IsValidMicArrayForAEC(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct IPropertyStore *a3,
        struct _AEC_POLICY_RESULTS *a4)
{
  char v7; // si
  struct KSAUDIO_MIC_ARRAY_GEOMETRY *v8; // r14
  int ProposedConnectorFormatForProcessingMode; // eax
  bool v10; // r9
  void *v11; // rbx
  const unsigned __int16 *v12; // rdx
  int valid; // edi
  unsigned int *v15; // [rsp+30h] [rbp-31h]
  struct MicArrayElementErrorDetails **v16; // [rsp+38h] [rbp-29h]
  int v17; // [rsp+48h] [rbp-19h] BYREF
  LPVOID pv[3]; // [rsp+50h] [rbp-11h] BYREF
  struct _GUID v19; // [rsp+68h] [rbp+7h] BYREF
  PROPVARIANT pvar; // [rsp+78h] [rbp+17h] BYREF
  __int64 v21; // [rsp+80h] [rbp+1Fh]
  struct KSAUDIO_MIC_ARRAY_GEOMETRY *v22; // [rsp+88h] [rbp+27h]
  unsigned __int16 v23; // [rsp+D8h] [rbp+77h] BYREF

  pv[1] = (LPVOID)-2LL;
  pvar = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v7 = 0;
  if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))a3->lpVtbl->GetValue)(
         a3,
         &PKEY_Devices_MicrophoneArray_Geometry,
         &pvar) < 0 )
    return 0;
  if ( (_WORD)pvar != 4113 )
    return 0;
  v8 = v22;
  if ( !v22 || (unsigned int)v21 < 0x1E )
    return 0;
  pv[2] = 0LL;
  *((_DWORD *)a4 + 7) = 0;
  v17 = 8;
  pv[0] = 0LL;
  v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               a2,
                                               &v19,
                                               (struct tWAVEFORMATEX **)pv);
  v11 = pv[0];
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    v23 = *((_WORD *)pv[0] + 1);
    *((_DWORD *)a4 + 6) = v23;
    v12 = &v23;
  }
  valid = IsValidMicArrayGeometry(v8, v12, &v17, v10, (unsigned int *)a4 + 7, v15, v16);
  *((_DWORD *)a4 + 8) = v8->usNumberOfMicrophones;
  PropVariantClear(&pvar);
  if ( valid >= 0 && !*((_DWORD *)a4 + 7) )
    v7 = 1;
  CoTaskMemFree(v11);
  CoTaskMemFree(0LL);
  return v7;
}
