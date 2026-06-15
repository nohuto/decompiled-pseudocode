/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026560
 * Callers:
 *     AudioServerStartStream @ 0x18002C540 (AudioServerStartStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019640 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x18001B020 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18001D370 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18001D390 (-GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x180025CF0 (-AcquirePowerReference@CVADServer@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 */

__int64 __fastcall CVADServer::StartStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v5; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  struct _RTL_CRITICAL_SECTION *v10; // rcx
  struct CAudioStream *v11; // rdx
  __int64 (__fastcall *CriticalSection)(struct _RTL_CRITICAL_SECTION *, struct CAudioStream *); // rax
  int started; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  struct IAudioProcess *v16; // rcx
  CAudioStream *v17; // rcx
  __int64 (__fastcall *v18)(CAudioStream *, struct IAudioProcess **); // rax
  int Process; // eax
  __int64 v20; // rdi
  CAudioStream *v21; // rcx
  __int64 (*v22)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v24; // rcx
  __int64 (*v25)(void); // rax
  const WCHAR *Identifier; // rax
  __int64 v27; // rcx
  __int64 v29; // rdx
  int v30; // [rsp+20h] [rbp-E0h]
  struct IAudioProcess *v31; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+3Ch] [rbp-C4h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A8h] BYREF
  char v38; // [rsp+60h] [rbp-A0h]
  _DWORD v39[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h]
  _QWORD v41[16]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v42[16]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v43[16]; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int16 *v44; // [rsp+200h] [rbp+100h] BYREF
  int v45; // [rsp+208h] [rbp+108h]
  int v46; // [rsp+20Ch] [rbp+10Ch]
  void *v47; // [rsp+210h] [rbp+110h]
  int v48; // [rsp+218h] [rbp+118h]
  int v49; // [rsp+21Ch] [rbp+11Ch]
  int *v50; // [rsp+220h] [rbp+120h]
  __int64 v51; // [rsp+228h] [rbp+128h]
  __int64 *v52; // [rsp+230h] [rbp+130h]
  __int64 v53; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+240h] [rbp+140h] BYREF
  int *v55; // [rsp+250h] [rbp+150h]
  __int64 v56; // [rsp+258h] [rbp+158h]
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v3 = *(unsigned __int8 *)(a1 + 188);
  v5 = *(unsigned int *)(a1 + 64);
  v7 = a3;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v41, 0, 0x40uLL);
    v41[9] = v5;
    LOWORD(v41[0]) = 120;
    HIDWORD(v41[5]) = 0x20000;
    *(_OWORD *)&v41[3] = AEWMIGUID_AUDIOSRV;
    WORD2(v41[0]) = 1026;
    v41[12] = 1LL;
    v41[6] = 0LL;
    LODWORD(v41[7]) = 0;
    v41[8] = a1;
    v41[10] = a2;
    v41[11] = v3;
    v41[13] = v7;
    v41[14] = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v41);
  }
  v38 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v14 = -2004287487;
    v29 = 1727LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v14,
      v30);
    goto LABEL_31;
  }
  if ( !*(_QWORD *)(a1 + 168) )
  {
    v14 = -2004287487;
    v29 = 1728LL;
    goto LABEL_37;
  }
  v8 = *(_QWORD *)(a1 + 192);
  if ( a2 != *(_QWORD *)(v8 + 48) )
  {
    v14 = -2147024809;
    v29 = 1729LL;
    goto LABEL_37;
  }
  if ( (_DWORD)v7 == 2 )
    *(_DWORD *)(a1 + 400) = 1;
  if ( *(_BYTE *)(v8 + 128) && (_DWORD)v7 == 2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
    }
