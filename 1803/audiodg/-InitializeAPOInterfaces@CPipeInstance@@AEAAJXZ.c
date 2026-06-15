/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x1400089A0
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005F00 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009CB8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003800 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400093B0 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000CD40 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000D2E0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14002EF90 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140033578 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  __int64 v2; // r9
  __int64 v3; // r12
  __int64 v4; // rcx
  _DWORD *v5; // rsi
  struct IAudioProcessingObject *v6; // rdi
  int v7; // ebx
  unsigned int v8; // r14d
  int v9; // eax
  LPVOID v10; // rcx
  struct IAudioMediaType *v11; // rcx
  int v12; // ebx
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // r14
  unsigned int v17; // r15d
  __int64 v18; // rbx
  struct IAudioMediaType *v19; // rcx
  int v20; // esi
  __int64 v21; // rax
  struct IAudioMediaType *v22; // rsi
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  int v24; // eax
  __int64 (__fastcall *v26)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v27; // eax
  HRESULT (__stdcall *v28)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v29; // eax
  void (*v30)(void); // rax
  int v31; // eax
  __int64 (__fastcall *v32)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v35; // eax
  void (*Release)(void); // rax
  __int64 (__fastcall *v37)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v38; // eax
  struct IAudioMediaType *v39; // rdx
  struct IAudioMediaType *v40; // rsi
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rax
  struct IAudioMediaType *v44; // rbx
  float v45; // xmm6_4
  int v46; // ebx
  __int64 v47; // rcx
  bool v48; // si
  __int64 v49; // rdx
  unsigned __int64 v50; // r9
  struct IAudioMediaType *v51; // [rsp+28h] [rbp-89h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v53; // [rsp+38h] [rbp-79h] BYREF
  __int64 v54; // [rsp+40h] [rbp-71h] BYREF
  __int64 v55; // [rsp+48h] [rbp-69h] BYREF
  __int64 v56; // [rsp+50h] [rbp-61h] BYREF
  __int64 v57; // [rsp+58h] [rbp-59h]
  __int64 v58; // [rsp+60h] [rbp-51h]
  struct IAudioProcessingObject *v59; // [rsp+68h] [rbp-49h]
  _BYTE v60[48]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-11h]
  _BYTE v62[24]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v63; // [rsp+C0h] [rbp+Fh]
  unsigned int v64; // [rsp+C8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v58 = -2LL;
  v2 = *((unsigned int *)this + 35);
  v53 = *((_DWORD *)this + 35);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, v2);
  }
  v3 = *((_QWORD *)this + 9);
  v4 = *((_QWORD *)this + 3);
  v57 = v4;
  if ( !v3 )
  {
LABEL_85:
    *((_DWORD *)this + 34) = v53;
    return 0LL;
  }
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_62;
    v5 = *(_DWORD **)(v4 + 16);
    v57 = *(_QWORD *)(v4 + 8);
    if ( v5[10] != 2 )
      goto LABEL_62;
    v6 = *(struct IAudioProcessingObject **)(*((_QWORD *)v5 + 4) + 40LL);
    v59 = v6;
    if ( v6 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->AddRef)(v6);
    v51 = 0LL;
    memset(v62, 0, sizeof(v62));
    LODWORD(v63) = 0;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           &pv) >= 0 )
    {
      v32 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v5 + 8LL);
      if ( v32 == CProcessNode::GetLeftFormat )
        LeftFormat = CProcessNode::GetLeftFormat((CProcessNode *)v5, &v51);
      else
        LeftFormat = v32((CProcessNode *)v5, &v51);
      v7 = LeftFormat;
      if ( LeftFormat < 0 )
        goto LABEL_131;
      GetUncompressedAudioFormat = v51->lpVtbl->GetUncompressedAudioFormat;
      v35 = (char *)GetUncompressedAudioFormat == (char *)CAudioMediaType::GetUncompressedAudioFormat
          ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v51, (struct _UNCOMPRESSEDAUDIOFORMAT *)v60)
          : ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))GetUncompressedAudioFormat)(v51, v60);
      v7 = v35;
      if ( v35 < 0
        || (*(_DWORD *)v62 = 28,
            *(GUID *)&v62[4] = GUID_06587e71_f043_403a_bf49_cb591ba6e103,
            LODWORD(v63) = *(_DWORD *)&v60[28],
            *(_DWORD *)&v62[20] = *(_DWORD *)&v60[16],
            v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
                   v6,
                   28LL,
                   v62),
            v7 < 0) )
      {
LABEL_131:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            43LL,
            &WPP_0100469152753b0964101f667eb0634c_Traceguids,
            (unsigned int)v7);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeVolumeInterface", 0xCB2u, v7);
      }
    }
    else
    {
      v7 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v51 )
    {
      Release = (void (*)(void))v51->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v51);
      else
        Release();
    }
    if ( v7 < 0 )
    {
      v49 = 3936LL;
      goto LABEL_194;
    }
    v8 = v53;
    v51 = 0LL;
    memset(v62, 0, sizeof(v62));
    v63 = 0LL;
    v64 = 0;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
           &pv) >= 0 )
    {
      v26 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v5 + 8LL);
      if ( v26 == CProcessNode::GetLeftFormat )
        v27 = CProcessNode::GetLeftFormat((CProcessNode *)v5, &v51);
      else
        v27 = v26((CProcessNode *)v5, &v51);
      v7 = v27;
      if ( v27 < 0 )
        goto LABEL_138;
      v28 = v51->lpVtbl->GetUncompressedAudioFormat;
      v29 = (char *)v28 == (char *)CAudioMediaType::GetUncompressedAudioFormat
          ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v51, (struct _UNCOMPRESSEDAUDIOFORMAT *)v60)
          : ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))v28)(v51, v60);
      v7 = v29;
      if ( v29 < 0
        || (*(_DWORD *)v62 = 36,
            *(GUID *)&v62[4] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba,
            LODWORD(v63) = (int)((float)((float)(*(float *)&v60[28] * 10.0) / 1000.0) + 0.5),
            v64 = v8,
            HIDWORD(v63) = 10,
            *(_DWORD *)&v62[20] = *(_DWORD *)&v60[16],
            v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
                   v6,
                   36LL,
                   v62),
            v7 < 0) )
      {
LABEL_138:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            44LL,
            &WPP_0100469152753b0964101f667eb0634c_Traceguids,
            (unsigned int)v7);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMeterInterface", 0xCFBu, v7);
      }
    }
    else
    {
      v7 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v51 )
    {
      v30 = (void (*)(void))v51->lpVtbl->Release;
      if ( (char *)v30 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v51);
      else
        v30();
    }
    if ( v7 < 0 )
    {
      v49 = 3937LL;
LABEL_194:
      v50 = (unsigned int)v7;
      goto LABEL_195;
    }
    pv = 0LL;
    v51 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_6bb6a944_7352_4327_ab91_d92607b25656,
           &pv) >= 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v6->lpVtbl->QueryInterface)(
             v6,
             &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
             &v51) < 0 )
      {
        v7 = 0;
      }
      else
      {
        v31 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)pv + 24LL))(pv, 1LL);
        v7 = v31;
        if ( v31 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              45LL,
              &WPP_0100469152753b0964101f667eb0634c_Traceguids,
              (unsigned int)v31);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeDitherInterface", 0xD33u, v7);
        }
      }
    }
    else
    {
      v7 = 0;
    }
    if ( v51 )
      ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v7 < 0 )
    {
      v49 = 3938LL;
      goto LABEL_194;
    }
    v9 = CPipeInstance::InitializeRateConverterInterface(this, (struct CProcessNode *)v5, v6);
    v7 = v9;
    if ( v9 < 0 )
    {
      v50 = (unsigned int)v9;
      v49 = 3939LL;
LABEL_195:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v49,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)v50,
        (int)v51);
      ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
      return (unsigned int)v7;
    }
    v54 = 0LL;
    memset(v62, 0, sizeof(v62));
    v63 = 0LL;
    v51 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_bb8b2f5d_2af0_473f_bd94_f55a77587d3f,
           &v54) >= 0 )
    {
      v43 = *(_QWORD *)v5;
      if ( v5[6] )
      {
        v7 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v43 + 16))(v5, &v51);
        if ( v7 < 0 || (v7 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v5 + 8LL))(v5, &pv), v7 < 0) )
        {
LABEL_154:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              47LL,
              &WPP_0100469152753b0964101f667eb0634c_Traceguids,
              (unsigned int)v7);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMatrixInterface", 0xDF1u, v7);
          goto LABEL_30;
        }
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v43 + 8))(v5, &v51);
        if ( v7 < 0 )
          goto LABEL_154;
        v7 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v5 + 16LL))(v5, &pv);
        if ( v7 < 0 )
          goto LABEL_154;
      }
      *(_DWORD *)v62 = 32;
      *(GUID *)&v62[4] = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      *(_DWORD *)&v62[20] = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->GetAudioFormat)(v51)
                                                + 2);
      LODWORD(v63) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv + 40LL))(pv) + 2);
      v44 = v51;
      v45 = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->GetAudioFormat)(v51) + 8);
      *((float *)&v63 + 1) = v45
                           / (float)*(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44)
                                                        + 12);
      v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
             v6,
             32LL,
             v62);
      if ( v7 < 0 )
        goto LABEL_154;
    }
    else
    {
      v7 = 0;
    }
