/*
 * XREFs of ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800B8DBC
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800BA3F0 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180002BA0 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ConnectorSupportsFormat(
        struct CEndpointCharacteristics *a1,
        __int64 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  int v5; // edi
  int KSFormatFromWFXFormat; // r14d
  __int64 v7; // rbx
  __int64 v8; // rcx
  void *v9; // rcx
  const struct _tagpropertykey *v10; // rdx
  LPVOID v11; // rdi
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  LPVOID ppv; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-78h] BYREF
  int v21; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+94h] [rbp-6Ch] BYREF
  PROPVARIANT v23; // [rsp+98h] [rbp-68h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  PROPVARIANT pvar; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-40h]
  struct _GUID v29; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 v32; // [rsp+F0h] [rbp-10h]
  _DWORD v33[6]; // [rsp+F8h] [rbp-8h] BYREF

  v30 = -2LL;
  v5 = a2;
  pvar = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( (((_DWORD)a2 - 1) & 0xFFFFFFFD) == 0 )
  {
    pv = 0LL;
    v13 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    ppv = 0LL;
    v16 = 0LL;
    v15 = 0LL;
    v14 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v21 = 0;
    v7 = *((_QWORD *)a1 + 2);
    *(_QWORD *)&v29.Data1 = v7;
    (*(void (__fastcall **)(__int64, __int64, struct tWAVEFORMATEX *, struct _GUID *))(*(_QWORD *)v7 + 8LL))(
      v7,
      a2,
      a3,
      a4);
    KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
    if ( KSFormatFromWFXFormat < 0 )
    {
      CoTaskMemFree(pv);
      if ( !v7 )
        goto LABEL_72;
LABEL_71:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      goto LABEL_72;
    }
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(
                              v7,
                              0LL,
                              &v14);
    if ( KSFormatFromWFXFormat < 0 )
      goto LABEL_7;
    v33[0] = 590439624;
    v33[1] = 1283267372;
    v33[2] = 1907779772;
    v33[3] = 1730509416;
    v33[4] = 1;
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
                              v14,
                              v33,
                              &pvar);
    if ( KSFormatFromWFXFormat < 0 )
      goto LABEL_7;
    v10 = &PKEY_Endpoint_KeywordDetector_ConnectorId;
    if ( v5 != 3 )
      v10 = &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId;
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
                              v14,
                              v10,
                              &v23);
    if ( KSFormatFromWFXFormat < 0 )
      goto LABEL_7;
    KSFormatFromWFXFormat = CoCreateInstance(
                              &CLSID_MMDeviceEnumerator,
                              0LL,
                              0x17u,
                              &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                              &ppv);
    if ( KSFormatFromWFXFormat < 0 )
      goto LABEL_7;
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(
                              ppv,
                              v27,
                              &v16);
    if ( KSFormatFromWFXFormat < 0 )
      goto LABEL_7;
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v16 + 24LL))(
                              v16,
                              &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                              23LL);
    if ( KSFormatFromWFXFormat < 0 )
      goto LABEL_7;
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 56LL))(
                              v18,
                              (unsigned int)v24,
                              &v13);
    if ( KSFormatFromWFXFormat < 0 )
      goto LABEL_7;
    v8 = v13;
    if ( !v13 )
    {
      KSFormatFromWFXFormat = -2147023728;
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v8 = v13;
      }
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v8 = v13;
      }
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v8 = v13;
      }
      if ( ppv )
      {
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
        v8 = v13;
      }
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v8 = v13;
      }
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v8 = v13;
      }
LABEL_20:
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = pv;
LABEL_70:
      CoTaskMemFree(v9);
      goto LABEL_71;
    }
    if ( v5 == 1 )
    {
      KSFormatFromWFXFormat = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v13)(
                                v13,
                                &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
                                &v19);
      if ( KSFormatFromWFXFormat < 0 )
        goto LABEL_7;
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 24LL))(v19, &v22);
      if ( KSFormatFromWFXFormat < 0 )
        goto LABEL_7;
      if ( v22 != 3 )
      {
        KSFormatFromWFXFormat = -2147418113;
LABEL_7:
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v8 = v13;
        goto LABEL_20;
      }
      v8 = v13;
    }
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 104LL))(
                              v8,
                              1LL,
                              &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                              &v15);
    if ( KSFormatFromWFXFormat >= 0 )
    {
      v11 = pv;
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD, int *))(*(_QWORD *)v15 + 24LL))(
                                v15,
                                pv,
                                *(unsigned int *)pv,
                                &v21);
      if ( KSFormatFromWFXFormat >= 0 && !v21 )
        KSFormatFromWFXFormat = -2004287480;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v9 = v11;
      goto LABEL_70;
    }
    goto LABEL_7;
  }
  v29 = *a4;
  KSFormatFromWFXFormat = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                            (__int64)a1,
                            a2,
                            &a3->wFormatTag,
                            &v29,
                            0,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
LABEL_72:
  PropVariantClear(&pvar);
  PropVariantClear(&v23);
  return (unsigned int)KSFormatFromWFXFormat;
}
