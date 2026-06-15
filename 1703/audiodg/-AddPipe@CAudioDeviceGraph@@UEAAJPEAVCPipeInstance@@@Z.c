/*
 * XREFs of ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EDF0
 * Callers:
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F1A0 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000A8E0 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000A9F0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000E970 (-GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140010810 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140011070 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140011C70 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     TraceLoggingRegisterEx @ 0x14001B678 (TraceLoggingRegisterEx.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?GetLatency@CProcessNode@@UEAAJPEA_J@Z @ 0x14001BB20 (-GetLatency@CProcessNode@@UEAAJPEA_J@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x1400422B4 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  bool v4; // zf
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(CAudioDeviceGraph *, struct Windows::Media::Devices::IAudioDeviceModulesManager **); // rax
  int AudioDeviceModulesManager; // eax
  __int64 v10; // rcx
  struct Windows::Media::Devices::IAudioDeviceModulesManager *v11; // r12
  __int64 v12; // rdi
  CConnectionInstance *v13; // r14
  struct IAudioProcessor *v14; // rdx
  int v15; // eax
  int v16; // eax
  _QWORD *v17; // rdi
  CProcessNode *v18; // rsi
  __int64 (__fastcall *v19)(CProcessNode *__hidden, __int64 *); // rax
  CProcessNode *v20; // rcx
  int Latency; // eax
  int v22; // r14d
  __int64 v23; // rsi
  unsigned int (__fastcall *v24)(Windows::Media::Devices::AudioDeviceModulesManager *__hidden); // rax
  __int64 v26; // r10
  unsigned __int16 *v27; // rax
  __int64 v28; // rcx
  TLG_PENABLECALLBACK v29; // rdx
  PVOID v30; // r8
  __int64 v31; // rsi
  const GUID *v32; // r8
  const GUID *v33; // r9
  TLG_PENABLECALLBACK v34; // rdx
  PVOID v35; // r8
  const struct _TlgProvider_t *v36; // rcx
  unsigned __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  struct Windows::Media::Devices::IAudioDeviceModulesManager *v38; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v44; // [rsp+60h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-98h] BYREF
  char v46; // [rsp+70h] [rbp-90h]
  double v47; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v48[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v50; // [rsp+90h] [rbp-70h] BYREF
  int v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+9Ch] [rbp-64h]
  void *v53; // [rsp+A0h] [rbp-60h]
  int v54; // [rsp+A8h] [rbp-58h]
  int v55; // [rsp+ACh] [rbp-54h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  double *v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  int *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]

  v46 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)a2 + 18) == 0LL;
  v5 = *((_QWORD *)this + 12);
  v38 = 0LL;
  if ( !v4 )
  {
    v6 = -2005139410;
    goto LABEL_8;
  }
  v6 = 0;
  if ( *((_QWORD *)a2 + 18) != v5 )
  {
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v7 = *((_QWORD *)a2 + 18);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)a2 + 18) = v5;
LABEL_8:
    if ( v6 < 0 )
      goto LABEL_26;
  }
  v8 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct Windows::Media::Devices::IAudioDeviceModulesManager **))(*(_QWORD *)this + 80LL);
  if ( v8 == CAudioDeviceGraph::GetAudioDeviceModulesManager )
    AudioDeviceModulesManager = CAudioDeviceGraph::GetAudioDeviceModulesManager(this, &v38);
  else
    AudioDeviceModulesManager = v8(this, &v38);
  v6 = AudioDeviceModulesManager;
  if ( AudioDeviceModulesManager >= 0 )
  {
    v10 = *((_QWORD *)a2 + 18);
    v11 = v38;
    v37 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v10 + 32LL))(v10, &v37);
    if ( v6 < 0 )
      goto LABEL_56;
    v12 = *((_QWORD *)a2 + 9);
    while ( v12 )
    {
      v13 = *(CConnectionInstance **)(v12 + 16);
      v12 = *(_QWORD *)(v12 + 8);
      v14 = (struct IAudioProcessor *)*((_QWORD *)a2 + 18);
      v15 = *((_DWORD *)v13 + 4);
      if ( v15 )
      {
        if ( v15 != 1 )
        {
          v6 = -2147418113;
LABEL_51:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              12LL,
              &WPP_d2302955c188393ffc67d03e162b2897_Traceguids,
              (unsigned int)v6);
          }
          AudDGTraceLoggingErrorHelper("CConnectionInstance::AddConnections", 0x10Au, v6);
          goto LABEL_18;
        }
        v16 = CConnectionInstance::AddCaptureConnection(v13, v14, v37);
      }
      else
      {
        v16 = CConnectionInstance::AddRenderConnection(v13, v14, v37);
      }
      v6 = v16;
      if ( v16 < 0 )
        goto LABEL_51;
      *((_DWORD *)v13 + 1) = 1;
LABEL_18:
      if ( v6 < 0 )
        goto LABEL_56;
    }
    v6 = CPipeInstance::SetModulesManagerOnAPOs(a2, v11);
    if ( v6 < 0
      || (v6 = CPipeInstance::ActivateAPOs(a2, v37), v6 < 0)
      || (v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)a2 + 18) + 40LL))(
                 *((_QWORD *)a2 + 18),
                 v37),
          v6 < 0) )
    {
LABEL_56:
      if ( v37 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 18) + 48LL))(*((_QWORD *)a2 + 18));
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          39LL,
          &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
          (unsigned int)v6);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::AddConnectionsAndActivateAPOs", 0xAD5u, v6);
    }
    else
    {
      *((_DWORD *)a2 + 29) = 1;
    }
    if ( v6 >= 0 )
      v6 = CAudioDeviceGraph::RegisterSpatialPipe((CAudioDeviceGraph *)((char *)this - 16), a2, 1);
  }
LABEL_26:
  v17 = (_QWORD *)*((_QWORD *)a2 + 2);
  while ( v17 )
  {
    v18 = (CProcessNode *)v17[2];
    v17 = (_QWORD *)*v17;
    v19 = *(__int64 (__fastcall **)(CProcessNode *__hidden, __int64 *))(*(_QWORD *)v18 + 56LL);
    if ( v19 == CAPOProcessNode::GetLatency )
    {
      v20 = *(CProcessNode **)(*((_QWORD *)v18 + 4) + 40LL);
      v19 = *(__int64 (__fastcall **)(CProcessNode *__hidden, __int64 *))(*(_QWORD *)v20 + 32LL);
    }
    else
    {
      v20 = v18;
      if ( v19 == CProcessNode::GetLatency )
      {
        Latency = CProcessNode::GetLatency(v18, &v42);
        goto LABEL_30;
      }
    }
    Latency = v19(v20, &v42);
LABEL_30:
    v22 = Latency;
    if ( Latency < 0 )
    {
      if ( *((_DWORD *)v18 + 10) == 2 )
      {
        v31 = *((_QWORD *)v18 + 4);
        if ( *(_DWORD *)(v31 + 4) )
        {
          InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v40, &v44);
          if ( v40 )
          {
            v44 = &qword_140086158;
            qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
            qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
            qword_140086160 = (__int64)qword_140086170;
            byte_140086168 = 1;
            TraceLoggingRegisterEx(qword_140086170, v34, v35);
            dword_14008616C = 1;
            (*(void (__fastcall **)(__int64 *))(qword_140086158 + 8))(&qword_140086158);
            InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140086158);
          }
          v36 = (const struct _TlgProvider_t *)*((_QWORD *)v44 + 1);
          if ( *(_DWORD *)v36 > 2u )
          {
            v62 = 16LL;
            v61 = v31 + 8;
            v63 = &v41;
            v41 = v22;
            v64 = 4LL;
            TlgWrite(v36, &unk_14006F405, v32, v33, 4u, &pData);
          }
        }
      }
    }
    else if ( *((_DWORD *)v18 + 10) == 2 )
    {
      v23 = *((_QWORD *)v18 + 4);
      if ( *(_DWORD *)(v23 + 4) )
      {
        InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
        if ( fPending )
        {
          Context = &qword_140086158;
          qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
          qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
          qword_140086160 = (__int64)qword_140086170;
          byte_140086168 = 1;
          TraceLoggingRegisterEx(qword_140086170, v29, v30);
          dword_14008616C = 1;
          (*(void (__fastcall **)(__int64 *))(qword_140086158 + 8))(&qword_140086158);
          InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140086158);
        }
        v26 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v26 > 4u )
        {
          v57 = 16LL;
          v59 = 8LL;
          v56 = v23 + 8;
          v58 = &v47;
          v47 = (double)(int)v42 / 10000000.0;
          v48[1] = 4;
          v27 = *(unsigned __int16 **)(v26 + 8);
          v48[0] = ((unsigned int)&unk_14006F3D4 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v28 = *(_QWORD *)(v26 + 32);
          v50 = v27;
          v49 = 0LL;
          v51 = *v27;
          v52 = 2;
          v53 = &unk_14006F3DF;
          v54 = 37;
          v55 = 1;
          EtwEventWriteTransfer(v28, v48, 0LL, 0LL, 4, &v50);
        }
      }
    }
  }
  if ( v38 )
  {
    v24 = *(unsigned int (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *__hidden))(*(_QWORD *)v38 + 16LL);
    if ( v24 == Windows::Media::Devices::AudioDeviceModulesManager::Release )
      Windows::Media::Devices::AudioDeviceModulesManager::Release(v38);
    else
      v24(v38);
  }
  if ( v46 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
