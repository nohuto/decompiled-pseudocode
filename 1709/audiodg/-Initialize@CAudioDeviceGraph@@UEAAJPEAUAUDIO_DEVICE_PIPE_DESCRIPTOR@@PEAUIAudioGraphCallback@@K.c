/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000CC90
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FB00 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003230 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400078D8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140007950 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140008F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000BAC0 (-GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x14000DBD4 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x14000EC10 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140017230 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     _TlgCreateWsz @ 0x14001B494 (_TlgCreateWsz.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14001BA28 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400303C0 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_qq @ 0x1400424CC (WPP_SF_qq.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        WINBOOL a4)
{
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v5; // rsi
  CAudioDeviceGraph *v6; // rbx
  HRESULT Instance; // edi
  __int64 v8; // rax
  int *v9; // r12
  struct IAudioProcessor **v10; // r12
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
  __int64 v24; // r13
  struct ATL::CAtlPlex *v25; // r8
  int v26; // edx
  _QWORD *v27; // rcx
  int i; // edx
  struct IAudioGraphCallback *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int16 *v32; // r13
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // r10
  struct IAudioGraphCallback *v37; // r11
  __int64 v38; // r10
  void (*v39)(void); // rax
  void (__stdcall *v41)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v42; // r8
  WINBOOL *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // [rsp+0h] [rbp-218h] BYREF
  WINBOOL fPending; // [rsp+30h] [rbp-1E8h] BYREF
  struct CPipeInstance *v48; // [rsp+38h] [rbp-1E0h] BYREF
  int v49; // [rsp+40h] [rbp-1D8h] BYREF
  CAudioDeviceGraph *v50; // [rsp+48h] [rbp-1D0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-1C8h] BYREF
  struct Windows::Media::Devices::IAudioDeviceModulesManager *v52; // [rsp+58h] [rbp-1C0h] BYREF
  LPCWSTR pwsz; // [rsp+60h] [rbp-1B8h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp-1B0h] BYREF
  struct IAudioGraphCallback *v55[2]; // [rsp+70h] [rbp-1A8h] BYREF
  double v56; // [rsp+80h] [rbp-198h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-190h] BYREF
  char v58; // [rsp+90h] [rbp-188h]
  LPCRITICAL_SECTION v59; // [rsp+98h] [rbp-180h]
  union _RTL_RUN_ONCE *v60; // [rsp+A0h] [rbp-178h] BYREF
  int v61; // [rsp+A8h] [rbp-170h]
  __int64 v62; // [rsp+B0h] [rbp-168h]
  WINBOOL *v63; // [rsp+B8h] [rbp-160h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-158h] BYREF
  float v65; // [rsp+C8h] [rbp-150h] BYREF
  int v66; // [rsp+CCh] [rbp-14Ch] BYREF
  BOOL v67; // [rsp+D0h] [rbp-148h] BYREF
  GUID v68; // [rsp+D8h] [rbp-140h] BYREF
  unsigned __int16 *v69; // [rsp+F0h] [rbp-128h] BYREF
  int v70; // [rsp+F8h] [rbp-120h]
  int v71; // [rsp+FCh] [rbp-11Ch]
  void *v72; // [rsp+100h] [rbp-118h]
  int v73; // [rsp+108h] [rbp-110h]
  int v74; // [rsp+10Ch] [rbp-10Ch]
  char *v75; // [rsp+110h] [rbp-108h]
  __int64 v76; // [rsp+118h] [rbp-100h]
  double *v77; // [rsp+120h] [rbp-F8h]
  __int64 v78; // [rsp+128h] [rbp-F0h]
  CAudioDeviceGraph **v79; // [rsp+130h] [rbp-E8h]
  __int64 v80; // [rsp+138h] [rbp-E0h]
  float *v81; // [rsp+140h] [rbp-D8h]
  __int64 v82; // [rsp+148h] [rbp-D0h]
  int *v83; // [rsp+150h] [rbp-C8h]
  __int64 v84; // [rsp+158h] [rbp-C0h]
  BOOL *v85; // [rsp+160h] [rbp-B8h]
  __int64 v86; // [rsp+168h] [rbp-B0h]
  char *v87; // [rsp+170h] [rbp-A8h]
  __int64 v88; // [rsp+178h] [rbp-A0h]
  char *v89; // [rsp+180h] [rbp-98h]
  __int64 v90; // [rsp+188h] [rbp-90h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+190h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+1A0h] [rbp-78h] BYREF
  GUID *v93; // [rsp+1B0h] [rbp-68h]
  __int64 v94; // [rsp+1B8h] [rbp-60h]
  int *v95; // [rsp+1C0h] [rbp-58h]
  __int64 v96; // [rsp+1C8h] [rbp-50h]

  v62 = -2LL;
  fPending = a4;
  v55[0] = a3;
  v5 = a2;
  v6 = this;
  v50 = this;
  v56 = *(double *)&a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, a3, this, a3);
  }
  v48 = 0LL;
  ppv = 0LL;
  pwsz = 0LL;
  v52 = 0LL;
  v59 = (LPCRITICAL_SECTION)((char *)v6 + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 232));
  if ( !a3 )
  {
    Instance = -2147467261;
    goto LABEL_64;
  }
  if ( *((_DWORD *)v6 + 56) )
  {
    Instance = -2005139440;
    goto LABEL_64;
  }
  Instance = ValidateDevicePipeDescriptor(v5);
  if ( Instance < 0 )
    goto LABEL_64;
  v8 = *((_QWORD *)v5 + 4);
  if ( (double)(int)v8 > 25000000.0 )
  {
    Instance = -2147024809;
    goto LABEL_64;
  }
  *((_QWORD *)v6 + 12) = v8;
  *((_DWORD *)v6 + 27) = *((_DWORD *)v5 + 18);
  *((_DWORD *)v6 + 72) = *((_DWORD *)v5 + 34);
  *((_DWORD *)v6 + 73) = *((_DWORD *)v5 + 35);
  *((_OWORD *)v6 + 21) = *(_OWORD *)((char *)v5 + 152);
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
    v64 = *((_QWORD *)v5 + 4);
    v65 = (float)v9[1];
    v66 = *((unsigned __int16 *)v9 + 1);
    v67 = *((_DWORD *)v5 + 25) == 1;
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *, __int64))(*(_QWORD *)ppv + 24LL))(
                 ppv,
                 *((_QWORD *)v5 + 7),
                 &v64,
                 (__int64)v6 + 328);
    if ( Instance >= 0 )
    {
      v10 = (struct IAudioProcessor **)((char *)v6 + 112);
      Instance = CoCreateInstance(
                   &GUID_e1150ce9_5bd4_4044_8fe9_98cf40137a41,
                   0LL,
                   0x17u,
                   &GUID_f6e73867_71c3_4ec9_9186_ecb99cc5a50e,
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
                       &GUID_4cf5cb7f_c0c6_46a8_8d11_2bf1e3d3e642,
                       (LPVOID *)v6 + 15);
          if ( Instance < 0 )
          {
LABEL_105:
            *((_QWORD *)v6 + 16) = 0LL;
            v44 = *((_QWORD *)v6 + 14);
            if ( v44 )
            {
              *((_QWORD *)v6 + 14) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
            }
            v45 = *((_QWORD *)v6 + 15);
            if ( v45 )
            {
              *((_QWORD *)v6 + 15) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
            }
            goto LABEL_64;
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
                       &v48);
          if ( Instance < 0 )
          {
            v15 = v48;
          }
          else
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
            {
              v15 = v48;
            }
            else
            {
              v15 = v48;
              WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, v14, v6, v48);
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
              Instance = CPipeInstance::ConnectAPOs(v15, v55[0]);
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
                    ? CAudioDeviceGraph::GetAudioDeviceModulesManager(v18, &v52)
                    : v19(v18, &v52);
                Instance = v20;
                if ( v20 >= 0 )
                {
                  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, v21, v6, v15);
                  }
                  Instance = CPipeInstance::AddConnectionsAndActivateAPOs(v15, v52);
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
                      v58 = 0;
                      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
                      Instance = 0;
                      try
                      {
                        v24 = *((_QWORD *)v6 + 17);
                        if ( !*((_QWORD *)v6 + 21) )
                        {
                          v25 = ATL::CAtlPlex::Create(
                                  (struct ATL::CAtlPlex **)v6 + 20,
                                  *((unsigned int *)v6 + 44),
                                  0x18uLL);
                          if ( !v25 )
                            ATL::AtlThrowImpl(-2147024882);
                          v26 = *((_DWORD *)v6 + 44);
                          v27 = (_QWORD *)((char *)v25 + 16 * (v26 - 1) + 8 * (unsigned int)(v26 - 1) + 8);
                          for ( i = v26 - 1; i >= 0; --i )
                          {
                            *v27 = *((_QWORD *)v6 + 21);
                            *((_QWORD *)v6 + 21) = v27;
                            v27 -= 3;
                          }
                        }
                        v29 = (struct IAudioGraphCallback *)*((_QWORD *)v6 + 21);
                        v55[0] = v29;
                        v30 = *(_QWORD *)v29;
                        if ( v29 )
                          *((_QWORD *)v29 + 2) = v15;
                        *((_QWORD *)v6 + 21) = v30;
                        *((_QWORD *)v29 + 1) = 0LL;
                        *(_QWORD *)v29 = v24;
                        ++*((_QWORD *)v6 + 19);
                        v31 = *((_QWORD *)v6 + 17);
                        if ( v31 )
                          *(_QWORD *)(v31 + 8) = v29;
                        else
                          *((_QWORD *)v6 + 18) = v29;
                        *((_QWORD *)v6 + 17) = v29;
                      }
                      catch ( ATL::CAtlException *v63 )
                      {
                        v13 = &v46;
                        v43 = v63;
                        if ( *v63 == -1073741571 )
                          _o__resetstkoflw();
                        fPending = *v43;
                        Instance = fPending;
                        if ( fPending < 0 )
                        {
                          if ( v58 )
                            LeaveCriticalSection(lpCriticalSection);
                          v6 = v50;
                          goto LABEL_62;
                        }
                        v15 = v48;
                        v6 = v50;
                        v5 = *(struct AUDIO_DEVICE_PIPE_DESCRIPTOR **)&v56;
                      }
                      v32 = (unsigned __int16 *)Context;
                      if ( v58 )
                        LeaveCriticalSection(lpCriticalSection);
                      *((_DWORD *)v6 + 56) = 1;
                      *((_DWORD *)v6 + 20) = 0;
                      mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)v5 + 7), &pwsz);
                      if ( *v32 == 0xFFFE )
                      {
                        v68 = *(GUID *)(v32 + 12);
                      }
                      else
                      {
                        v68 = GUID_00000000_0000_0010_8000_00aa00389b71;
                        v68.Data1 = *v32;
                      }
                      v49 = 0;
                      v33 = 0;
                      v34 = *((_DWORD *)v5 + 24);
                      if ( v34 )
                      {
                        while ( 1 )
                        {
                          v35 = *((_QWORD *)v5 + 2 * v33 + 21)
                              - *(_QWORD *)&GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data1;
                          if ( !v35 )
                            v35 = *((_QWORD *)v5 + 2 * v33 + 22)
                                - *(_QWORD *)GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data4;
                          if ( !v35 )
                            break;
                          if ( ++v33 >= v34 )
                            goto LABEL_56;
                        }
                        v49 = 1;
                      }
