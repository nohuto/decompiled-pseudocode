/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180023500
 * Callers:
 *     AudioServerStartStream @ 0x180023310 (AudioServerStartStream.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800260A0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18002F700 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800354D0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800C1E94 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::StartStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rsi
  unsigned __int64 CurrentThreadId; // rdi
  signed __int64 v8; // rcx
  signed __int64 *v9; // rsi
  CAudioSession *v10; // rcx
  __int64 v11; // rdx
  __int64 (*v12)(void); // rax
  int started; // eax
  unsigned int v14; // edi
  std::_Ref_count_base *v15; // rdx
  std::_Ref_count_base *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  CAudioStream *v19; // rcx
  __int64 (__fastcall *v20)(CAudioStream *__hidden, struct IAudioProcess **); // rax
  __int64 v21; // rdi
  CAudioStream *v22; // rcx
  __int64 (*v23)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v25; // rcx
  __int64 (*v26)(void); // rax
  __int64 Identifier; // rax
  const WCHAR *v28; // rcx
  const WCHAR *v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v35; // rax
  signed __int64 v36; // rax
  CAudioSessionManager *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  void *v40; // r8
  int v41; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v50; // [rsp+70h] [rbp-90h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-88h] BYREF
  char v52; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall **v53)(); // [rsp+90h] [rbp-70h] BYREF
  __int128 v54; // [rsp+98h] [rbp-68h]
  _QWORD v55[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-48h]
  DWORD v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  __int64 v59; // [rsp+D0h] [rbp-30h] BYREF
  union _RTL_RUN_ONCE *v60; // [rsp+D8h] [rbp-28h] BYREF
  int v61; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v62; // [rsp+F0h] [rbp-10h] BYREF
  int v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FCh] [rbp-4h]
  void *v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+10Ch] [rbp+Ch]
  int *v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  __int64 *v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  const WCHAR *v72; // [rsp+130h] [rbp+30h]
  int v73; // [rsp+138h] [rbp+38h]
  int v74; // [rsp+13Ch] [rbp+3Ch]
  int *v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 224);
  v52 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = wil::details::g_pThreadFailureCallbacks;
  *(_QWORD *)&v48 = &v42;
  *((_QWORD *)&v48 + 1) = a1;
  v53 = off_180121720;
  v55[1] = &v53;
  LOBYTE(v42) = 0;
  v55[0] = 0LL;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v54 = v48;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_54;
  CurrentThreadId = GetCurrentThreadId();
  v8 = *(_QWORD *)(v6 + 8 * (CurrentThreadId % 0xA));
  v9 = (signed __int64 *)(v6 + 8 * (CurrentThreadId % 0xA));
  if ( !v8 )
  {
LABEL_50:
    ProcessHeap = GetProcessHeap();
    v35 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v8 = (signed __int64)v35;
    if ( v35 )
    {
      *(_QWORD *)v35 = 0LL;
      v35[2] = CurrentThreadId;
      *((_QWORD *)v35 + 2) = 0LL;
      _m_prefetchw(v9);
      do
      {
        v36 = *v9;
        *(_QWORD *)(v8 + 16) = *v9;
      }
      while ( v36 != _InterlockedCompareExchange64(v9, v8, v36) );
      goto LABEL_4;
    }
LABEL_54:
    v8 = 0LL;
    goto LABEL_4;
  }
  while ( *(_DWORD *)(v8 + 8) != (_DWORD)CurrentThreadId )
  {
    v8 = *(_QWORD *)(v8 + 16);
    if ( !v8 )
      goto LABEL_50;
  }
