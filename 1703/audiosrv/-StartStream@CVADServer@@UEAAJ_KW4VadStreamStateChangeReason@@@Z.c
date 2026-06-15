/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001AD10
 * Callers:
 *     AudioServerStartStream @ 0x18002E4A0 (AudioServerStartStream.c)
 * Callees:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014FA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800164B0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180016580 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800166C0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018110 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AcquirePowerReferenceForStream@@YA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180026C28 (-AcquirePowerReferenceForStream@@YA-AV-$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 *     ?AEWMILOG_AUDIOSRV_STREAM_START_STOP@@YAXKPEAXEE_K111111@Z @ 0x18009FF64 (-AEWMILOG_AUDIOSRV_STREAM_START_STOP@@YAXKPEAXEE_K111111@Z.c)
 */

__int64 __fastcall CVADServer::StartStream(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  unsigned __int64 v7; // r15
  unsigned int v8; // r12d
  unsigned __int8 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdi
  CAudioSession *v13; // rcx
  struct CAudioStream *v14; // rdx
  __int64 (__fastcall *v15)(CAudioSession *, struct CAudioStream *); // rax
  int started; // eax
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  std::_Ref_count_base *v20; // rcx
  CAudioSession *v21; // rcx
  __int64 (__fastcall *v22)(CAudioSession *, unsigned int *); // rax
  int v23; // eax
  __int64 v24; // rdi
  CAudioStream *v25; // rcx
  __int64 (*v26)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v28; // rcx
  __int64 (*v29)(void); // rax
  __int64 Identifier; // rax
  const WCHAR *v31; // rcx
  const WCHAR *v32; // rdx
  __int64 v33; // rcx
  CAudioSession *v34; // rcx
  __int64 (__fastcall *v35)(CAudioSession *, struct IAudioProcess **); // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v39; // [rsp+60h] [rbp-A0h] BYREF
  struct IAudioProcess *v40; // [rsp+68h] [rbp-98h] BYREF
  WINBOOL fPending; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+74h] [rbp-8Ch] BYREF
  LPVOID Context; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-78h] BYREF
  char v46; // [rsp+90h] [rbp-70h]
  _DWORD v47[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h]
  _QWORD v49[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v50[16]; // [rsp+130h] [rbp+30h] BYREF
  char v51[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  std::_Ref_count_base *v52; // [rsp+1B8h] [rbp+B8h]
  unsigned __int16 *v53; // [rsp+1C0h] [rbp+C0h]
  int v54; // [rsp+1C8h] [rbp+C8h]
  int v55; // [rsp+1CCh] [rbp+CCh]
  void *v56; // [rsp+1D0h] [rbp+D0h]
  int v57; // [rsp+1D8h] [rbp+D8h]
  int v58; // [rsp+1DCh] [rbp+DCh]
  int *v59; // [rsp+1E0h] [rbp+E0h]
  __int64 v60; // [rsp+1E8h] [rbp+E8h]
  __int64 *v61; // [rsp+1F0h] [rbp+F0h]
  __int64 v62; // [rsp+1F8h] [rbp+F8h]
  const WCHAR *v63; // [rsp+200h] [rbp+100h]
  int v64; // [rsp+208h] [rbp+108h]
  int v65; // [rsp+20Ch] [rbp+10Ch]
  unsigned int *v66; // [rsp+210h] [rbp+110h]
  __int64 v67; // [rsp+218h] [rbp+118h]

  v3 = *(unsigned __int8 *)(a1 + 188);
  v5 = *(unsigned int *)(a1 + 64);
  v7 = a3;
  v8 = 0;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v49, 0, 0x40uLL);
    HIDWORD(v49[5]) = 0x20000;
    *(_OWORD *)&v49[3] = AEWMIGUID_AUDIOSRV;
    LOWORD(v49[0]) = 120;
    WORD2(v49[0]) = 1026;
    v49[6] = 0LL;
    LODWORD(v49[7]) = 0;
    v49[8] = a1;
    v49[9] = v5;
    v49[10] = a2;
    v49[11] = v3;
    v49[12] = 1LL;
    v49[13] = v7;
    v49[14] = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v49);
  }
  v46 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*(_DWORD *)(a1 + 184) || !*(_QWORD *)(a1 + 168) )
  {
    v8 = -2004287487;
    goto LABEL_59;
  }
  v10 = *(_QWORD *)(a1 + 192);
  v11 = *(_QWORD *)(v10 + 48);
  if ( a2 != v11 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, a2, v11);
    }
    v8 = -2147024809;
    goto LABEL_59;
  }
  if ( (_DWORD)v7 == 2 )
    *(_DWORD *)(a1 + 392) = 1;
  if ( *(_BYTE *)(v10 + 128) && (_DWORD)v7 == 2 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids);
    }
    goto LABEL_40;
  }
  if ( !*(_BYTE *)(a1 + 188) )
  {
    v12 = *(unsigned int *)(a1 + 64);
    if ( g_u32AEWMILogLevel >= 4 )
    {
      memset(v50, 0, 0x40uLL);
      HIDWORD(v50[5]) = 0x20000;
      *(_OWORD *)&v50[3] = AEWMIGUID_AUDIOSRV;
      LOWORD(v50[0]) = 120;
      WORD2(v50[0]) = 1026;
      v50[6] = 0LL;
      LODWORD(v50[7]) = 0;
      v50[8] = a1;
      v50[9] = v12;
      v50[10] = a2;
      v50[11] = 0LL;
      v50[12] = 1LL;
      v50[13] = v7;
      v50[14] = 1LL;
      EtwLogTraceEvent(g_hAEWMITraceHandle, v50);
    }
    v13 = *(CAudioSession **)(a1 + 168);
    v14 = *(struct CAudioStream **)(a1 + 192);
    v15 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *))(*(_QWORD *)v13 + 256LL);
    if ( v15 == CAudioSession::StartStream )
      started = CAudioSession::StartStream(v13, v14);
    else
      started = v15(v13, v14);
    v8 = started;
    if ( started >= 0 )
    {
      *(_BYTE *)(a1 + 188) = 1;
      if ( !*(_QWORD *)(a1 + 400) )
      {
        v17 = (__int64 *)AcquirePowerReferenceForStream(v51, a1);
        v18 = *v17;
        v19 = v17[1];
        *v17 = 0LL;
        v17[1] = 0LL;
        v20 = *(std::_Ref_count_base **)(a1 + 408);
        *(_QWORD *)(a1 + 408) = v19;
        *(_QWORD *)(a1 + 400) = v18;
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
        if ( v52 )
          std::_Ref_count_base::_Decref(v52);
      }
      if ( *(_QWORD *)(a1 + 192) )
      {
        v21 = *(CAudioSession **)(a1 + 168);
        if ( v21 )
        {
          v22 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v21 + 128LL);
          v23 = v22 == CAudioSession::GetProcessId ? CAudioSession::GetProcessId(v21, &v39) : v22(v21, &v39);
          if ( v23 >= 0 )
          {
            InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
            if ( fPending )
            {
              Context = qword_18012BF30;
              qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
              qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
              InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
            }
            v24 = *((_QWORD *)Context + 1);
            if ( *(_DWORD *)v24 > 4u )
            {
              v25 = (CAudioStream *)(*(_QWORD *)(a1 + 192) + 8LL);
              v59 = &v42;
              v42 = v7;
              v60 = 4LL;
              v26 = *(__int64 (**)(void))(*(_QWORD *)v25 + 72LL);
              if ( (char *)v26 == (char *)CAudioStream::GetUniqueStreamIdentifier )
                UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v25);
              else
                UniqueStreamIdentifier = v26();
              v28 = *(CAudioSession **)(a1 + 168);
              v44 = UniqueStreamIdentifier;
              v61 = &v44;
              v62 = 8LL;
              v29 = *(__int64 (**)(void))(*(_QWORD *)v28 + 64LL);
              if ( (char *)v29 == (char *)CAudioSession::GetIdentifier )
                Identifier = (__int64)CAudioSession::GetIdentifier(v28);
              else
                Identifier = v29();
              v31 = (const WCHAR *)Identifier;
              v32 = &word_1800EAD74;
              LODWORD(Identifier) = 0;
              if ( v31 )
              {
                v32 = v31;
                Identifier = -1LL;
                do
                  ++Identifier;
                while ( v31[Identifier] );
              }
              v63 = v32;
              v64 = 2 * Identifier + 2;
              v66 = &v39;
              v65 = 0;
              v67 = 4LL;
              v47[1] = 4;
              v53 = *(unsigned __int16 **)(v24 + 8);
              v47[0] = ((unsigned int)&unk_1800F9297 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
              v33 = *(_QWORD *)(v24 + 32);
              v48 = 0LL;
              v54 = *v53;
              v56 = &unk_1800F92A2;
              v55 = 2;
              v57 = 77;
              v58 = 1;
              EtwEventWriteTransfer(v33, v47, 0LL, 0LL);
            }
          }
        }
      }
      v34 = *(CAudioSession **)(a1 + 168);
      v40 = 0LL;
      v35 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess **))(*(_QWORD *)v34 + 24LL);
      if ( v35 == CAudioSession::GetProcess )
        CAudioSession::GetProcess(v34, &v40);
      else
        v35(v34, &v40);
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v40 + 48LL))(v40);
      IsTSSessionIdRegisterVolumeTrackerForSessionSupported(v37, v36);
      if ( v40 )
        (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v40 + 16LL))(v40);
      goto LABEL_40;
    }
LABEL_59:
    AudSrvTraceLoggingErrorHelper("CVADServer::StartStream", 0x744u, v8);
    goto LABEL_40;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids);
  }
  AEWMILOG_AUDIOSRV_STREAM_START_STOP(
    *(unsigned __int8 *)(a1 + 188),
    (void *)*(unsigned int *)(a1 + 64),
    v11,
    v9,
    a1,
    *(unsigned int *)(a1 + 64),
    a2,
    *(unsigned __int8 *)(a1 + 188),
    1uLL,
    v7,
    3uLL);
LABEL_40:
  if ( v46 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
