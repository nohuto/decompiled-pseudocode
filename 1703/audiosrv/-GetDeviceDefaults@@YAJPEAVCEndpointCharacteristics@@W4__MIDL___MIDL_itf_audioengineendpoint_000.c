/*
 * XREFs of ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x18002C2A0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D390 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D760 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000DC50 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE18 (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800BB150 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800BE5F0 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BF070 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetDeviceDefaults(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **a5,
        __int64 *a6,
        __int64 *a7)
{
  struct tWAVEFORMATEX **v7; // r12
  __int64 v8; // r15
  struct tWAVEFORMATEX **v10; // r13
  int ProposedConnectorFormatForProcessingMode; // edi
  int (*v12)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v13; // xmm6
  struct tWAVEFORMATEX *v14; // rsi
  const PROPERTYKEY *v15; // rax
  const struct tWAVEFORMATEX *v16; // r9
  __int64 v17; // rax
  struct tWAVEFORMATEX *v18; // r8
  CAudioSignalProcessingModeMap *v19; // rcx
  int v20; // edx
  int v21; // eax
  struct _GUID *v22; // rax
  struct _GUID v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rax
  int i; // edi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r12
  void *v32; // rdi
  __int64 v33; // rbx
  void *v34; // rax
  void *v35; // rsi
  struct tWAVEFORMATEX *v36; // rbx
  struct _GUID *v37; // rbx
  __int64 v38; // rax
  _QWORD *v40; // r10
  __int64 v41; // r9
  LPCGUID v42; // r8
  LPCGUID v43; // r9
  char v44; // [rsp+30h] [rbp-D0h]
  int v45; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v47; // [rsp+48h] [rbp-B8h]
  const struct tWAVEFORMATEX *v48; // [rsp+50h] [rbp-B0h] BYREF
  struct tWAVEFORMATEX **v49; // [rsp+58h] [rbp-A8h]
  struct tWAVEFORMATEX **v50; // [rsp+60h] [rbp-A0h]
  struct tWAVEFORMATEX *v51; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v52; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h]
  struct _GUID *v54; // [rsp+80h] [rbp-80h]
  PROPVARIANT pvar; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h]
  void *Src; // [rsp+98h] [rbp-68h]
  __m256i v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  struct _GUID v61; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v62; // [rsp+E0h] [rbp-20h]
  GUID fmtid; // [rsp+F0h] [rbp-10h] BYREF
  DWORD pid; // [rsp+100h] [rbp+0h]
  struct _GUID v65; // [rsp+108h] [rbp+8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  int *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  void **v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]

  v59 = -2LL;
  v7 = a4;
  v49 = a4;
  v54 = a3;
  v8 = a2;
  v10 = a5;
  v50 = a5;
  v60 = 0LL;
  v47 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                               *((_QWORD *)this + 2),
                                               &v52);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    goto LABEL_51;
  if ( a7 || a6 )
  {
    ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(CPolicyConfig *, LPVOID, _QWORD, __int64 *, __int64 *))(*(_QWORD *)g_PolicyConfig + 56LL))(
                                                 g_PolicyConfig,
                                                 v52,
                                                 0LL,
                                                 a6,
                                                 a7);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_51;
  }
  if ( v7 )
  {
    v61 = *v54;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                                 this,
                                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                 &v61,
                                                 &v51);
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
    {
      v14 = v51;
LABEL_43:
      if ( ProposedConnectorFormatForProcessingMode < 0 )
        goto LABEL_88;
      goto LABEL_44;
    }
    CEndpointCharacteristics::GetDefaultConnectorProcessingMode(this, &v61, (unsigned int)v8, 1LL);
    v58.m256i_i64[0] = (__int64)this;
    v58.m256i_i32[2] = v8;
    v13 = v61;
    *(struct _GUID *)((char *)&v58.m256i_u64[1] + 4) = v61;
    pv = 0LL;
    v14 = 0LL;
    v47 = 0LL;
    pvar = 0LL;
    v56 = 0LL;
    Src = 0LL;
    v15 = &PKEY_AudioEngine_DeviceFormat;
    if ( (_DWORD)v8 == 3 )
      v15 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    fmtid = v15->fmtid;
    pid = v15->pid;
    if ( (*(int (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           &fmtid,
           &pvar) >= 0
      && (_WORD)pvar == 65
      && (unsigned int)v56 >= 0x12
      && (v16 = (const struct tWAVEFORMATEX *)Src,
          v48 = (const struct tWAVEFORMATEX *)Src,
          (unsigned int)v56 == *((unsigned __int16 *)Src + 8) + 18LL) )
    {
      if ( (_DWORD)v8 == 3 )
        v17 = 192LL;
      else
        v17 = 184LL;
      v18 = (struct tWAVEFORMATEX *)((char *)this + v17);
      v51 = (struct tWAVEFORMATEX *)((char *)this + v17);
      v44 = 0;
      v61 = v13;
      v19 = (struct CEndpointCharacteristics *)((char *)this + 24 * v8 + 1392);
      v20 = 0;
      v21 = *((_DWORD *)v19 + 4);
      if ( v21 > 0 )
      {
        while ( 1 )
        {
          v40 = (_QWORD *)(*(_QWORD *)v19 + 16LL * v20);
          v41 = *v40 - *(_QWORD *)&v61.Data1;
          if ( *v40 == *(_QWORD *)&v61.Data1 )
            v41 = v40[1] - *(_QWORD *)v61.Data4;
          if ( !v41 )
            break;
          if ( ++v20 >= v21 )
            goto LABEL_69;
        }
        if ( v20 != -1 )
        {
          v61 = v13;
          v22 = CAudioSignalProcessingModeMap::Lookup(v19, &v65, &v61);
          v18 = v51;
          v16 = v48;
          goto LABEL_20;
        }
LABEL_69:
        v16 = v48;
      }
      v61 = v13;
      v22 = &v61;
LABEL_20:
      v23 = *v22;
      v61 = v23;
      v25 = *(_QWORD *)v23.Data4;
      v24 = *(_OWORD *)&v23;
      v53 = *(_QWORD *)&v23.Data1;
      v26 = *(_QWORD *)&v23.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v23.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v26 = *(_QWORD *)v23.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( !v26 )
      {
        v61 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v25 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        v24 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        v53 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      }
      for ( i = 0; ; ++i )
      {
        v28 = *(_QWORD *)&v18->wFormatTag;
        if ( i >= *(_DWORD *)(*(_QWORD *)&v18->wFormatTag + 8LL) )
        {
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              11LL,
              &WPP_901a5e9bcaaa38e898dae42cff5cb88c_Traceguids,
              (unsigned int)(v44 != 0) - 2005139366);
          }
          v14 = (struct tWAVEFORMATEX *)v47;
          v10 = v50;
          v7 = v49;
          goto LABEL_80;
        }
        if ( (__int64)v14 < 0 || i >= *(_DWORD *)(v28 + 8) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18005E66CLL);
        }
        v29 = *(_QWORD *)((char *)&v14->wFormatTag + *(_QWORD *)v28);
        v30 = *(_QWORD *)v29 - v24;
        if ( *(_QWORD *)v29 == v24 )
          v30 = *(_QWORD *)(v29 + 8) - v25;
        if ( !v30 )
        {
          v44 = 1;
          v45 = 0;
          if ( *(int *)(v29 + 24) > 0 )
            break;
        }
LABEL_55:
        v14 = (struct tWAVEFORMATEX *)((char *)v14 + 8);
      }
      v31 = 0LL;
      while ( 1 )
      {
        if ( v31 < 0 || (int)v30 >= *(_DWORD *)(v29 + 24) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18005E656LL);
        }
        if ( (unsigned int)CompareWaveFormat(v16, **(const struct tWAVEFORMATEX ***)(v31 + *(_QWORD *)(v29 + 16))) )
          break;
        LODWORD(v30) = v45 + 1;
        v45 = v30;
        v31 += 8LL;
        v16 = v48;
        if ( (int)v30 >= *(_DWORD *)(v29 + 24) )
        {
          v24 = v53;
          v18 = v51;
          goto LABEL_55;
        }
      }
      v32 = Src;
      v33 = *((unsigned __int16 *)Src + 8);
      v34 = CoTaskMemAlloc(v33 + 18);
      v35 = v34;
      if ( v34 )
      {
        memcpy_0(v34, v32, v33 + 18);
        pv = v35;
        v7 = v49;
        v10 = v50;
        v14 = (struct tWAVEFORMATEX *)v47;
        goto LABEL_38;
      }
      v36 = 0LL;
      pv = 0LL;
      ProposedConnectorFormatForProcessingMode = -2147024882;
      LODWORD(v48) = -2147024882;
      v45 = 6005;
      v7 = v49;
      v10 = v50;
      v14 = (struct tWAVEFORMATEX *)v47;
    }
    else
    {
LABEL_80:
      v61 = *(struct _GUID *)v58.m256i_i8;
      v62 = *(_OWORD *)&v58.m256i_u64[2];
      ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                   (int)this,
                                                   0,
                                                   v8,
                                                   (int)&v61,
                                                   (struct tWAVEFORMATEX **)&pv);
      if ( ProposedConnectorFormatForProcessingMode >= 0
        && (ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                                                         this,
                                                         0,
                                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                         (const struct tWAVEFORMATEX *)pv),
            ProposedConnectorFormatForProcessingMode >= 0) )
      {
LABEL_38:
        PropVariantClear(&pvar);
        v36 = (struct tWAVEFORMATEX *)pv;
        ProposedConnectorFormatForProcessingMode = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pv);
        if ( ProposedConnectorFormatForProcessingMode >= 0 )
        {
          v14 = v36;
          v36 = 0LL;
          pv = 0LL;
        }
      }
      else
      {
        v36 = (struct tWAVEFORMATEX *)pv;
      }
      LODWORD(v48) = ProposedConnectorFormatForProcessingMode;
      v45 = 6005;
      if ( ProposedConnectorFormatForProcessingMode >= 0 )
        goto LABEL_42;
    }
    if ( (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
    {
      TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDeviceFormatInternal");
      v68 = &v45;
      v69 = 4LL;
      v70 = (void **)&v48;
      v71 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FA8C5, v42, v43, 5u, &pData);
      v36 = (struct tWAVEFORMATEX *)pv;
    }
LABEL_42:
    CoTaskMemFree(v36);
    goto LABEL_43;
  }
  v14 = (struct tWAVEFORMATEX *)v47;
LABEL_44:
  if ( v10 )
  {
    v37 = v54;
    v38 = *(_QWORD *)&v54->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&v54->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v38 = *(_QWORD *)v54->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v38
      || !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                          this,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8) )
    {
      v61 = *v37;
      ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetMixFormat(
                                                   this,
                                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                   &v61,
                                                   v12,
                                                   v10);
      if ( ProposedConnectorFormatForProcessingMode < 0 )
        goto LABEL_88;
    }
    else
    {
      v61 = *v37;
      ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDevicePipeFormat(
                                                   this,
                                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                   &v61,
                                                   v12,
                                                   v10);
      if ( ProposedConnectorFormatForProcessingMode < 0 )
      {
LABEL_88:
        if ( v14 )
          CoTaskMemFree(v14);
        goto LABEL_51;
      }
    }
  }
  if ( v7 )
    *v7 = v14;
LABEL_51:
  if ( v52 )
  {
    CoTaskMemFree(v52);
    v52 = 0LL;
  }
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        60LL,
        &WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
        (unsigned int)ProposedConnectorFormatForProcessingMode);
    }
    AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 0x1C02u, ProposedConnectorFormatForProcessingMode);
  }
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