LABEL_4:
  v55[0] = v8;
  if ( v8 )
  {
    v56 = *(_QWORD *)v8;
    *(_QWORD *)v8 = v55;
    v57 = GetCurrentThreadId();
  }
  if ( *(_DWORD *)(a1 + 184) )
  {
    v10 = *(CAudioSession **)(a1 + 168);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 192);
      if ( a2 == *(_QWORD *)(v11 + 56) )
      {
        if ( a3 == 2 )
          *(_DWORD *)(a1 + 416) = 1;
        if ( *(_BYTE *)(v11 + 128) && a3 == 2 )
        {
          v37 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
          {
            goto LABEL_39;
          }
          v38 = 35LL;
          goto LABEL_77;
        }
        if ( *(_BYTE *)(a1 + 188) )
        {
          v37 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
          {
            goto LABEL_39;
          }
          v38 = 36LL;
LABEL_77:
          WPP_SF_(*((_QWORD *)v37 + 2), v38, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
LABEL_39:
          v14 = 0;
          goto LABEL_40;
        }
        v12 = *(__int64 (**)(void))(*(_QWORD *)v10 + 256LL);
        if ( (char *)v12 == (char *)CAudioSession::StartStream )
          started = CAudioSession::StartStream(v10, (struct CAudioStream *)v11);
        else
          started = v12();
        v14 = started;
        if ( started >= 0 )
        {
          *(_BYTE *)(a1 + 188) = 1;
          *(_BYTE *)(a1 + 200) = 0;
          if ( !*(_QWORD *)(a1 + 424) )
          {
            CPowerReferenceManager::AcquirePowerReferenceForStream(g_powerReferenceManager, &v49, a1);
            v15 = v50;
            *(_QWORD *)(a1 + 424) = v49;
            v16 = *(std::_Ref_count_base **)(a1 + 432);
            v49 = 0LL;
            v50 = 0LL;
            *(_QWORD *)(a1 + 432) = v15;
            if ( v16 )
            {
              std::_Ref_count_base::_Decref(v16);
              if ( v50 )
                std::_Ref_count_base::_Decref(v50);
            }
          }
          v17 = *(_QWORD *)(a1 + 192);
          v18 = 0LL;
          v43 = 0LL;
          if ( !v17 || !*(_QWORD *)(a1 + 168) )
            goto LABEL_35;
          v19 = (CAudioStream *)(v17 + 8);
          v43 = 0LL;
          v20 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IAudioProcess **))(*(_QWORD *)(v17 + 8) + 24LL);
          if ( v20 == CAudioStream::GetProcess )
          {
            v43 = *((_QWORD *)v19 + 9);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
          }
          else if ( (int)v20(v19, (struct IAudioProcess **)&v43) < 0 )
          {
LABEL_34:
            v18 = v43;
LABEL_35:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
            IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
            if ( QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 472)) )
              *(_QWORD *)(a1 + 480) = *(_QWORD *)(a1 + 472);
            if ( v43 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
            goto LABEL_39;
          }
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            v60 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
            Context = &qword_18018A2A0;
            qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
            qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            v61 = 0;
            wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v60, v39, v40);
          }
          v21 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v21 > 4u )
          {
            v22 = (CAudioStream *)(*(_QWORD *)(a1 + 192) + 8LL);
            v68 = &v45;
            v45 = a3;
            v69 = 4LL;
            v23 = *(__int64 (**)(void))(*(_QWORD *)v22 + 80LL);
            if ( (char *)v23 == (char *)CAudioStream::GetUniqueStreamIdentifier )
              UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v22);
            else
              UniqueStreamIdentifier = v23();
            v25 = *(CAudioSession **)(a1 + 168);
            v59 = UniqueStreamIdentifier;
            v70 = &v59;
            v71 = 8LL;
            v26 = *(__int64 (**)(void))(*(_QWORD *)v25 + 64LL);
            if ( (char *)v26 == (char *)CAudioSession::GetIdentifier )
              Identifier = (__int64)CAudioSession::GetIdentifier(v25);
            else
              Identifier = v26();
            v28 = (const WCHAR *)Identifier;
            v29 = &word_180133238;
            LODWORD(Identifier) = 0;
            if ( v28 )
            {
              v29 = v28;
              Identifier = -1LL;
              do
                ++Identifier;
              while ( v28[Identifier] );
            }
            v72 = v29;
            v73 = 2 * Identifier + 2;
            v74 = 0;
            v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 40LL))(v43);
            v75 = &v46;
            v76 = 4LL;
            DWORD1(v48) = 4;
            v62 = *(unsigned __int16 **)(v21 + 8);
            LODWORD(v48) = ((unsigned int)&unk_18014592F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v30 = *(_QWORD *)(v21 + 32);
            *((_QWORD *)&v48 + 1) = 0LL;
            v63 = *v62;
            v65 = &unk_18014593A;
            v64 = 2;
            v66 = 70;
            v67 = 1;
            EtwEventWriteTransfer(v30, &v48, 0LL, 0LL, 6, &v62, v42);
          }
          goto LABEL_34;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x73F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)started,
          v41);
      }
      else
      {
        v14 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x72F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x80070057LL,
          v41);
      }
    }
    else
    {
      v14 = -2004287487;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890001LL,
        v41);
    }
  }
  else
  {
    v14 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v41);
  }
LABEL_40:
  if ( v57 )
  {
    if ( v57 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
        (const char *)0x8007029CLL,
        v41);
    v31 = (_QWORD *)v55[0];
    v57 = 0;
    v32 = *(_QWORD **)v55[0];
    if ( *(_QWORD *)v55[0] )
    {
      while ( v32 != v55 )
      {
        v31 = v32 + 2;
        v55[0] = v32 + 2;
        v32 = (_QWORD *)v32[2];
        if ( !v32 )
          goto LABEL_46;
      }
      *v31 = v56;
    }
LABEL_46:
    v55[0] = 0LL;
  }
  if ( v52 )
    LeaveCriticalSection(lpCriticalSection);
  return v14;
}
