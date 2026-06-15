/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026000
 * Callers:
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800262F4 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 *     AudioServerStopStream @ 0x18002C4A0 (AudioServerStopStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019450 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x18001B020 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18001D370 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18001D390 (-GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x18002969C (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v5; // r15
  __int64 v7; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // rcx
  struct CAudioStream *v9; // rdx
  __int64 (*Flink)(void); // rax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  CAudioStream *v14; // rcx
  __int64 (__fastcall *v15)(CAudioStream *, struct IAudioProcess **); // rax
  int v16; // eax
  __int64 v17; // rdi
  CAudioStream *v18; // rcx
  __int64 (*v19)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v21; // rcx
  __int64 (*v22)(void); // rax
  const WCHAR *Identifier; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // rdx
  int v28; // [rsp+20h] [rbp-E0h]
  struct IAudioProcess *v29; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A8h] BYREF
  char v36; // [rsp+60h] [rbp-A0h]
  _DWORD v37[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h]
  _QWORD v39[16]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v40; // [rsp+100h] [rbp+0h] BYREF
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]
  void *v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+118h] [rbp+18h]
  int v45; // [rsp+11Ch] [rbp+1Ch]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  __int64 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  int *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v3 = *(unsigned __int8 *)(a1 + 188);
  v5 = *(unsigned int *)(a1 + 64);
  v7 = a3;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v39, 0, 0x40uLL);
    HIDWORD(v39[5]) = 0x20000;
    *(_OWORD *)&v39[3] = AEWMIGUID_AUDIOSRV;
    LOWORD(v39[0]) = 120;
    WORD2(v39[0]) = 1026;
    v39[6] = 0LL;
    LODWORD(v39[7]) = 0;
    v39[8] = a1;
    v39[9] = v5;
    v39[10] = a2;
    v39[11] = v3;
    v39[12] = 0LL;
    v39[13] = v7;
    v39[14] = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v39);
  }
  v36 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v12 = -2004287487;
    v27 = 1912LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v12,
      v28);
    goto LABEL_27;
  }
  v8 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 168);
  if ( !v8 )
  {
    v12 = -2004287487;
    v27 = 1913LL;
    goto LABEL_35;
  }
  v9 = *(struct CAudioStream **)(a1 + 192);
  if ( a2 != *((_QWORD *)v9 + 6) )
  {
    v12 = -2147024809;
    v27 = 1914LL;
    goto LABEL_35;
  }
  if ( (_DWORD)v7 == 2 )
    *(_DWORD *)(a1 + 400) = 0;
  if ( !*(_BYTE *)(a1 + 188) )
    goto LABEL_26;
  Flink = (__int64 (*)(void))v8->DebugInfo[5].ProcessLocksList.Flink;
  if ( (char *)Flink == (char *)CAudioSession::StopStream )
    v11 = CAudioSession::StopStream(v8, v9);
  else
    v11 = Flink();
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 192);
    *(_BYTE *)(a1 + 188) = 0;
    v29 = 0LL;
    if ( v13 && *(_QWORD *)(a1 + 168) )
    {
      v14 = (CAudioStream *)(v13 + 8);
      v29 = 0LL;
      v15 = *(__int64 (__fastcall **)(CAudioStream *, struct IAudioProcess **))(*(_QWORD *)v14 + 24LL);
      v16 = v15 == CAudioStream::GetProcess ? CAudioStream::GetProcess(v14, &v29) : v15(v14, &v29);
      if ( v16 >= 0 )
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
        v17 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v17 > 4u )
        {
          v18 = (CAudioStream *)(*(_QWORD *)(a1 + 192) + 8LL);
          v46 = &v31;
          v31 = v7;
          v47 = 4LL;
          v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 80LL);
          if ( (char *)v19 == (char *)CAudioStream::GetUniqueStreamIdentifier )
            UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v18);
          else
            UniqueStreamIdentifier = v19();
          v21 = *(CAudioSession **)(a1 + 168);
          v34 = UniqueStreamIdentifier;
          v48 = &v34;
          v49 = 8LL;
          v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 64LL);
          if ( (char *)v22 == (char *)CAudioSession::GetIdentifier )
            Identifier = CAudioSession::GetIdentifier(v21);
          else
            Identifier = (const WCHAR *)v22();
          TlgCreateWsz(&pDesc, Identifier);
          v32 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v29 + 40LL))(v29);
          v51 = &v32;
          v52 = 4LL;
          v37[1] = 4;
          v40 = *(unsigned __int16 **)(v17 + 8);
          v37[0] = ((unsigned int)&unk_18010F2ED - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v24 = *(_QWORD *)(v17 + 32);
          v38 = 0LL;
          v41 = *v40;
          v43 = &unk_18010F2F8;
          v42 = 2;
          v44 = 70;
          v45 = 1;
          EtwEventWriteTransfer(v24, v37, 0LL, 0LL, 6, &v40);
        }
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
LABEL_26:
    v12 = 0;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x784,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v11,
    v28);
LABEL_27:
  v25 = *(_QWORD *)(a1 + 448);
  *(_QWORD *)(a1 + 448) = 0LL;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  std::shared_ptr<CPowerReference>::reset(a1 + 408);
  if ( v36 )
    LeaveCriticalSection(lpCriticalSection);
  return v12;
}
