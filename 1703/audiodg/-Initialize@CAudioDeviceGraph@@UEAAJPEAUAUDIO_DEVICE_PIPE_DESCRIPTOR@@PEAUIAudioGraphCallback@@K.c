/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FE20
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005840 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400014A8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140003D90 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000AC54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000ACD0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B9C0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000E970 (-GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140010C00 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140011C70 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400145A0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14001B270 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140030CE4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     WPP_SF_qq @ 0x140041C7C (WPP_SF_qq.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        WINBOOL a4)
{
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v5; // rdi
  CAudioDeviceGraph *v6; // r15
  HRESULT Instance; // ebx
  __int64 v8; // rax
  int *v9; // r14
  struct IAudioProcessor **v10; // r14
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 *v13; // rdx
  __int64 v14; // r8
  CPipeInstance *v15; // r12
  __int64 v16; // r8
  __int64 v17; // r8
  CAudioDeviceGraph *v18; // rcx
  __int64 (__fastcall *v19)(CAudioDeviceGraph *, struct Windows::Media::Devices::IAudioDeviceModulesManager **); // rax
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  char *v24; // r14
  __int64 v25; // r13
  struct IAudioGraphCallback *v26; // rax
  __int64 v27; // rcx
  unsigned __int16 *v28; // r14
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // rcx
  LPVOID v34; // r8
  void *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  void (*v38)(void); // rax
  WINBOOL *v40; // rbx
  void (__stdcall *v41)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // [rsp+0h] [rbp-228h] BYREF
  WINBOOL fPending; // [rsp+30h] [rbp-1F8h] BYREF
  struct CPipeInstance *v47; // [rsp+38h] [rbp-1F0h] BYREF
  int v48; // [rsp+40h] [rbp-1E8h] BYREF
  CAudioDeviceGraph *v49; // [rsp+48h] [rbp-1E0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-1D8h] BYREF
  struct Windows::Media::Devices::IAudioDeviceModulesManager *v51; // [rsp+58h] [rbp-1D0h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-1C8h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp-1C0h] BYREF
  struct IAudioGraphCallback *v54[2]; // [rsp+70h] [rbp-1B8h] BYREF
  double v55; // [rsp+80h] [rbp-1A8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-1A0h] BYREF
  char v57; // [rsp+90h] [rbp-198h]
  LPCRITICAL_SECTION v58; // [rsp+98h] [rbp-190h]
  union _RTL_RUN_ONCE *v59; // [rsp+A0h] [rbp-188h] BYREF
  int v60; // [rsp+A8h] [rbp-180h]
  __int64 v61; // [rsp+B0h] [rbp-178h]
  WINBOOL *v62; // [rsp+B8h] [rbp-170h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-168h] BYREF
  float v64; // [rsp+C8h] [rbp-160h] BYREF
  int v65; // [rsp+CCh] [rbp-15Ch] BYREF
  BOOL v66; // [rsp+D0h] [rbp-158h] BYREF
  GUID v67; // [rsp+D8h] [rbp-150h] BYREF
  unsigned __int16 *v68; // [rsp+F0h] [rbp-138h] BYREF
  int v69; // [rsp+F8h] [rbp-130h]
  int v70; // [rsp+FCh] [rbp-12Ch]
  void *v71; // [rsp+100h] [rbp-128h]
  int v72; // [rsp+108h] [rbp-120h]
  int v73; // [rsp+10Ch] [rbp-11Ch]
  char *v74; // [rsp+110h] [rbp-118h]
  __int64 v75; // [rsp+118h] [rbp-110h]
  double *v76; // [rsp+120h] [rbp-108h]
  __int64 v77; // [rsp+128h] [rbp-100h]
  CAudioDeviceGraph **v78; // [rsp+130h] [rbp-F8h]
  __int64 v79; // [rsp+138h] [rbp-F0h]
  float *v80; // [rsp+140h] [rbp-E8h]
  __int64 v81; // [rsp+148h] [rbp-E0h]
  int *v82; // [rsp+150h] [rbp-D8h]
  __int64 v83; // [rsp+158h] [rbp-D0h]
  BOOL *v84; // [rsp+160h] [rbp-C8h]
  __int64 v85; // [rsp+168h] [rbp-C0h]
  char *v86; // [rsp+170h] [rbp-B8h]
  __int64 v87; // [rsp+178h] [rbp-B0h]
  char *v88; // [rsp+180h] [rbp-A8h]
  __int64 v89; // [rsp+188h] [rbp-A0h]
  void *v90; // [rsp+190h] [rbp-98h]
  int v91; // [rsp+198h] [rbp-90h]
  int v92; // [rsp+19Ch] [rbp-8Ch]
  LPVOID v93; // [rsp+1A0h] [rbp-88h]
  int v94; // [rsp+1A8h] [rbp-80h]
  int v95; // [rsp+1ACh] [rbp-7Ch]
  GUID *v96; // [rsp+1B0h] [rbp-78h]
  __int64 v97; // [rsp+1B8h] [rbp-70h]
  int *v98; // [rsp+1C0h] [rbp-68h]
  __int64 v99; // [rsp+1C8h] [rbp-60h]

  v61 = -2LL;
  fPending = a4;
  v54[0] = a3;
  v5 = a2;
  v6 = this;
  v49 = this;
  v55 = *(double *)&a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, a3, this, a3);
  }
  v47 = 0LL;
  ppv = 0LL;
  pv = 0LL;
  v51 = 0LL;
  v58 = (LPCRITICAL_SECTION)((char *)v6 + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 232));
  if ( !a3 )
  {
    Instance = -2147467261;
    goto LABEL_88;
  }
  if ( *((_DWORD *)v6 + 56) )
  {
    Instance = -2005139440;
    goto LABEL_88;
  }
  if ( !v5 )
  {
    Instance = -2147467261;
    goto LABEL_88;
  }
  Instance = ValidateWaveFormatEx(*((const struct tWAVEFORMATEX **)v5 + 1));
  if ( Instance >= 0 )
  {
    if ( !*((_QWORD *)v5 + 7) )
    {
      Instance = -2147467261;
      goto LABEL_88;
    }
    if ( *((_DWORD *)v5 + 18) > 1u )
      Instance = -2147024809;
    else
      Instance = 0;
  }
  if ( Instance < 0 )
    goto LABEL_88;
  v8 = *((_QWORD *)v5 + 4);
  if ( v8 > 20000000 )
  {
    Instance = -2147024809;
    goto LABEL_88;
  }
  *((_QWORD *)v6 + 12) = v8;
  *((_DWORD *)v6 + 27) = *((_DWORD *)v5 + 18);
  *((_DWORD *)v6 + 72) = *((_DWORD *)v5 + 34);
  *((_DWORD *)v6 + 73) = *((_DWORD *)v5 + 35);
  *((_OWORD *)v6 + 21) = *(_OWORD *)((char *)v5 + 148);
  Context = (LPVOID)*((_QWORD *)v5 + 1);
  v9 = (int *)Context;
  *((_DWORD *)v6 + 74) = *((_DWORD *)v5 + 25);
  *((float *)v6 + 26) = (float)v9[1];
  Instance = CoCreateInstance(
               &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
               0LL,
               0x17u,
               &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
               &ppv);
  if ( Instance >= 0 )
  {
    v63 = *((_QWORD *)v5 + 4);
    v64 = (float)v9[1];
    v65 = *((unsigned __int16 *)v9 + 1);
    v66 = *((_DWORD *)v5 + 25) == 1;
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *, __int64))(*(_QWORD *)ppv + 24LL))(
                 ppv,
                 *((_QWORD *)v5 + 7),
                 &v63,
                 (__int64)v6 + 328);
    if ( Instance >= 0 )
    {
      v10 = (struct IAudioProcessor **)((char *)v6 + 112);
      Instance = CoCreateInstance(
                   &GUID_e1150ce9_5bd4_4044_8fe9_98cf40137a41,
                   0LL,
                   0x17u,
                   &GUID_6683b02d_3931_487c_ac86_a0f42493c3c3,
                   (LPVOID *)v6 + 14);
      if ( Instance >= 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, v11, v6, *v10);
        }
        Instance = (*(__int64 (__fastcall **)(struct IAudioProcessor *, bool, _QWORD))(*(_QWORD *)*v10 + 24LL))(
                     *v10,
                     *((_DWORD *)v6 + 27) != 0,
                     *((_QWORD *)v6 + 41));
        if ( Instance >= 0 )
        {
          Instance = CoCreateInstance(
                       &GUID_948cfd8c_1888_4e52_8703_99610347ebb6,
                       0LL,
                       0x17u,
                       &GUID_5945c28d_52af_41ae_abf3_5776f2ea9fc8,
                       (LPVOID *)v6 + 15);
          if ( Instance < 0 )
          {
LABEL_115:
            *((_QWORD *)v6 + 16) = 0LL;
            v43 = *((_QWORD *)v6 + 14);
            if ( v43 )
            {
              *((_QWORD *)v6 + 14) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
            }
            v44 = *((_QWORD *)v6 + 15);
            if ( v44 )
            {
              *((_QWORD *)v6 + 15) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
            }
            goto LABEL_88;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, v12, v6, *((_QWORD *)v6 + 15));
          }
          Instance = CPipeInstance::CreateDevicePipeInstance(
                       *v10,
                       *((struct IDeviceGraphObjectCache **)v6 + 41),
                       v5,
                       &v47);
          if ( Instance < 0 )
          {
            v15 = v47;
          }
          else
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v15 = v47;
              WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, v14, v6, v47);
            }
            else
            {
              v15 = v47;
            }
            Instance = CPipeInstance::Initialize(v15);
            if ( Instance >= 0 )
            {
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v16, v6, v15);
              }
              Instance = CPipeInstance::ConnectAPOs(v15, v54[0]);
              if ( Instance >= 0 )
              {
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, v17, v6, v15);
                }
                *((_QWORD *)v6 + 16) = v15;
                v18 = (CAudioDeviceGraph *)((char *)v6 + 16);
                v19 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct Windows::Media::Devices::IAudioDeviceModulesManager **))(*((_QWORD *)v6 + 2) + 80LL);
                v20 = v19 == CAudioDeviceGraph::GetAudioDeviceModulesManager
                    ? CAudioDeviceGraph::GetAudioDeviceModulesManager(v18, &v51)
                    : v19(v18, &v51);
                Instance = v20;
                if ( v20 >= 0 )
                {
                  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, v21, v6, v15);
                  }
                  Instance = CPipeInstance::AddConnectionsAndActivateAPOs(v15, v51);
                  if ( Instance >= 0 )
                  {
                    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, v22, v6, v15);
                    }
                    Instance = CAudioDeviceGraph::InitializePump(v6, v15, v5, (fPending & 0x400001) != 0);
                    if ( Instance >= 0 )
                    {
                      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      {
                        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, v23, v6, v15);
                      }
                      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 184);
                      v57 = 0;
                      ATL::CCritSecLock::Lock(&lpCriticalSection);
                      Instance = 0;
                      try
                      {
                        v24 = (char *)v6 + 136;
                        v25 = *((_QWORD *)v6 + 17);
                        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)v6 + 136);
                        v26 = (struct IAudioGraphCallback *)*((_QWORD *)v6 + 21);
                        v54[0] = v26;
                        v27 = *(_QWORD *)v26;
                        if ( v26 )
                          *((_QWORD *)v26 + 2) = v15;
                        *((_QWORD *)v6 + 21) = v27;
                        *((_QWORD *)v26 + 1) = 0LL;
                        *(_QWORD *)v26 = v25;
                        ++*((_QWORD *)v6 + 19);
                        if ( *(_QWORD *)v24 )
                          *(_QWORD *)(*(_QWORD *)v24 + 8LL) = v26;
                        else
                          *((_QWORD *)v6 + 18) = v26;
                        *(_QWORD *)v24 = v26;
                      }
                      catch ( ATL::CAtlException *v62 )
                      {
                        v13 = &v45;
                        v40 = v62;
                        if ( *v62 == -1073741571 )
                          _o__resetstkoflw();
                        fPending = *v40;
                        Instance = fPending;
                        if ( fPending < 0 )
                        {
                          if ( v57 )
                            LeaveCriticalSection(lpCriticalSection);
                          v6 = v49;
                          goto LABEL_86;
                        }
                        v15 = v47;
                        v6 = v49;
                        v5 = *(struct AUDIO_DEVICE_PIPE_DESCRIPTOR **)&v55;
                      }
                      v28 = (unsigned __int16 *)Context;
                      if ( v57 )
                        LeaveCriticalSection(lpCriticalSection);
                      *((_DWORD *)v6 + 56) = 1;
                      *((_DWORD *)v6 + 20) = 0;
                      mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)v5 + 7), &pv);
                      if ( *v28 == 0xFFFE )
                      {
                        v67 = *(GUID *)(v28 + 12);
                      }
                      else
                      {
                        v67 = GUID_00000000_0000_0010_8000_00aa00389b71;
                        v67.Data1 = *v28;
                      }
                      v48 = 0;
                      v29 = 0;
                      v30 = *((_DWORD *)v5 + 24);
                      if ( v30 )
                      {
                        while ( 1 )
                        {
                          v31 = *(_QWORD *)((char *)v5 + 16 * v29 + 164)
                              - *(_QWORD *)&GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data1;
                          if ( !v31 )
                            v31 = *(_QWORD *)((char *)v5 + 16 * v29 + 172)
                                - *(_QWORD *)GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data4;
                          if ( !v31 )
                            break;
                          if ( ++v29 >= v30 )
                            goto LABEL_74;
                        }
                        v48 = 1;
                      }
