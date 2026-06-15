/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140006560
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400078D8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140011B30 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005A18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140006FD0 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000AE70 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000AF50 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000B3F0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14001BF70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FFDC (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  __int64 v2; // r9
  __int64 v3; // r12
  __int64 v4; // rcx
  int v5; // esi
  _DWORD *v6; // r14
  struct IAudioProcessingObject *v7; // rdi
  int v8; // ebx
  int v9; // esi
  int v10; // eax
  LPVOID v11; // rcx
  struct IAudioMediaType *v12; // rcx
  int v13; // ebx
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // r14
  unsigned int v18; // r15d
  __int64 v19; // rbx
  struct IAudioMediaType *v20; // rcx
  __int64 v21; // rax
  struct IAudioMediaType *v22; // rsi
  __int64 (__fastcall *v24)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v25; // eax
  HRESULT (__stdcall *v26)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v27; // eax
  void (*v28)(void); // rax
  int v29; // eax
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  int v31; // eax
  __int64 (__fastcall *v32)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v35; // eax
  void (*Release)(void); // rax
  __int64 (__fastcall *v37)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v38; // eax
  struct IAudioMediaType *v39; // rsi
  __int64 v40; // rdx
  int v41; // eax
  void (__stdcall *v42)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v43; // r8
  __int64 v44; // rax
  struct IAudioMediaType *v45; // rbx
  float v46; // xmm6_4
  int v47; // ebx
  __int64 v48; // rcx
  bool v49; // si
  __int64 v50; // rdx
  unsigned __int64 v51; // r9
  struct IAudioMediaType *v52; // [rsp+28h] [rbp-A9h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v54; // [rsp+38h] [rbp-99h] BYREF
  __int64 v55; // [rsp+40h] [rbp-91h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v57; // [rsp+50h] [rbp-81h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-79h] BYREF
  __int64 v59; // [rsp+60h] [rbp-71h] BYREF
  __int64 v60; // [rsp+68h] [rbp-69h]
  union _RTL_RUN_ONCE *v61; // [rsp+70h] [rbp-61h] BYREF
  int v62; // [rsp+78h] [rbp-59h]
  __int64 v63; // [rsp+80h] [rbp-51h]
  struct IAudioProcessingObject *v64; // [rsp+88h] [rbp-49h]
  _BYTE v65[48]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-11h]
  _BYTE v67[24]; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v68; // [rsp+E0h] [rbp+Fh]
  int v69; // [rsp+E8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v63 = -2LL;
  v2 = *((unsigned int *)this + 35);
  LODWORD(v54) = *((_DWORD *)this + 35);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids, v2);
  }
  v3 = *((_QWORD *)this + 9);
  v4 = *((_QWORD *)this + 3);
  v60 = v4;
  if ( !v3 )
  {
LABEL_80:
    *((_DWORD *)this + 34) = v54;
    return 0LL;
  }
  while ( 1 )
  {
    v5 = 0;
    if ( !v4 )
      goto LABEL_62;
    v6 = *(_DWORD **)(v4 + 16);
    v60 = *(_QWORD *)(v4 + 8);
    if ( v6[10] != 2 )
      goto LABEL_62;
    v7 = *(struct IAudioProcessingObject **)(*((_QWORD *)v6 + 4) + 40LL);
    v64 = v7;
    if ( v7 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v7->lpVtbl->AddRef)(v7);
    v52 = 0LL;
    memset(v67, 0, sizeof(v67));
    LODWORD(v68) = 0;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           &pv) >= 0 )
    {
      v32 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v6 + 8LL);
      if ( v32 == CProcessNode::GetLeftFormat )
        LeftFormat = CProcessNode::GetLeftFormat((CProcessNode *)v6, &v52);
      else
        LeftFormat = v32((CProcessNode *)v6, &v52);
      v8 = LeftFormat;
      if ( LeftFormat < 0 )
        goto LABEL_132;
      GetUncompressedAudioFormat = v52->lpVtbl->GetUncompressedAudioFormat;
      v35 = (char *)GetUncompressedAudioFormat == (char *)CAudioMediaType::GetUncompressedAudioFormat
          ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v52, (struct _UNCOMPRESSEDAUDIOFORMAT *)v65)
          : ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))GetUncompressedAudioFormat)(v52, v65);
      v8 = v35;
      if ( v35 < 0
        || (*(_DWORD *)v67 = 28,
            *(GUID *)&v67[4] = GUID_06587e71_f043_403a_bf49_cb591ba6e103,
            LODWORD(v68) = *(_DWORD *)&v65[28],
            *(_DWORD *)&v67[20] = *(_DWORD *)&v65[16],
            v8 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v7->lpVtbl->Initialize)(
                   v7,
                   28LL,
                   v67),
            v8 < 0) )
      {
LABEL_132:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            43LL,
            &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
            (unsigned int)v8);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeVolumeInterface", 0xCB2u, v8);
      }
    }
    else
    {
      v8 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v52 )
    {
      Release = (void (*)(void))v52->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v52);
      else
        Release();
    }
    if ( v8 < 0 )
    {
      v50 = 3936LL;
      goto LABEL_195;
    }
    v9 = v54;
    v52 = 0LL;
    memset(v67, 0, sizeof(v67));
    v68 = 0LL;
    v69 = 0;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
           &pv) >= 0 )
    {
      v24 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v6 + 8LL);
      if ( v24 == CProcessNode::GetLeftFormat )
        v25 = CProcessNode::GetLeftFormat((CProcessNode *)v6, &v52);
      else
        v25 = v24((CProcessNode *)v6, &v52);
      v8 = v25;
      if ( v25 < 0 )
        goto LABEL_139;
      v26 = v52->lpVtbl->GetUncompressedAudioFormat;
      v27 = (char *)v26 == (char *)CAudioMediaType::GetUncompressedAudioFormat
          ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v52, (struct _UNCOMPRESSEDAUDIOFORMAT *)v65)
          : ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))v26)(v52, v65);
      v8 = v27;
      if ( v27 < 0
        || (*(_DWORD *)v67 = 36,
            *(GUID *)&v67[4] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba,
            LODWORD(v68) = (int)((float)((float)(*(float *)&v65[28] * 10.0) / 1000.0) + 0.5),
            v69 = v9,
            HIDWORD(v68) = 10,
            *(_DWORD *)&v67[20] = *(_DWORD *)&v65[16],
            v8 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v7->lpVtbl->Initialize)(
                   v7,
                   36LL,
                   v67),
            v8 < 0) )
      {
LABEL_139:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            44LL,
            &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
            (unsigned int)v8);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMeterInterface", 0xCFBu, v8);
      }
      v5 = 0;
    }
    else
    {
      v5 = 0;
      v8 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v52 )
    {
      v28 = (void (*)(void))v52->lpVtbl->Release;
      if ( (char *)v28 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v52);
      else
        v28();
    }
    if ( v8 < 0 )
    {
      v50 = 3937LL;
LABEL_195:
      v51 = (unsigned int)v8;
      goto LABEL_196;
    }
    pv = 0LL;
    v52 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_6bb6a944_7352_4327_ab91_d92607b25656,
           &pv) >= 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v7->lpVtbl->QueryInterface)(
             v7,
             &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
             &v52) < 0 )
      {
        v8 = 0;
      }
      else
      {
        v29 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)pv + 24LL))(pv, 1LL);
        v8 = v29;
        if ( v29 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              45LL,
              &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
              (unsigned int)v29);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeDitherInterface", 0xD33u, v8);
        }
      }
    }
    else
    {
      v8 = 0;
    }
    if ( v52 )
      ((void (__fastcall *)(struct IAudioMediaType *))v52->lpVtbl->Release)(v52);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v8 < 0 )
    {
      v50 = 3938LL;
      goto LABEL_195;
    }
    v10 = CPipeInstance::InitializeRateConverterInterface(this, (struct CProcessNode *)v6, v7);
    v8 = v10;
    if ( v10 < 0 )
    {
      v51 = (unsigned int)v10;
      v50 = 3939LL;
LABEL_196:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v50,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)v51,
        (int)v52);
      ((void (__fastcall *)(struct IAudioProcessingObject *))v7->lpVtbl->Release)(v7);
      return (unsigned int)v8;
    }
    v55 = 0LL;
    memset(v67, 0, sizeof(v67));
    v68 = 0LL;
    v52 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_bb8b2f5d_2af0_473f_bd94_f55a77587d3f,
           &v55) >= 0 )
    {
      v44 = *(_QWORD *)v6;
      if ( v6[6] )
      {
        v8 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v44 + 16))(v6, &v52);
        if ( v8 < 0 || (v8 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v6 + 8LL))(v6, &pv), v8 < 0) )
        {
LABEL_155:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              47LL,
              &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
              (unsigned int)v8);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMatrixInterface", 0xDF1u, v8);
          goto LABEL_30;
        }
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v44 + 8))(v6, &v52);
        if ( v8 < 0 )
          goto LABEL_155;
        v8 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v6 + 16LL))(v6, &pv);
        if ( v8 < 0 )
          goto LABEL_155;
      }
      *(_DWORD *)v67 = 32;
      *(GUID *)&v67[4] = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      *(_DWORD *)&v67[20] = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v52->lpVtbl->GetAudioFormat)(v52)
                                                + 2);
      LODWORD(v68) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv + 40LL))(pv) + 2);
      v45 = v52;
      v46 = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v52->lpVtbl->GetAudioFormat)(v52) + 8);
      *((float *)&v68 + 1) = v46
                           / (float)*(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v45->lpVtbl->GetAudioFormat)(v45)
                                                        + 12);
      v8 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v7->lpVtbl->Initialize)(
             v7,
             32LL,
             v67);
      if ( v8 < 0 )
        goto LABEL_155;
    }
    else
    {
      v8 = 0;
    }
