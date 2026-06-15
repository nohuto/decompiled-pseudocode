/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180048360
 * Callers:
 *     AudioServerStopStream @ 0x180043420 (AudioServerStopStream.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x18002A2E0 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18002F700 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18002F730 (-GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800354D0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?_Delete_this@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x180049090 (-_Delete_this@-$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x180049100 (-_Destroy@-$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009726C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___ @ 0x180099E18 (wil--details--lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___--_lambda_call__lambda_9872.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800C1E94 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r14
  DWORD CurrentThreadId; // esi
  unsigned __int64 v8; // rdi
  signed __int64 v9; // rcx
  signed int v10; // edi
  CAudioSession *v11; // rcx
  struct CAudioStream *v12; // rdx
  __int64 (*v13)(void); // rax
  int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // rax
  CAudioStream *v17; // rcx
  __int64 (__fastcall *v18)(CAudioStream *, struct IAudioProcess **); // rax
  int Process; // eax
  __int64 v20; // r14
  CAudioStream *v21; // rcx
  __int64 (*v22)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v24; // rcx
  __int64 (*v25)(void); // rax
  __int64 Identifier; // rax
  const WCHAR *v27; // rcx
  const WCHAR *v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  unsigned __int16 *v32; // rdx
  __int64 (__fastcall *v33)(RTL_SRWLOCK *, unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  double v34; // xmm6_8
  __int64 v35; // rdx
  struct CEndpointCharacteristics *v36; // r14
  AudioJournal *v37; // rcx
  int StreamInfo; // eax
  BYTE *v39; // r14
  __int64 v40; // rcx
  const WCHAR *v41; // r12
  DWORD v42; // r13d
  LSTATUS v43; // eax
  LSTATUS v44; // eax
  void (*v45)(void); // rax
  __int64 v46; // rcx
  __int64 v47; // rdi
  void (__fastcall *v48)(__int64); // rax
  void (__fastcall *v49)(__int64); // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v52; // rax
  signed __int64 v53; // rax
  __int64 v54; // rdx
  void *v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rdx
  int dwOptions; // [rsp+28h] [rbp-E0h]
  int dwOptionsa; // [rsp+28h] [rbp-E0h]
  int dwOptionsb; // [rsp+28h] [rbp-E0h]
  int v62[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct IAudioProcess *v63; // [rsp+60h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-A0h] BYREF
  struct CEndpointCharacteristics *v65; // [rsp+70h] [rbp-98h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp-90h] BYREF
  int v67; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v68; // [rsp+80h] [rbp-88h] BYREF
  LPVOID Context; // [rsp+88h] [rbp-80h] BYREF
  BYTE *lpData; // [rsp+90h] [rbp-78h] BYREF
  struct _RTL_CRITICAL_SECTION *v71; // [rsp+98h] [rbp-70h] BYREF
  __int128 v72; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v73; // [rsp+B0h] [rbp-58h] BYREF
  char v74; // [rsp+C0h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C8h] [rbp-40h] BYREF
  char v76; // [rsp+D0h] [rbp-38h]
  __int128 v77; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v78; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v79)(); // [rsp+F8h] [rbp-10h] BYREF
  __int128 v80; // [rsp+100h] [rbp-8h]
  __int128 v81; // [rsp+110h] [rbp+8h]
  _QWORD v82[2]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v83; // [rsp+130h] [rbp+28h]
  DWORD v84; // [rsp+138h] [rbp+30h]
  __int64 v85; // [rsp+140h] [rbp+38h]
  __int64 v86; // [rsp+148h] [rbp+40h] BYREF
  union _RTL_RUN_ONCE *v87; // [rsp+150h] [rbp+48h] BYREF
  int v88; // [rsp+158h] [rbp+50h]
  unsigned __int16 *v89; // [rsp+168h] [rbp+60h] BYREF
  int v90; // [rsp+170h] [rbp+68h]
  int v91; // [rsp+174h] [rbp+6Ch]
  void *v92; // [rsp+178h] [rbp+70h]
  int v93; // [rsp+180h] [rbp+78h]
  int v94; // [rsp+184h] [rbp+7Ch]
  int *v95; // [rsp+188h] [rbp+80h]
  __int64 v96; // [rsp+190h] [rbp+88h]
  __int64 *v97; // [rsp+198h] [rbp+90h]
  __int64 v98; // [rsp+1A0h] [rbp+98h]
  const WCHAR *v99; // [rsp+1A8h] [rbp+A0h]
  int v100; // [rsp+1B0h] [rbp+A8h]
  int v101; // [rsp+1B4h] [rbp+ACh]
  int *v102; // [rsp+1B8h] [rbp+B0h]
  __int64 v103; // [rsp+1C0h] [rbp+B8h]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 224);
  v76 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = wil::details::g_pThreadFailureCallbacks;
  *(_QWORD *)&v72 = v62;
  *((_QWORD *)&v72 + 1) = a1;
  *(_QWORD *)&v77 = (char *)v62 + 1;
  *((_QWORD *)&v77 + 1) = v62;
  *((_QWORD *)&v78 + 1) = &v73;
  *(_QWORD *)&v78 = a1;
  v79 = off_1801203E8;
  v82[1] = &v79;
  LOWORD(v62[0]) = 0;
  v74 = 1;
  v82[0] = 0LL;
  v83 = 0LL;
  v84 = 0;
  v85 = 0LL;
  v73 = v72;
  v81 = v78;
  v80 = v77;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_85;
  CurrentThreadId = GetCurrentThreadId();
  v8 = CurrentThreadId % 0xAuLL;
  v9 = *(_QWORD *)(v6 + 8 * v8);
  if ( !v9 )
  {
LABEL_81:
    ProcessHeap = GetProcessHeap();
    v52 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v9 = (signed __int64)v52;
    if ( v52 )
    {
      *(_QWORD *)v52 = 0LL;
      v52[2] = CurrentThreadId;
      *((_QWORD *)v52 + 2) = 0LL;
      _m_prefetchw((const void *)(v6 + 8 * v8));
      do
      {
        v53 = *(_QWORD *)(v6 + 8 * v8);
        *(_QWORD *)(v9 + 16) = v53;
      }
      while ( v53 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8 * v8), v9, v53) );
      goto LABEL_4;
    }
LABEL_85:
    v9 = 0LL;
    goto LABEL_4;
  }
  while ( *(_DWORD *)(v9 + 8) != CurrentThreadId )
  {
    v9 = *(_QWORD *)(v9 + 16);
    if ( !v9 )
      goto LABEL_81;
  }
LABEL_4:
  v82[0] = v9;
  if ( v9 )
  {
    v83 = *(_QWORD *)v9;
    *(_QWORD *)v9 = v82;
    v84 = GetCurrentThreadId();
  }
  v10 = -2147024809;
  if ( *(_DWORD *)(a1 + 184) )
  {
    v11 = *(CAudioSession **)(a1 + 168);
    if ( v11 )
    {
      v12 = *(struct CAudioStream **)(a1 + 192);
      if ( a2 == *((_QWORD *)v12 + 7) )
      {
        if ( a3 == 2 )
          *(_DWORD *)(a1 + 416) = 0;
        if ( !*(_BYTE *)(a1 + 188) )
          goto LABEL_34;
        v13 = *(__int64 (**)(void))(*(_QWORD *)v11 + 264LL);
        if ( (char *)v13 == (char *)CAudioSession::StopStream )
          v14 = CAudioSession::StopStream(v11, v12);
        else
          v14 = v13();
        v15 = v14;
        if ( v14 >= 0 )
        {
          *(_BYTE *)(a1 + 188) = 0;
          QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 480));
          v16 = *(_QWORD *)(a1 + 192);
          LOBYTE(v62[0]) = 1;
          if ( v16 && *(_QWORD *)(a1 + 168) )
          {
            v17 = (CAudioStream *)(v16 + 8);
            v63 = 0LL;
            v18 = *(__int64 (__fastcall **)(CAudioStream *, struct IAudioProcess **))(*(_QWORD *)(v16 + 8) + 24LL);
            if ( v18 == CAudioStream::GetProcess )
              Process = CAudioStream::GetProcess(v17, &v63);
            else
              Process = v18(v17, &v63);
            if ( Process >= 0 )
            {
              Context = 0LL;
              if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
                && fPending )
              {
                v87 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
                Context = &qword_18018A2A0;
                qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
                qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                v88 = 0;
                wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(
                  (unsigned int *)&v87,
                  v54,
                  v55);
              }
              v20 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v20 > 4u )
              {
                v21 = (CAudioStream *)(*(_QWORD *)(a1 + 192) + 8LL);
                v95 = &v67;
                v67 = a3;
                v96 = 4LL;
                v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 80LL);
                if ( (char *)v22 == (char *)CAudioStream::GetUniqueStreamIdentifier )
                  UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v21);
                else
                  UniqueStreamIdentifier = v22();
                v24 = *(CAudioSession **)(a1 + 168);
                v86 = UniqueStreamIdentifier;
                v97 = &v86;
                v98 = 8LL;
                v25 = *(__int64 (**)(void))(*(_QWORD *)v24 + 64LL);
                if ( (char *)v25 == (char *)CAudioSession::GetIdentifier )
                  Identifier = (__int64)CAudioSession::GetIdentifier(v24);
                else
                  Identifier = v25();
                v27 = (const WCHAR *)Identifier;
                v28 = &word_180133238;
                LODWORD(Identifier) = 0;
                if ( v27 )
                {
                  v28 = v27;
                  Identifier = -1LL;
                  do
                    ++Identifier;
                  while ( v27[Identifier] );
                }
                v100 = 2 * Identifier + 2;
                v99 = v28;
                v101 = 0;
                v68 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v63 + 40LL))(v63);
                v102 = &v68;
                v103 = 4LL;
                DWORD1(v72) = 4;
                v89 = *(unsigned __int16 **)(v20 + 8);
                LODWORD(v72) = ((unsigned int)&unk_1801457D7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                v29 = *(_QWORD *)(v20 + 32);
                *((_QWORD *)&v72 + 1) = 0LL;
                v90 = *v89;
                v92 = &unk_1801457E2;
                v91 = 2;
                v93 = 70;
                v94 = 1;
                EtwEventWriteTransfer(v29, &v72, 0LL, 0LL, 6, &v89);
              }
            }
            if ( v63 )
              (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v63 + 16LL))(v63);
          }