LABEL_74:
                      InitOnceBeginInitialize(
                        &`AudioDgTelemetryProvider::Instance'::`2'::wrapper,
                        0,
                        &fPending,
                        &Context);
                      if ( fPending )
                      {
                        v59 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
                        Context = &qword_140086158;
                        qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
                        qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
                        v60 = 0;
                        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v59, v41, v42);
                      }
                      v32 = *((_QWORD *)Context + 1);
                      if ( *(_DWORD *)v32 <= 4u
                        || (*(_QWORD *)(v32 + 16) & 0x400000000000LL) == 0
                        || (*(_QWORD *)(v32 + 24) & 0x400000000000LL) != *(_QWORD *)(v32 + 24) )
                      {
LABEL_87:
                        if ( Instance >= 0 )
                          goto LABEL_88;
                        goto LABEL_113;
                      }
                      v74 = (char *)v6 + 336;
                      v75 = 16LL;
                      v55 = (double)(int)*((_QWORD *)v6 + 12) / 10000000.0;
                      v76 = &v55;
                      v77 = 8LL;
                      LODWORD(v49) = *((_DWORD *)v6 + 27);
                      v78 = &v49;
                      v79 = 4LL;
                      v80 = &v64;
                      v81 = 4LL;
                      v82 = &v65;
                      v83 = 4LL;
                      v84 = &v66;
                      v85 = 4LL;
                      v86 = (char *)v5 + 104;
                      v87 = 16LL;
                      v88 = (char *)v5 + 120;
                      v89 = 16LL;
                      v33 = *((_QWORD *)v5 + 7);
                      v34 = &unk_14006B308;
                      v35 = &unk_14006B308;
                      LODWORD(v36) = 0;
                      if ( v33 )
                      {
                        v35 = (void *)*((_QWORD *)v5 + 7);
                        v36 = -1LL;
                        do
                          ++v36;
                        while ( *(_WORD *)(v33 + 2 * v36) );
                      }
                      v90 = v35;
                      v91 = 2 * v36 + 2;
                      v92 = 0;
                      LODWORD(v37) = 0;
                      if ( pv )
                      {
                        v34 = pv;
                        v37 = -1LL;
                        do
                          ++v37;
                        while ( *((_WORD *)pv + v37) );
                      }
                      v93 = v34;
                      v94 = 2 * v37 + 2;
                      v95 = 0;
                      v96 = &v67;
                      v97 = 16LL;
                      v98 = &v48;
                      v99 = 4LL;
                      LODWORD(v54[0]) = ((unsigned int)&unk_14006F439 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                      HIDWORD(v54[0]) = 4;
                      v54[1] = (struct IAudioGraphCallback *)0x400000000000LL;
                      v68 = *(unsigned __int16 **)(v32 + 8);
                      v69 = *v68;
                      v70 = 2;
                      v71 = &unk_14006F444;
                      v72 = 223;
                      v73 = 1;
                      EtwEventWriteTransfer(*(_QWORD *)(v32 + 32), v54, 0LL, 0LL, 14, &v68);
LABEL_86:
                      v15 = v47;
                      goto LABEL_87;
                    }
                  }
                }
              }
            }
          }
LABEL_113:
          if ( v15 )
            CPipeInstance::`scalar deleting destructor'(v15, (unsigned int)v13);
          goto LABEL_115;
        }
      }
    }
  }
LABEL_88:
  LeaveCriticalSection(v58);
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Initialize", 0x12Fu, Instance);
  }
  if ( v51 )
  {
    v38 = *(void (**)(void))(*(_QWORD *)v51 + 16LL);
    if ( (char *)v38 == (char *)Windows::Media::Devices::AudioDeviceModulesManager::Release )
      Windows::Media::Devices::AudioDeviceModulesManager::Release(v51);
    else
      v38();
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)Instance;
}