LABEL_30:
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v52 )
      ((void (__fastcall *)(struct IAudioMediaType *))v52->lpVtbl->Release)(v52);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    if ( v8 < 0 )
    {
      v50 = 3940LL;
      goto LABEL_195;
    }
    v55 = 0LL;
    memset(v67, 0, sizeof(v67));
    v68 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
           &v55) >= 0 )
    {
      v37 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v6 + 8LL);
      if ( v37 == CProcessNode::GetLeftFormat )
        v38 = CProcessNode::GetLeftFormat((CProcessNode *)v6, (struct IAudioMediaType **)&pv);
      else
        v38 = v37((CProcessNode *)v6, (struct IAudioMediaType **)&pv);
      v8 = v38;
      if ( v38 < 0
        || (v8 = (*(__int64 (__fastcall **)(LPVOID, _BYTE *))(*(_QWORD *)pv + 48LL))(pv, v65), v8 < 0)
        || (*(_DWORD *)v67 = 32,
            *(GUID *)&v67[4] = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
            LODWORD(v68) = *(_DWORD *)&v65[28],
            *(_DWORD *)&v67[20] = *(_DWORD *)&v65[16],
            HIDWORD(v68) = *(_QWORD *)this == 0LL,
            v8 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v7->lpVtbl->Initialize)(
                   v7,
                   32LL,
                   v67),
            v8 < 0) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            50LL,
            &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
            (unsigned int)v8);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeLimiterInterface", 0xEB1u, v8);
      }
    }
    else
    {
      v8 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    if ( v8 < 0 )
    {
      v50 = 3941LL;
      goto LABEL_195;
    }
    v11 = 0LL;
    pv = 0LL;
    if ( *((_DWORD *)this + 30) )
    {
      v47 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v7->lpVtbl->QueryInterface)(
              v7,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &pv);
      v11 = pv;
      if ( v47 >= 0 && *((LPVOID *)this + 21) != pv )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 21, (struct IUnknown *)pv);
        v11 = pv;
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = 0LL;
    v52 = 0LL;
    if ( !*((_DWORD *)this + 30) )
    {
      v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v7->lpVtbl->QueryInterface)(
              v7,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &v52);
      v12 = v52;
      if ( v13 >= 0 && *((struct IAudioMediaType **)this + 22) != v52 )
      {
        v39 = v52;
        if ( v52 )
        {
          ((void (*)(void))v52->lpVtbl->AddRef)();
          v12 = v52;
        }
        v40 = *((_QWORD *)this + 22);
        if ( v40 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v40 + 16LL))(*((_QWORD *)this + 22));
          v12 = v52;
        }
        *((_QWORD *)this + 22) = v39;
        v5 = 0;
      }
    }
    if ( v12 )
      ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
    v55 = 0LL;
    memset(v65, 0, sizeof(v65));
    v66 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_22150b0d_ab8e_4f85_bd9a_8580e3b290f1,
           &v55) >= 0 )
    {
      *(_DWORD *)v65 = 56;
      *(GUID *)&v65[4] = GUID_693badea_1eb1_4013_b799_285f624a55bd;
      mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)this + 23), &pv);
      *(_QWORD *)&v65[24] = pv;
      *(_OWORD *)&v65[32] = *((_OWORD *)this + 18);
      InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
      if ( fPending[0] )
      {
        v61 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_14008A158;
        qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        v62 = 0;
        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v61, v42, v43);
      }
      v66 = *((_QWORD *)Context + 1);
      v41 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v7->lpVtbl->Initialize)(
              v7,
              56LL,
              v65);
      v8 = v41;
      if ( v41 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            51LL,
            &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
            (unsigned int)v41);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeSilenceMonitorInterface", 0xEF0u, v8);
      }
    }
    else
    {
      v8 = 0;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    if ( v8 < 0 )
    {
      v50 = 3944LL;
      goto LABEL_195;
    }
    pv = 0LL;
    memset(v67, 0, sizeof(v67));
    v68 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_1cfdfbb6_d1cc_4b8c_8e78_e9281f547eec,
           &pv) >= 0 )
    {
      *(_DWORD *)v67 = 32;
      *(GUID *)&v67[4] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
      *(_DWORD *)&v67[20] = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)this + 2)
                                      + 56LL);
      v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v7->lpVtbl->Initialize)(
              v7,
              32LL,
              v67);
      v8 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xF25,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v14,
          (int)v52);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&pv);
        v50 = 3945LL;
        goto LABEL_195;
      }
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    }
    else
    {
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&pv);
    }
    ((void (__fastcall *)(struct IAudioProcessingObject *))v7->lpVtbl->Release)(v7);