LABEL_56:
                      InitOnceBeginInitialize(
                        &`AudioDgTelemetryProvider::Instance'::`2'::wrapper,
                        0,
                        &fPending,
                        &Context);
                      if ( fPending )
                      {
                        v60 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
                        Context = &qword_14008A158;
                        qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
                        qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
                        v61 = 0;
                        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v60, v41, v42);
                      }
                      v36 = *((_QWORD *)Context + 1);
                      if ( *(_DWORD *)v36 <= 4u
                        || (*(_QWORD *)(v36 + 16) & 0x400000000000LL) == 0
                        || (*(_QWORD *)(v36 + 24) & 0x400000000000LL) != *(_QWORD *)(v36 + 24) )
                      {
LABEL_63:
                        if ( Instance >= 0 )
                          goto LABEL_64;
                        goto LABEL_103;
                      }
                      v75 = (char *)v6 + 336;
                      v76 = 16LL;
                      v56 = (double)(int)*((_QWORD *)v6 + 12) / 10000000.0;
                      v77 = &v56;
                      v78 = 8LL;
                      LODWORD(v50) = *((_DWORD *)v6 + 27);
                      v79 = &v50;
                      v80 = 4LL;
                      v81 = &v65;
                      v82 = 4LL;
                      v83 = &v66;
                      v84 = 4LL;
                      v85 = &v67;
                      v86 = 4LL;
                      v87 = (char *)v5 + 104;
                      v88 = 16LL;
                      v89 = (char *)v5 + 120;
                      v90 = 16LL;
                      TlgCreateWsz(&pDesc, *((LPCWSTR *)v5 + 7));
                      TlgCreateWsz(&v92, pwsz);
                      v93 = &v68;
                      v94 = 16LL;
                      v95 = &v49;
                      v96 = 4LL;
                      LODWORD(v55[0]) = ((unsigned int)&unk_14007249A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                      HIDWORD(v55[0]) = 4;
                      v55[1] = v37;
                      v69 = *(unsigned __int16 **)(v38 + 8);
                      v70 = *v69;
                      v71 = 2;
                      v72 = &unk_1400724A5;
                      v73 = 223;
                      v74 = 1;
                      EtwEventWriteTransfer(*(_QWORD *)(v38 + 32), v55, 0LL, 0LL, 14, &v69);
LABEL_62:
                      v15 = v48;
                      goto LABEL_63;
                    }
                  }
                }
              }
            }
          }
LABEL_103:
          if ( v15 )
            CPipeInstance::`scalar deleting destructor'(v15, (unsigned int)v13);
          goto LABEL_105;
        }
      }
    }
  }
LABEL_64:
  LeaveCriticalSection(v59);
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Initialize", 0x12Fu, Instance);
  }
  if ( v52 )
  {
    v39 = *(void (**)(void))(*(_QWORD *)v52 + 16LL);
    if ( (char *)v39 == (char *)Windows::Media::Devices::AudioDeviceModulesManager::Release )
      Windows::Media::Devices::AudioDeviceModulesManager::Release(v52);
    else
      v39();
  }
  CoTaskMemFree((LPVOID)pwsz);
  pwsz = 0LL;
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)Instance;
}