LABEL_30:
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v51 )
      ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v7 < 0 )
    {
      v49 = 3940LL;
      goto LABEL_194;
    }
    v54 = 0LL;
    memset(v62, 0, sizeof(v62));
    v63 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
           &v54) >= 0 )
    {
      v37 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v5 + 8LL);
      if ( v37 == CProcessNode::GetLeftFormat )
        v38 = CProcessNode::GetLeftFormat((CProcessNode *)v5, (struct IAudioMediaType **)&pv);
      else
        v38 = v37((CProcessNode *)v5, (struct IAudioMediaType **)&pv);
      v7 = v38;
      if ( v38 < 0
        || (v7 = (*(__int64 (__fastcall **)(LPVOID, _BYTE *))(*(_QWORD *)pv + 48LL))(pv, v60), v7 < 0)
        || (*(_DWORD *)v62 = 32,
            *(GUID *)&v62[4] = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
            LODWORD(v63) = *(_DWORD *)&v60[28],
            *(_DWORD *)&v62[20] = *(_DWORD *)&v60[16],
            HIDWORD(v63) = *(_QWORD *)this == 0LL,
            v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
                   v6,
                   32LL,
                   v62),
            v7 < 0) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            50LL,
            &WPP_0100469152753b0964101f667eb0634c_Traceguids,
            (unsigned int)v7);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeLimiterInterface", 0xEB1u, v7);
      }
    }
    else
    {
      v7 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v7 < 0 )
    {
      v49 = 3941LL;
      goto LABEL_194;
    }
    v10 = 0LL;
    pv = 0LL;
    if ( *((_DWORD *)this + 30) )
    {
      v46 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v6->lpVtbl->QueryInterface)(
              v6,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &pv);
      v10 = pv;
      if ( v46 >= 0 && *((LPVOID *)this + 21) != pv )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 21, (struct IUnknown *)pv);
        v10 = pv;
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = 0LL;
    v51 = 0LL;
    if ( !*((_DWORD *)this + 30) )
    {
      v12 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v6->lpVtbl->QueryInterface)(
              v6,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &v51);
      v11 = v51;
      if ( v12 >= 0 )
      {
        v39 = (struct IAudioMediaType *)*((_QWORD *)this + 22);
        if ( v39 != v51 )
        {
          v40 = v51;
          if ( v51 )
          {
            ((void (*)(void))v51->lpVtbl->AddRef)();
            v39 = (struct IAudioMediaType *)*((_QWORD *)this + 22);
            v11 = v51;
          }
          if ( v39 )
          {
            ((void (__fastcall *)(struct IAudioMediaType *))v39->lpVtbl->Release)(v39);
            v11 = v51;
          }
          *((_QWORD *)this + 22) = v40;
        }
      }
    }
    if ( v11 )
      ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
    v54 = 0LL;
    memset(v60, 0, sizeof(v60));
    v61 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_22150b0d_ab8e_4f85_bd9a_8580e3b290f1,
           &v54) >= 0 )
    {
      *(_DWORD *)v60 = 56;
      *(GUID *)&v60[4] = GUID_693badea_1eb1_4013_b799_285f624a55bd;
      mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)this + 23), &pv);
      *(_QWORD *)&v60[24] = pv;
      *(_OWORD *)&v60[32] = *((_OWORD *)this + 18);
      v61 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
              v41,
              lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
      v42 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
              v6,
              56LL,
              v60);
      v7 = v42;
      if ( v42 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            51LL,
            &WPP_0100469152753b0964101f667eb0634c_Traceguids,
            (unsigned int)v42);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeSilenceMonitorInterface", 0xEF0u, v7);
      }
    }
    else
    {
      v7 = 0;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v7 < 0 )
    {
      v49 = 3944LL;
      goto LABEL_194;
    }
    pv = 0LL;
    memset(v62, 0, sizeof(v62));
    v63 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_1cfdfbb6_d1cc_4b8c_8e78_e9281f547eec,
           &pv) >= 0 )
    {
      *(_DWORD *)v62 = 32;
      *(GUID *)&v62[4] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
      *(_DWORD *)&v62[20] = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)this + 2)
                                      + 56LL);
      v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
              v6,
              32LL,
              v62);
      v7 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF25,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v13,
          (int)v51);
        ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&pv);
        v49 = 3945LL;
        goto LABEL_194;
      }
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    }
    else
    {
      ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&pv);
    }
    ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