LABEL_30:
    v14 = 0;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(a1 + 188) )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
    }
    if ( g_u32AEWMILogLevel >= 4 )
    {
      memset(v43, 0, 0x40uLL);
      HIDWORD(v43[5]) = 0x20000;
      LOWORD(v43[0]) = 120;
      v43[9] = *(unsigned int *)(a1 + 64);
      v43[11] = *(unsigned __int8 *)(a1 + 188);
      *(_OWORD *)&v43[3] = AEWMIGUID_AUDIOSRV;
      WORD2(v43[0]) = 1026;
      v43[6] = 0LL;
      LODWORD(v43[7]) = 0;
      v43[8] = a1;
      v43[10] = a2;
      v43[12] = 1LL;
      v43[13] = v7;
      v43[14] = 3LL;
      EtwLogTraceEvent(g_hAEWMITraceHandle, v43);
    }
    goto LABEL_30;
  }
  v9 = *(unsigned int *)(a1 + 64);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v42, 0, 0x40uLL);
    HIDWORD(v42[5]) = 0x20000;
    *(_OWORD *)&v42[3] = AEWMIGUID_AUDIOSRV;
    LOWORD(v42[0]) = 120;
    WORD2(v42[0]) = 1026;
    v42[6] = 0LL;
    LODWORD(v42[7]) = 0;
    v42[8] = a1;
    v42[9] = v9;
    v42[10] = a2;
    v42[11] = 0LL;
    v42[12] = 1LL;
    v42[13] = v7;
    v42[14] = 1LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v42);
  }
  v10 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 168);
  v11 = *(struct CAudioStream **)(a1 + 192);
  CriticalSection = (__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, struct CAudioStream *))v10->DebugInfo[5].CriticalSection;
  if ( CriticalSection == CAudioSession::StartStream )
    started = CAudioSession::StartStream(v10, v11);
  else
    started = CriticalSection(v10, v11);
  v14 = started;
  if ( started >= 0 )
  {
    *(_BYTE *)(a1 + 188) = 1;
    CVADServer::AcquirePowerReference((CVADServer *)a1);
    v15 = *(_QWORD *)(a1 + 192);
    v16 = 0LL;
    v31 = 0LL;
    if ( v15 && *(_QWORD *)(a1 + 168) )
    {
      v17 = (CAudioStream *)(v15 + 8);
      v31 = 0LL;
      v18 = *(__int64 (__fastcall **)(CAudioStream *, struct IAudioProcess **))(*(_QWORD *)(v15 + 8) + 24LL);
      if ( v18 == CAudioStream::GetProcess )
        Process = CAudioStream::GetProcess(v17, &v31);
      else
        Process = v18(v17, &v31);
      if ( Process >= 0 )
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
        if ( fPending )
        {
          Context = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        v20 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v20 > 4u )
        {
          v21 = (CAudioStream *)(*(_QWORD *)(a1 + 192) + 8LL);
          v50 = &v33;
          v33 = v7;
          v51 = 4LL;
          v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 80LL);
          if ( (char *)v22 == (char *)CAudioStream::GetUniqueStreamIdentifier )
            UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v21);
          else
            UniqueStreamIdentifier = v22();
          v24 = *(CAudioSession **)(a1 + 168);
          v36 = UniqueStreamIdentifier;
          v52 = &v36;
          v53 = 8LL;
          v25 = *(__int64 (**)(void))(*(_QWORD *)v24 + 64LL);
          if ( (char *)v25 == (char *)CAudioSession::GetIdentifier )
            Identifier = CAudioSession::GetIdentifier(v24);
          else
            Identifier = (const WCHAR *)v25();
          TlgCreateWsz(&pDesc, Identifier);
          v34 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v31 + 40LL))(v31);
          v55 = &v34;
          v56 = 4LL;
          v39[1] = 4;
          v44 = *(unsigned __int16 **)(v20 + 8);
          v39[0] = ((unsigned int)&unk_18010F445 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v27 = *(_QWORD *)(v20 + 32);
          v40 = 0LL;
          v45 = *v44;
          v47 = &unk_18010F450;
          v46 = 2;
          v48 = 70;
          v49 = 1;
          EtwEventWriteTransfer(v27, v39, 0LL, 0LL, 6, &v44);
        }
      }
      v16 = v31;
    }
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 48LL))(v16);
    IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x6D2,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)started,
    v30);
LABEL_31:
  if ( v38 )
    LeaveCriticalSection(lpCriticalSection);
  return v14;
}