LABEL_34:
          v15 = 0;
          goto LABEL_35;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x811,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v14,
          dwOptions);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x807,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x80070057LL,
          dwOptions);
        v15 = -2147024809;
      }
    }
    else
    {
      v15 = -2004287487;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x806,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890001LL,
        dwOptions);
    }
  }
  else
  {
    v15 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x805,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      dwOptions);
  }
LABEL_35:
  if ( v84 )
  {
    if ( v84 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
        (const char *)0x8007029CLL,
        dwOptions);
    v30 = (_QWORD *)v82[0];
    v84 = 0;
    v31 = *(_QWORD **)v82[0];
    if ( *(_QWORD *)v82[0] )
    {
      while ( v31 != v82 )
      {
        v30 = v31 + 2;
        v82[0] = v31 + 2;
        v31 = (_QWORD *)v31[2];
        if ( !v31 )
          goto LABEL_41;
      }
      *v30 = v83;
    }
LABEL_41:
    v82[0] = 0LL;
  }
  if ( v74 )
  {
    v74 = 0;
    if ( *(_BYTE *)v73 )
    {
      v65 = 0LL;
      v32 = *(unsigned __int16 **)(*((_QWORD *)&v73 + 1) + 216LL);
      v33 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
      if ( v33 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
        CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
          (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
          v32,
          0,
          &v65);
      else
        v33((RTL_SRWLOCK *)g_pEndpointCharacteristicsCache, v32, 0, &v65);
      v34 = 0.0;
      v35 = *(_QWORD *)(*((_QWORD *)&v73 + 1) + 488LL);
      if ( v35 )
        v34 = (double)(*(_DWORD *)(*((_QWORD *)&v73 + 1) + 480LL) - *(_DWORD *)(*((_QWORD *)&v73 + 1) + 472LL))
            / (double)(int)v35;
      v36 = v65;
      EnterCriticalSection(&stru_18018A398);
      v71 = &stru_18018A398;
      if ( g_AudioJournal )
      {
        StreamInfo = AudioJournal::FindStreamInfo(v37, v36, (struct AudioJournal::StreamInfo **)&lpData, &v62[1]);
        if ( StreamInfo >= 0 )
        {
          *(double *)&lpData[200 * v62[1] + 168] = v34 + *(double *)&lpData[200 * v62[1] + 168];
          v39 = lpData;
          v40 = 200LL * v62[1];
          if ( !*(_DWORD *)&lpData[v40 + 148] )
          {
            *(_DWORD *)&lpData[v40 + 148] = 1;
            v39 = lpData;
          }
          if ( v39 == (BYTE *)&unk_18018A478 )
          {
            v41 = L"Render";
            v42 = 600;
          }
          else if ( v39 == (BYTE *)&unk_18018A6D0 )
          {
            v41 = L"Capture";
            v42 = 400;
          }
          else
          {
            if ( v39 != (BYTE *)&unk_18018A860 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1EF,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
                (const char *)0x80070057LL,
                dwOptions);
LABEL_107:
              v56 = (unsigned int)v10;
              v57 = 338LL;
              goto LABEL_108;
            }
            v41 = L"UnknownStream";
            v42 = 200;
          }
          BYTE8(v77) = 1;
          *(_QWORD *)&v77 = &hKey;
          hKey = 0LL;
          v43 = RegCreateKeyExW(
                  HKEY_CURRENT_USER,
                  L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Audio\\Journal",
                  0,
                  0LL,
                  0,
                  2u,
                  0LL,
                  &hKey,
                  0LL);
          v10 = v43;
          if ( v43 > 0 )
            v10 = (unsigned __int16)v43 | 0x80070000;
          if ( v10 < 0 )
          {
            v58 = 454LL;
          }
          else
          {
            v44 = RegSetValueExW(hKey, v41, 0, 3u, v39, v42);
            v10 = v44;
            if ( v44 > 0 )
              v10 = (unsigned __int16)v44 | 0x80070000;
            if ( v10 >= 0 )
            {
              if ( hKey )
                RegCloseKey(hKey);
              LeaveCriticalSection(&stru_18018A398);
              goto LABEL_63;
            }
            v58 = 457LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v58,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
            (const char *)(unsigned int)v10,
            dwOptionsa);
          wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___(&v77);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F2,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
            (const char *)(unsigned int)v10,
            dwOptionsb);
          goto LABEL_107;
        }
        v56 = (unsigned int)StreamInfo;
        v57 = 316LL;
      }
      else
      {
        v56 = 2147549183LL;
        v57 = 314LL;
      }
LABEL_108:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v57,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
        (const char *)v56,
        dwOptions);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v71);
LABEL_63:
      if ( v65 )
      {
        v45 = *(void (**)(void))(*(_QWORD *)v65 + 16LL);
        if ( (char *)v45 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v65);
        else
          v45();
      }
    }
  }
  v46 = *(_QWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 464) = 0LL;
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  *(_QWORD *)(a1 + 424) = 0LL;
  v47 = *(_QWORD *)(a1 + 432);
  *(_QWORD *)(a1 + 432) = 0LL;
  if ( v47 && _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 8), 0xFFFFFFFF) == 1 )
  {
    v48 = **(void (__fastcall ***)(__int64))v47;
    if ( (char *)v48 == (char *)std::_Ref_count_obj<CPowerReference>::_Destroy )
      std::_Ref_count_obj<CPowerReference>::_Destroy(v47);
    else
      v48(v47);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 12), 0xFFFFFFFF) == 1 )
    {
      v49 = *(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL);
      if ( (char *)v49 == (char *)std::_Ref_count_obj<CPowerReference>::_Delete_this )
        std::_Ref_count_obj<CPowerReference>::_Delete_this(v47);
      else
        v49(v47);
    }
  }
  if ( v76 )
    LeaveCriticalSection(lpCriticalSection);
  return v15;
}