LABEL_62:
    v14 = *(_QWORD **)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    v15 = (_QWORD *)*v14;
    if ( *v14 )
      break;
LABEL_78:
    if ( !v3 )
      goto LABEL_85;
    v4 = v57;
  }
  while ( 1 )
  {
    v16 = v15[2];
    v15 = (_QWORD *)*v15;
    v17 = v53;
    v18 = 0LL;
    v54 = 0LL;
    v19 = 0LL;
    v51 = 0LL;
    v20 = 0;
    v21 = *(_QWORD *)(v16 + 32);
    if ( !v21 || *(_DWORD *)(v21 + 40) != 2 )
      goto LABEL_71;
    v18 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 40LL);
    v54 = v18;
    if ( !v18 )
      goto LABEL_70;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v19 = v51;
    if ( !v51 )
      goto LABEL_67;
    v55 = 0LL;
    v56 = 0LL;
    ((void (__fastcall *)(struct IAudioMediaType *, GUID *, __int64 *))v51->lpVtbl->QueryInterface)(
      v51,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v55);
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v18)(v18, &GUID_00000000_0000_0000_c000_000000000046, &v56);
    v47 = v55;
    v48 = v55 == v56;
    if ( v56 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      v47 = v55;
    }
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    v19 = v51;
    if ( !v48 )
    {
LABEL_67:
      v22 = v19;
      v51 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, struct IAudioMediaType **))v18)(
        v18,
        &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81,
        &v51);
      v19 = v51;
      if ( v22 )
      {
        ((void (__fastcall *)(struct IAudioMediaType *))v22->lpVtbl->Release)(v22);
        v19 = v51;
      }
    }
    if ( !v19 )
    {
LABEL_70:
      v20 = 0;
LABEL_71:
      *(_DWORD *)(v16 + 40) = v53;
      goto LABEL_72;
    }
    lpVtbl = v19->lpVtbl;
    if ( *(_DWORD *)(v16 + 16) )
      v24 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, unsigned int *))lpVtbl->IsEqual)(v19, v17, &v53);
    else
      v24 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, unsigned int *))lpVtbl->IsCompressedFormat)(
              v19,
              v17,
              &v53);
    v20 = v24;
    if ( v24 >= 0 )
    {
      v19 = v51;
      goto LABEL_71;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_97ee21803b773af0dc6a4f276843e66e_Traceguids,
        (unsigned int)v24);
    }
    AudDGTraceLoggingErrorHelper("CConnectionInstance::SetConnectionFrameCount", 0x38Eu, v20);
    v19 = v51;
LABEL_72:
    if ( v19 )
      ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v20 < 0 )
      break;
    if ( !v15 )
      goto LABEL_78;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF73,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v20,
    (int)v51);
  return (unsigned int)v20;
}
