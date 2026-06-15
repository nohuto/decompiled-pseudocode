/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140009850
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000AC54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400014A8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000A270 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000DD10 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000E210 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015384 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140034E94 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  __int64 v2; // rbx
  int v3; // esi
  __int64 v4; // r9
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rcx
  _DWORD *v8; // r14
  struct IAudioProcessingObject *v9; // rdi
  int v10; // ebx
  LPVOID v11; // rcx
  struct IAudioMediaType *v12; // rcx
  int v13; // esi
  unsigned int v14; // r14d
  struct IAudioMediaType *v15; // rcx
  __int64 v16; // rax
  struct IAudioMediaType *v17; // rdi
  __int64 (__fastcall *v19)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v20; // eax
  HRESULT (__stdcall *v21)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v22; // eax
  void (*v23)(void); // rax
  __int64 (__fastcall *v24)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v27; // eax
  void (*Release)(void); // rax
  __int64 (__fastcall *v29)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v30; // eax
  struct IAudioMediaType *v31; // rbx
  __int64 v32; // rdx
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  struct IAudioMediaType *v37; // rbx
  float v38; // xmm6_4
  int v39; // esi
  void (__stdcall *v40)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v41; // r8
  __int64 v42; // rcx
  bool v43; // di
  struct IAudioMediaType *v44; // [rsp+28h] [rbp-A9h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v46; // [rsp+38h] [rbp-99h] BYREF
  __int64 v47; // [rsp+40h] [rbp-91h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v49; // [rsp+50h] [rbp-81h] BYREF
  __int64 v50; // [rsp+58h] [rbp-79h]
  LPVOID Context; // [rsp+60h] [rbp-71h] BYREF
  __int64 v52; // [rsp+68h] [rbp-69h] BYREF
  union _RTL_RUN_ONCE *v53; // [rsp+70h] [rbp-61h] BYREF
  int v54; // [rsp+78h] [rbp-59h]
  __int64 v55; // [rsp+80h] [rbp-51h]
  struct IAudioProcessingObject *v56; // [rsp+88h] [rbp-49h]
  _BYTE v57[48]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-11h]
  _BYTE v59[24]; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v60; // [rsp+E0h] [rbp+Fh]
  int v61; // [rsp+E8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v55 = -2LL;
  v2 = 0LL;
  v3 = 0;
  v4 = *((unsigned int *)this + 35);
  LODWORD(v46) = *((_DWORD *)this + 35);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, v4);
  }
  v5 = *((_QWORD *)this + 9);
  v6 = *((_QWORD *)this + 3);
  if ( !v5 )
  {
LABEL_76:
    *((_DWORD *)this + 34) = v46;
    goto LABEL_77;
  }
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    v50 = v7;
    if ( !v6 )
      goto LABEL_61;
    v8 = *(_DWORD **)(v6 + 16);
    v6 = *(_QWORD *)(v6 + 8);
    if ( v8[10] != 2 )
      goto LABEL_61;
    v9 = *(struct IAudioProcessingObject **)(*((_QWORD *)v8 + 4) + 40LL);
    v56 = v9;
    if ( v9 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->AddRef)(v9);
    v44 = 0LL;
    memset(v59, 0, sizeof(v59));
    LODWORD(v60) = 0;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           &pv) >= 0 )
    {
      v24 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v8 + 8LL);
      if ( v24 == CProcessNode::GetLeftFormat )
        LeftFormat = CProcessNode::GetLeftFormat((CProcessNode *)v8, &v44);
      else
        LeftFormat = v24((CProcessNode *)v8, &v44);
      v3 = LeftFormat;
      if ( LeftFormat < 0 )
        goto LABEL_131;
      GetUncompressedAudioFormat = v44->lpVtbl->GetUncompressedAudioFormat;
      v27 = (char *)GetUncompressedAudioFormat == (char *)CAudioMediaType::GetUncompressedAudioFormat
          ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v44, (struct _UNCOMPRESSEDAUDIOFORMAT *)v57)
          : ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))GetUncompressedAudioFormat)(v44, v57);
      v3 = v27;
      if ( v27 < 0
        || (*(_DWORD *)v59 = 28,
            *(GUID *)&v59[4] = GUID_06587e71_f043_403a_bf49_cb591ba6e103,
            LODWORD(v60) = *(_DWORD *)&v57[28],
            *(_DWORD *)&v59[20] = *(_DWORD *)&v57[16],
            v3 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v9->lpVtbl->Initialize)(
                   v9,
                   28LL,
                   v59),
            v3 < 0) )
      {
LABEL_131:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            49LL,
            &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
            (unsigned int)v3);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeVolumeInterface", 0xC6Au, v3);
      }
    }
    else
    {
      v3 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v44 )
    {
      Release = (void (*)(void))v44->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v44);
      else
        Release();
    }
    if ( v3 < 0 )
      goto LABEL_187;
    v10 = v46;
    v44 = 0LL;
    memset(v59, 0, sizeof(v59));
    v60 = 0LL;
    v61 = 0;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
           &pv) >= 0 )
    {
      v19 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v8 + 8LL);
      if ( v19 == CProcessNode::GetLeftFormat )
        v20 = CProcessNode::GetLeftFormat((CProcessNode *)v8, &v44);
      else
        v20 = v19((CProcessNode *)v8, &v44);
      v3 = v20;
      if ( v20 < 0 )
        goto LABEL_138;
      v21 = v44->lpVtbl->GetUncompressedAudioFormat;
      v22 = (char *)v21 == (char *)CAudioMediaType::GetUncompressedAudioFormat
          ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v44, (struct _UNCOMPRESSEDAUDIOFORMAT *)v57)
          : ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))v21)(v44, v57);
      v3 = v22;
      if ( v22 < 0
        || (*(_DWORD *)v59 = 36,
            *(GUID *)&v59[4] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba,
            LODWORD(v60) = (int)((float)((float)(*(float *)&v57[28] * 10.0) / 1000.0) + 0.5),
            v61 = v10,
            HIDWORD(v60) = 10,
            *(_DWORD *)&v59[20] = *(_DWORD *)&v57[16],
            v3 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v9->lpVtbl->Initialize)(
                   v9,
                   36LL,
                   v59),
            v3 < 0) )
      {
LABEL_138:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            50LL,
            &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
            (unsigned int)v3);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMeterInterface", 0xCB3u, v3);
      }
      v2 = 0LL;
    }
    else
    {
      v2 = 0LL;
      v3 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v44 )
    {
      v23 = (void (*)(void))v44->lpVtbl->Release;
      if ( (char *)v23 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v44);
      else
        v23();
    }
    if ( v3 < 0 )
      goto LABEL_187;
    pv = 0LL;
    v44 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_6bb6a944_7352_4327_ab91_d92607b25656,
           &pv) >= 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v9->lpVtbl->QueryInterface)(
             v9,
             &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
             &v44) < 0 )
      {
        v3 = 0;
      }
      else
      {
        v3 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)pv + 24LL))(pv, 1LL);
        if ( v3 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              51LL,
              &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
              (unsigned int)v3);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeDitherInterface", 0xCEBu, v3);
        }
      }
    }
    else
    {
      v3 = 0;
    }
    if ( v44 )
      ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v3 < 0 )
      goto LABEL_187;
    v3 = CPipeInstance::InitializeRateConverterInterface(this, (struct CProcessNode *)v8, v9);
    if ( v3 < 0 )
      goto LABEL_187;
    v47 = 0LL;
    memset(v59, 0, sizeof(v59));
    v60 = 0LL;
    v44 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_bb8b2f5d_2af0_473f_bd94_f55a77587d3f,
           &v47) < 0 )
    {
      v3 = 0;
      goto LABEL_32;
    }
    v36 = *(_QWORD *)v8;
    if ( v8[6] )
    {
      v3 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v36 + 16))(v8, &v44);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v8 + 8LL))(v8, &pv);
        if ( v3 >= 0 )
        {
LABEL_153:
          *(_DWORD *)v59 = 32;
          *(GUID *)&v59[4] = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
          *(_DWORD *)&v59[20] = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44)
                                                    + 2);
          LODWORD(v60) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv + 40LL))(pv) + 2);
          v37 = v44;
          v38 = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44) + 8);
          *((float *)&v60 + 1) = v38
                               / (float)*(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v37->lpVtbl->GetAudioFormat)(v37)
                                                            + 12);
          v3 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v9->lpVtbl->Initialize)(
                 v9,
                 32LL,
                 v59);
          v2 = 0LL;
          if ( v3 >= 0 )
            goto LABEL_32;
        }
      }
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v36 + 8))(v8, &v44);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v8 + 16LL))(v8, &pv);
        if ( v3 >= 0 )
          goto LABEL_153;
      }
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        53LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        (unsigned int)v3);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMatrixInterface", 0xDA9u, v3);
LABEL_32:
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v44 )
      ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v3 < 0 )
      goto LABEL_187;
    v47 = 0LL;
    memset(v59, 0, sizeof(v59));
    v60 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
           &v47) >= 0 )
    {
      v29 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v8 + 8LL);
      if ( v29 == CProcessNode::GetLeftFormat )
        v30 = CProcessNode::GetLeftFormat((CProcessNode *)v8, (struct IAudioMediaType **)&pv);
      else
        v30 = v29((CProcessNode *)v8, (struct IAudioMediaType **)&pv);
      v3 = v30;
      if ( v30 < 0
        || (v3 = (*(__int64 (__fastcall **)(LPVOID, _BYTE *))(*(_QWORD *)pv + 48LL))(pv, v57), v3 < 0)
        || (*(_DWORD *)v59 = 32,
            *(GUID *)&v59[4] = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
            LODWORD(v60) = *(_DWORD *)&v57[28],
            *(_DWORD *)&v59[20] = *(_DWORD *)&v57[16],
            HIDWORD(v60) = *(_QWORD *)this == 0LL,
            v3 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v9->lpVtbl->Initialize)(
                   v9,
                   32LL,
                   v59),
            v3 < 0) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            56LL,
            &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
            (unsigned int)v3);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeLimiterInterface", 0xE69u, v3);
      }
    }
    else
    {
      v3 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v3 < 0 )
      goto LABEL_187;
    v11 = 0LL;
    pv = 0LL;
    if ( *((_DWORD *)this + 30) )
    {
      v39 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v9->lpVtbl->QueryInterface)(
              v9,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &pv);
      v11 = pv;
      if ( v39 >= 0 && *((LPVOID *)this + 21) != pv )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 21, (struct IUnknown *)pv);
        v11 = pv;
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = 0LL;
    v44 = 0LL;
    if ( !*((_DWORD *)this + 30) )
    {
      v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v9->lpVtbl->QueryInterface)(
              v9,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &v44);
      v12 = v44;
      if ( v13 >= 0 && *((struct IAudioMediaType **)this + 22) != v44 )
      {
        v31 = v44;
        if ( v44 )
        {
          ((void (*)(void))v44->lpVtbl->AddRef)();
          v12 = v44;
        }
        v32 = *((_QWORD *)this + 22);
        if ( v32 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32 + 16LL))(*((_QWORD *)this + 22));
          v12 = v44;
        }
        *((_QWORD *)this + 22) = v31;
        v2 = 0LL;
      }
    }
    if ( v12 )
      ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
    v47 = 0LL;
    memset(v57, 0, sizeof(v57));
    v58 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_22150b0d_ab8e_4f85_bd9a_8580e3b290f1,
           &v47) >= 0 )
    {
      *(_DWORD *)v57 = 56;
      *(GUID *)&v57[4] = GUID_693badea_1eb1_4013_b799_285f624a55bd;
      mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)this + 23), &pv);
      *(_QWORD *)&v57[24] = pv;
      *(_OWORD *)&v57[32] = *((_OWORD *)this + 18);
      InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
      if ( fPending[0] )
      {
        v53 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_140086158;
        qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        v54 = 0;
        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v53, v40, v41);
      }
      v58 = *((_QWORD *)Context + 1);
      v3 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v9->lpVtbl->Initialize)(
             v9,
             56LL,
             v57);
      if ( v3 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            57LL,
            &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
            (unsigned int)v3);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeSilenceMonitorInterface", 0xEA8u, v3);
      }
    }
    else
    {
      v3 = 0;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v3 < 0 )
      goto LABEL_187;
    pv = 0LL;
    memset(v59, 0, sizeof(v59));
    v60 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_1cfdfbb6_d1cc_4b8c_8e78_e9281f547eec,
           &pv) >= 0 )
      break;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&pv);
