/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001A650
 * Callers:
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x180002040 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 *     AudioServerStopStream @ 0x18002E3D0 (AudioServerStopStream.c)
 * Callees:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014D50 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800164B0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800166C0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018110 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Delete_this@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x180027340 (-_Delete_this@-$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x1800273B0 (-_Destroy@-$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r12
  __int64 v7; // r15
  int v8; // esi
  CAudioSession *v9; // rcx
  struct CAudioStream *v10; // rdx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(CAudioSession *, struct CAudioStream *); // rax
  int v13; // eax
  CAudioSession *v14; // rcx
  __int64 (__fastcall *v15)(CAudioSession *, unsigned int *); // rax
  int v16; // eax
  __int64 v17; // r14
  CAudioStream *v18; // rcx
  __int64 (*v19)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v21; // rcx
  __int64 (*v22)(void); // rax
  __int64 Identifier; // rax
  const WCHAR *v24; // rcx
  const WCHAR *v25; // rdx
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rcx
  volatile signed __int32 *v28; // rbx
  void (__fastcall *v29)(volatile signed __int32 *); // rax
  void (__fastcall *v30)(_QWORD); // rax
  unsigned int v32; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  int v34; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B0h] BYREF
  char v38; // [rsp+58h] [rbp-A8h]
  _DWORD v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  volatile signed __int32 *v41; // [rsp+78h] [rbp-88h]
  _QWORD v42[16]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]
  void *v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  int *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  const WCHAR *v53; // [rsp+140h] [rbp+40h]
  int v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]

  v3 = *(unsigned __int8 *)(a1 + 188);
  v5 = *(unsigned int *)(a1 + 64);
  v7 = a3;
  v8 = 0;
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
    v42[9] = v5;
    v42[10] = a2;
    v42[11] = v3;
    v42[12] = 0LL;
    v42[13] = v7;
    v42[14] = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v42);
  }
  v38 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *(_DWORD *)(a1 + 184) )
  {
    v9 = *(CAudioSession **)(a1 + 168);
    if ( v9 )
    {
      v10 = *(struct CAudioStream **)(a1 + 192);
      v11 = *((_QWORD *)v10 + 6);
      if ( a2 == v11 )
      {
        if ( (_DWORD)v7 == 2 )
          *(_DWORD *)(a1 + 392) = 0;
        if ( *(_BYTE *)(a1 + 188) )
        {
          v12 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *))(*(_QWORD *)v9 + 264LL);
          v13 = v12 == CAudioSession::StopStream ? CAudioSession::StopStream(v9, v10) : ((__int64 (*)(void))v12)();
          v8 = v13;
          if ( v13 >= 0 )
          {
            *(_BYTE *)(a1 + 188) = 0;
            if ( *(_QWORD *)(a1 + 192) )
            {
              v14 = *(CAudioSession **)(a1 + 168);
              if ( v14 )
              {
                v15 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v14 + 128LL);
                v16 = v15 == CAudioSession::GetProcessId ? CAudioSession::GetProcessId(v14, &v32) : v15(v14, &v32);
                if ( v16 >= 0 )
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
                  v17 = *((_QWORD *)Context + 1);
                  if ( *(_DWORD *)v17 > 4u )
                  {
                    v18 = (CAudioStream *)(*(_QWORD *)(a1 + 192) + 8LL);
                    v49 = &v34;
                    v34 = v7;
                    v50 = 4LL;
                    v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 72LL);
                    if ( (char *)v19 == (char *)CAudioStream::GetUniqueStreamIdentifier )
                      UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v18);
                    else
                      UniqueStreamIdentifier = v19();
                    v21 = *(CAudioSession **)(a1 + 168);
                    v36 = UniqueStreamIdentifier;
                    v51 = &v36;
                    v52 = 8LL;
                    v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 64LL);
                    if ( (char *)v22 == (char *)CAudioSession::GetIdentifier )
                      Identifier = (__int64)CAudioSession::GetIdentifier(v21);
                    else
                      Identifier = v22();
                    v24 = (const WCHAR *)Identifier;
                    v25 = &word_1800EAD74;
                    LODWORD(Identifier) = 0;
                    if ( v24 )
                    {
                      v25 = v24;
                      Identifier = -1LL;
                      do
                        ++Identifier;
                      while ( v24[Identifier] );
                    }
                    v53 = v25;
                    v54 = 2 * Identifier + 2;
                    v56 = &v32;
                    v55 = 0;
                    v57 = 4LL;
                    v39[1] = 4;
                    v43 = *(unsigned __int16 **)(v17 + 8);
                    v39[0] = ((unsigned int)&unk_1800F923E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                    v26 = *(_QWORD *)(v17 + 32);
                    v40 = 0LL;
                    v44 = *v43;
                    v46 = &unk_1800F9249;
                    v45 = 2;
                    v47 = 77;
                    v48 = 1;
                    EtwEventWriteTransfer(v26, v39, 0LL, 0LL);
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            45LL,
            &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
            a2,
            v11);
        }
        v8 = -2147024809;
      }
    }
    else
    {
      v8 = -2004287487;
    }
  }
  else
  {
    v8 = -2004287487;
  }
  v27 = *(volatile signed __int32 **)(a1 + 408);
  *(_QWORD *)(a1 + 408) = 0LL;
  v41 = v27;
  *(_QWORD *)(a1 + 400) = 0LL;
  if ( v27 && _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
  {
    v28 = v41;
    v29 = **(void (__fastcall ***)(volatile signed __int32 *))v41;
    if ( (char *)v29 == (char *)std::_Ref_count_obj<CPowerReference>::_Destroy )
      std::_Ref_count_obj<CPowerReference>::_Destroy(v41);
    else
      v29(v41);
    if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
    {
      v30 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)v41 + 8LL);
      if ( (char *)v30 == (char *)std::_Ref_count_obj<CPowerReference>::_Delete_this )
        std::_Ref_count_obj<CPowerReference>::_Delete_this(v41, std::_Ref_count_obj<CPowerReference>::_Delete_this);
      else
        ((void (__fastcall *)(volatile signed __int32 *, __int64 (__fastcall *)(_QWORD, _QWORD)))v30)(
          v41,
          std::_Ref_count_obj<CPowerReference>::_Delete_this);
    }
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::StopStream", 0x7B3u, v8);
  if ( v38 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
