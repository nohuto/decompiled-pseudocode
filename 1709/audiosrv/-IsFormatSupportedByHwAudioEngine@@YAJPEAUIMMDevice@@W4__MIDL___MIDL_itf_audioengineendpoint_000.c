/*
 * XREFs of ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x18008BC44
 * Callers:
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@KW4_AUDCLNT_SHAREMODE@@HHPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x180030D64 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMD.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180082BE4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180080EF8 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall IsFormatSupportedByHwAudioEngine(
        struct IMMDevice *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        const struct tWAVEFORMATEX *a3,
        struct tWAVEFORMATEX **a4)
{
  void *v7; // rdi
  unsigned int v8; // r14d
  int KSFormatFromWFXFormat; // ebx
  unsigned int v10; // esi
  _BYTE *v11; // rdx
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v25[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v26[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[112]; // [rsp+C0h] [rbp-40h] BYREF

  v25[1] = -2LL;
  v25[0] = 0LL;
  v15 = 0LL;
  v13 = 0;
  v7 = 0LL;
  Src = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v14 = 0LL;
  v21 = 0LL;
  v26[0] = 590439624;
  v26[1] = 1283267372;
  v26[2] = 1907779772;
  v8 = 104;
  v26[3] = 1730509416;
  v26[4] = 1;
  memset(v27, 0, 0x68uLL);
  pvar = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( a3 && a1 )
  {
    KSFormatFromWFXFormat = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, _QWORD *))a1->lpVtbl->Activate)(
                              a1,
                              &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
                              23LL,
                              0LL,
                              v25);
    if ( KSFormatFromWFXFormat >= 0 )
    {
      KSFormatFromWFXFormat = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                                a1,
                                0LL,
                                &v15);
      if ( KSFormatFromWFXFormat >= 0 )
      {
        KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                                  v15,
                                  &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
                                  &pvar);
        if ( KSFormatFromWFXFormat >= 0 )
        {
          if ( (_WORD)pvar != 19 )
          {
LABEL_7:
            KSFormatFromWFXFormat = -2147418113;
            goto LABEL_26;
          }
          v10 = v17;
          pvar = 0LL;
          v17 = 0LL;
          v18 = 0LL;
          KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                                    v15,
                                    v26,
                                    &pvar);
          if ( KSFormatFromWFXFormat >= 0 )
          {
            if ( (_WORD)pvar != 31 )
              goto LABEL_10;
            KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                          + 40LL))(
                                      *(_QWORD *)&g_DeviceEnumerator,
                                      v17,
                                      &v24);
            if ( KSFormatFromWFXFormat >= 0 )
            {
              KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v24 + 24LL))(
                                        v24,
                                        &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                                        1LL);
              if ( KSFormatFromWFXFormat >= 0 )
              {
                KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 56LL))(
                                          v23,
                                          v10,
                                          &v14);
                if ( KSFormatFromWFXFormat >= 0 )
                {
                  KSFormatFromWFXFormat = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
                                            v14,
                                            &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
                                            &v22);
                  if ( KSFormatFromWFXFormat >= 0 )
                  {
                    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 24LL))(
                                              v22,
                                              &v19);
                    if ( KSFormatFromWFXFormat >= 0 )
                    {
                      if ( v19 != 3 )
                        goto LABEL_7;
                      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v14 + 104LL))(
                                                v14,
                                                1LL,
                                                &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                                                &v21);
                      if ( KSFormatFromWFXFormat >= 0 )
                      {
                        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(
                                                  a3,
                                                  (struct KSDATAFORMAT_WAVEFORMATEX **)&Src);
                        v7 = Src;
                        if ( KSFormatFromWFXFormat >= 0 )
                        {
                          v11 = Src;
                          if ( *(_DWORD *)Src >= 0x68u )
                          {
                            v8 = *(_DWORD *)Src;
                          }
                          else
                          {
                            memcpy_0(v27, Src, *(unsigned int *)Src);
                            v11 = v27;
                          }
                          KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, int *))(*(_QWORD *)v21 + 24LL))(
                                                    v21,
                                                    v11,
                                                    v8,
                                                    &v13);
                          if ( KSFormatFromWFXFormat >= 0 && !v13 )
LABEL_10:
                            KSFormatFromWFXFormat = -2004287480;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    KSFormatFromWFXFormat = -2147024809;
  }
LABEL_26:
  if ( a4 )
    *a4 = 0LL;
  PropVariantClear(&pvar);
  if ( v7 )
    CoTaskMemFree(v7);
  if ( KSFormatFromWFXFormat < 0 )
    AudSrvTraceLoggingErrorHelper("IsFormatSupportedByHwAudioEngine", 397, KSFormatFromWFXFormat);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v25[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
  return (unsigned int)KSFormatFromWFXFormat;
}