LABEL_60:
    ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->Release)(v9);
LABEL_61:
    v14 = v46;
    v47 = 0LL;
    v15 = 0LL;
    v44 = 0LL;
    v3 = 0;
    v16 = *(_QWORD *)(v50 + 32);
    if ( !v16 )
      goto LABEL_68;
    if ( *(_DWORD *)(v16 + 40) != 2 )
      goto LABEL_68;
    v2 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 40LL);
    v47 = v2;
    if ( !v2 )
      goto LABEL_68;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v15 = v44;
    if ( !v44 )
      goto LABEL_65;
    v49 = 0LL;
    v52 = 0LL;
    ((void (__fastcall *)(struct IAudioMediaType *, GUID *, __int64 *))v44->lpVtbl->QueryInterface)(
      v44,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v49);
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v2)(v2, &GUID_00000000_0000_0000_c000_000000000046, &v52);
    v42 = v49;
    v43 = v49 == v52;
    if ( v52 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      v42 = v49;
    }
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    v15 = v44;
    if ( !v43 )
    {
LABEL_65:
      v17 = v15;
      v44 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, struct IAudioMediaType **))v2)(
        v2,
        &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81,
        &v44);
      v15 = v44;
      if ( v17 )
      {
        ((void (__fastcall *)(struct IAudioMediaType *))v17->lpVtbl->Release)(v17);
        v15 = v44;
      }
    }
    if ( !v15 )
      goto LABEL_68;
    lpVtbl = v15->lpVtbl;
    if ( *(_DWORD *)(v50 + 16) )
      v34 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsEqual)(v15, v14, &v46);
    else
      v34 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsCompressedFormat)(
              v15,
              v14,
              &v46);
    v3 = v34;
    if ( v34 >= 0 )
    {
      v15 = v44;
LABEL_68:
      *(_DWORD *)(v50 + 40) = v46;
      goto LABEL_69;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_d2302955c188393ffc67d03e162b2897_Traceguids,
        (unsigned int)v34);
    }
    AudDGTraceLoggingErrorHelper("CConnectionInstance::SetConnectionFrameCount", 0x3EBu, v3);
    v15 = v44;
LABEL_69:
    if ( v15 )
      ((void (__fastcall *)(struct IAudioMediaType *))v15->lpVtbl->Release)(v15);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    if ( v3 < 0 )
      goto LABEL_188;
    if ( !v5 )
      goto LABEL_76;
    v2 = 0LL;
  }
  *(_DWORD *)v59 = 32;
  *(GUID *)&v59[4] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
  *(_DWORD *)&v59[20] = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)this + 16)
                                  + 56LL);
  v35 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v9->lpVtbl->Initialize)(
          v9,
          32LL,
          v59);
  v3 = v35;
  if ( v35 >= 0 )
  {
    if ( pv )
      (*(void (**)(void))(*(_QWORD *)pv + 16LL))();
    goto LABEL_60;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xEDD,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v35,
    (int)v44);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&pv);
LABEL_187:
  ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->Release)(v9);
LABEL_77:
  if ( v3 < 0 )
  {
LABEL_188:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        59LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        (unsigned int)v3);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeAPOInterfaces", 0xF50u, v3);
  }
  return (unsigned int)v3;
}