LABEL_62:
    v15 = *(_QWORD **)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    v16 = (_QWORD *)*v15;
    if ( *v15 )
      break;
LABEL_78:
    if ( !v3 )
      goto LABEL_80;
    v4 = v60;
  }
  while ( 1 )
  {
    v17 = v16[2];
    v16 = (_QWORD *)*v16;
    v18 = v54;
    v19 = 0LL;
    v55 = 0LL;
    v20 = 0LL;
    v52 = 0LL;
    v21 = *(_QWORD *)(v17 + 32);
    if ( !v21 || *(_DWORD *)(v21 + 40) != 2 )
      goto LABEL_71;
    v19 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 40LL);
    v55 = v19;
    if ( !v19 )
      goto LABEL_70;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v20 = v52;
    if ( !v52 )
      goto LABEL_67;
    v57 = 0LL;
    v59 = 0LL;
    ((void (__fastcall *)(struct IAudioMediaType *, GUID *, __int64 *))v52->lpVtbl->QueryInterface)(
      v52,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v57);
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v19)(v19, &GUID_00000000_0000_0000_c000_000000000046, &v59);
    v48 = v57;
    v49 = v57 == v59;
    if ( v59 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      v48 = v57;
    }
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    v20 = v52;
    if ( !v49 )
    {
LABEL_67:
      v22 = v20;
      v52 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, struct IAudioMediaType **))v19)(
        v19,
        &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81,
        &v52);
      v20 = v52;
      if ( v22 )
      {
        ((void (__fastcall *)(struct IAudioMediaType *))v22->lpVtbl->Release)(v22);
        v20 = v52;
      }
    }
    if ( !v20 )
    {
LABEL_70:
      v5 = 0;
LABEL_71:
      *(_DWORD *)(v17 + 40) = v54;
      goto LABEL_72;
    }
    lpVtbl = v20->lpVtbl;
    if ( *(_DWORD *)(v17 + 16) )
      v31 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsEqual)(v20, v18, &v54);
    else
      v31 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsCompressedFormat)(
              v20,
              v18,
              &v54);
    v5 = v31;
    if ( v31 >= 0 )
    {
      v20 = v52;
      goto LABEL_71;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_1e80f4dffbc73b3b77eb352b7eee097b_Traceguids,
        (unsigned int)v31);
    }
    AudDGTraceLoggingErrorHelper("CConnectionInstance::SetConnectionFrameCount", 0x38Eu, v5);
    v20 = v52;
LABEL_72:
    if ( v20 )
      ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v5 < 0 )
      break;
    v5 = 0;
    if ( !v16 )
      goto LABEL_78;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xF73,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v5,
    (int)v52);
  return (unsigned int)v5;
}
