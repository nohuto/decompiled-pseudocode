/*
 * XREFs of ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010
 * Callers:
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x180004124 (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x18002B7D0 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002B7F0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     TraceLoggingRegisterEx @ 0x180017D54 (TraceLoggingRegisterEx.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800354D0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x180043250 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180060310 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD_K@Z @ 0x180096F10 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180096F5C (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x18009714C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180097ACC (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_ @ 0x18009B998 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_66.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall CAudioStream::RecalculateVolume(struct _RTL_CRITICAL_SECTION *this, char a2, __int64 a3)
{
  char v3; // r14
  LPCRITICAL_SECTION v4; // rdi
  unsigned int v5; // esi
  unsigned int i; // edx
  __int64 RecursionCount; // r10
  float *p_Type; // r8
  __int64 (__fastcall *v9)(CPerStreamVolumeAudioStream *, __int64, float *const, bool *, __int64 *); // rax
  ULONG_PTR SpinCount; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  HANDLE LockSemaphore; // rcx
  HANDLE OwningThread; // rax
  __int64 v15; // r9
  float *v16; // rcx
  __int64 v17; // rdx
  HANDLE v18; // rcx
  int v19; // esi
  HANDLE v20; // r10
  _DWORD *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 j; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
  char v25; // al
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  size_t v28; // rbx
  const void *v29; // rax
  __int64 v30; // r8
  CAudioSession *v31; // rcx
  __int64 (*v32)(void); // rax
  const unsigned __int16 *Identifier; // r12
  LONG OwningThread_high; // xmm6_4
  char *v35; // r14
  ULONG_PTR *p_SpinCount; // r13
  ULONGLONG TickCount64; // rsi
  __int64 v38; // r8
  char v39; // bl
  void **v40; // rcx
  __int128 *p_Src; // r9
  size_t v42; // rbx
  size_t v43; // rax
  void *v44; // rsi
  char *v45; // rcx
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  char *v49; // r13
  __int64 v50; // rbx
  void **v51; // rax
  unsigned __int64 v52; // r13
  __int64 v53; // rbx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  HANDLE ProcessHeap; // rax
  __int64 v57; // rcx
  _QWORD *v58; // r14
  _QWORD *v59; // rax
  _QWORD *v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rbx
  unsigned __int64 v64; // rsi
  __int64 v65; // rcx
  HANDLE v66; // rax
  HANDLE v67; // r10
  PRTL_CRITICAL_SECTION_DEBUG v68; // r8
  __int64 v69; // rdx
  __int64 (__fastcall *v70)(HANDLE, __int64, PRTL_CRITICAL_SECTION_DEBUG, LPVOID *); // rax
  int v71; // eax
  float v72; // xmm1_4
  LONG *p_LockCount; // rcx
  __int64 (__fastcall *v74)(CAudioStream *__hidden, float *); // rax
  unsigned int v75; // r8d
  ULONG_PTR v76; // rdx
  __int64 v77; // rax
  void (__fastcall *v78)(CPerStreamVolumeAudioStream *); // rax
  __int64 v80; // rax
  int v81; // eax
  int v82; // esi
  LPVOID v83; // rax
  const struct _TlgProvider_t *v84; // rbx
  const WCHAR *v85; // rax
  LPCGUID v86; // r8
  LPCGUID v87; // r9
  __int64 v88; // rdx
  void *v89; // r8
  __int64 v90; // rbx
  __int64 v91; // r14
  __int64 v92; // rax
  void *v93; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v94; // r13
  char *v95; // rdx
  void *v96; // r14
  SIZE_T v97; // rcx
  LPVOID v98; // rax
  __int64 v99; // rcx
  TLG_PENABLECALLBACK v100; // rdx
  PVOID v101; // r8
  const CHAR *v102; // rdx
  const WCHAR *v103; // rax
  LPCGUID v104; // r8
  LPCGUID v105; // r9
  unsigned __int64 v106; // rax
  __int64 v107; // rcx
  _QWORD *Next; // rax
  HANDLE *cData; // [rsp+20h] [rbp-2D8h]
  unsigned __int8 v110; // [rsp+40h] [rbp-2B8h] BYREF
  char v111[3]; // [rsp+41h] [rbp-2B7h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-2B4h] BYREF
  float v113; // [rsp+48h] [rbp-2B0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-2A8h] BYREF
  char v115; // [rsp+58h] [rbp-2A0h]
  __int64 v116; // [rsp+60h] [rbp-298h]
  __int64 v117; // [rsp+68h] [rbp-290h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-288h] BYREF
  char v119; // [rsp+78h] [rbp-280h]
  LPCRITICAL_SECTION v120; // [rsp+80h] [rbp-278h] BYREF
  char v121; // [rsp+88h] [rbp-270h]
  int v122; // [rsp+8Ch] [rbp-26Ch]
  _QWORD v123[2]; // [rsp+90h] [rbp-268h] BYREF
  int *v124; // [rsp+A0h] [rbp-258h] BYREF
  void **v125; // [rsp+A8h] [rbp-250h] BYREF
  char v126[96]; // [rsp+B0h] [rbp-248h] BYREF
  unsigned __int64 v127; // [rsp+110h] [rbp-1E8h]
  int v128; // [rsp+118h] [rbp-1E0h]
  _BYTE v129[104]; // [rsp+128h] [rbp-1D0h] BYREF
  __int64 v130; // [rsp+190h] [rbp-168h]
  LPVOID v131[2]; // [rsp+198h] [rbp-160h] BYREF
  __int128 v132; // [rsp+1A8h] [rbp-150h]
  __int128 Src; // [rsp+1B8h] [rbp-140h] BYREF
  size_t Size[2]; // [rsp+1C8h] [rbp-130h]
  LPCSTR psz[2]; // [rsp+1D8h] [rbp-120h] BYREF
  __m128i v136; // [rsp+1E8h] [rbp-110h]
  __int128 v137; // [rsp+1F8h] [rbp-100h] BYREF
  __m128i si128; // [rsp+208h] [rbp-F0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+240h] [rbp-B8h] BYREF
  LPVOID *v141; // [rsp+250h] [rbp-A8h]
  __int64 v142; // [rsp+258h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+260h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v144; // [rsp+270h] [rbp-88h] BYREF
  LPVOID *p_Context; // [rsp+280h] [rbp-78h]
  __int64 v146; // [rsp+288h] [rbp-70h]
  char *v147; // [rsp+290h] [rbp-68h]
  __int64 v148; // [rsp+298h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+0h]

  v130 = -2LL;
  v3 = a2;
  v4 = this;
  lpCriticalSection = this;
  v116 = a3;
  fPending = 0;
  v5 = 0;
  v113 = 0.0;
  if ( this[4].OwningThread && this[4].LockSemaphore )
  {
    for ( i = 0; ; ++i )
    {
      RecursionCount = (unsigned int)this[2].RecursionCount;
      if ( i >= (unsigned int)RecursionCount )
        break;
      *((_DWORD *)&this[3].DebugInfo->Type + i) = 1065353216;
    }
    p_Type = (float *)&this[3].DebugInfo->Type;
    v9 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, __int64, float *const, bool *, __int64 *))&this->DebugInfo->Flags;
    if ( v9 == CPerStreamVolumeAudioStream::CalculateAPOVolume )
    {
      if ( (_DWORD)RecursionCount )
      {
        SpinCount = this[2].SpinCount;
        v11 = 0LL;
        v12 = (unsigned int)this[2].RecursionCount;
        do
        {
          p_Type[v11] = *(float *)(v11 * 4 + SpinCount) * *((float *)&v4[2].OwningThread + 1);
          ++v11;
          --v12;
        }
        while ( v12 );
      }
      LockSemaphore = v4[2].LockSemaphore;
      v110 = (unsigned __int8)v4[16].LockSemaphore;
      OwningThread = v4[16].OwningThread;
      if ( (__int64)LockSemaphore >= (__int64)OwningThread )
        OwningThread = LockSemaphore;
      v117 = (__int64)OwningThread;
      if ( (_DWORD)RecursionCount )
      {
        v15 = *(_QWORD *)&v4[16].LockCount;
        v16 = p_Type;
        v17 = RecursionCount;
        do
        {
          *v16 = *(float *)((char *)v16 - (char *)p_Type + v15) * *v16;
          ++v16;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      cData = (HANDLE *)&v117;
      v5 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, _QWORD, float *, unsigned __int8 *))v9)(
             this,
             (unsigned int)RecursionCount,
             p_Type,
             &v110);
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x715,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v5,
        (int)cData);
      return v5;
    }
    v120 = (LPCRITICAL_SECTION)((char *)v4 + 136);
    v121 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v120);
    v18 = v4[4].LockSemaphore;
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(HANDLE, char *))(*(_QWORD *)v18 + 24LL))(v18, v111);
      if ( v19 == -2147417848 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids);
        }
        v111[0] = 0;
        Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v4[4].LockSemaphore);
      }
      v20 = v4[4].LockSemaphore;
      if ( v20 && !v19 && (v111[0] != 0) != (v110 != 0) )
      {
        v81 = (*(__int64 (__fastcall **)(HANDLE, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v20 + 32LL))(v20, v110, 0LL, 0LL);
        v82 = v81;
        if ( v81 >= 0 )
        {
          if ( v4[1].SpinCount )
          {
            v83 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    (__int64)retaddr,
                    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            v84 = (const struct _TlgProvider_t *)*((_QWORD *)v83 + 1);
            if ( *(_DWORD *)v84 > 4u )
            {
              if ( TlgKeywordOn(*((TraceLoggingHProvider *)v83 + 1), 0x400000000000uLL) )
              {
                LODWORD(Context) = v110;
                v140.Ptr = (ULONGLONG)&Context;
                *(_QWORD *)&v140.Size = 4LL;
                v131[0] = (LPVOID)(*(__int64 (__fastcall **)(LONG *))(*(_QWORD *)&v4->LockCount + 80LL))(&v4->LockCount);
                v141 = v131;
                v142 = 8LL;
                v85 = (const WCHAR *)(*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)v4[1].SpinCount + 64LL))(v4[1].SpinCount);
                TlgCreateWsz(&pDesc, v85);
                fPending = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)v4[2].DebugInfo + 40LL))(v4[2].DebugInfo);
                v144.Ptr = (ULONGLONG)&fPending;
                *(_QWORD *)&v144.Size = 4LL;
                TlgWrite(v84, &unk_1801454DC, v86, v87, 6u, &pData);
              }
            }
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x72D,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v81,
            0);
          if ( v82 == -2147417848 )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids);
            }
            Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v4[4].LockSemaphore);
          }
        }
      }
    }
    if ( !v4[1].SpinCount )
      goto LABEL_84;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v131[0] = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_18018A2A0;
      qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
      qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      LODWORD(v131[1]) = 0;
      wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)v131, v88, v89);
    }
    v21 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( !v21 || *v21 <= 4u )
      goto LABEL_84;
    v123[0] = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::istream'};
    v124 = (int *)&std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::ostream'};
    std::ios::ios(v129);
    fPending = 1;
    std::iostream::basic_iostream<char>(v123, &v125, 0LL);
    *(_QWORD *)((char *)v123 + *(int *)(v123[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
    *(int *)((char *)&v122 + *(int *)(v123[0] + 4LL)) = *(_DWORD *)(v123[0] + 4LL) - 152;
    v131[0] = &v125;
    std::streambuf::streambuf(&v125);
    v125 = &std::stringbuf::`vftable';
    v127 = 0LL;
    v128 = 0;
    v22 = std::setprecision(v131, 3LL);
    (*(void (__fastcall **)(char *, _QWORD))v22)((char *)&v124 + v124[1], *(_QWORD *)(v22 + 8));
    std::ostream::operator<<(&v124, std::fixed);
    std::ostream::operator<<(&v124);
    for ( j = 1LL; j < (unsigned int)v4[2].RecursionCount; ++j )
    {
      v80 = std::operator<<<std::char_traits<char>>(&v124);
      std::ostream::operator<<(v80);
    }
    DebugInfo = v4[2].DebugInfo;
    v25 = v128;
    if ( (v128 & 2) == 0 )
    {
      if ( std::streambuf::pptr(&v125) )
      {
        v26 = std::streambuf::pptr(&v125);
        v27 = v127;
        if ( v127 < v26 )
          v27 = std::streambuf::pptr(&v125);
        v28 = v27 - std::streambuf::pbase(&v125);
        v29 = (const void *)std::streambuf::pbase(&v125);
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOBYTE(v137) = 0;
        if ( v28 > 0xF )
        {
          std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_(
            &v137,
            v28,
            v30,
            v29);
        }
        else
        {
          si128.m128i_i64[0] = v28;
          memmove(&v137, v29, v28);
          *((_BYTE *)&v137 + v28) = 0;
        }
        Src = v137;
        *(__m128i *)Size = si128;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOBYTE(v137) = 0;
LABEL_36:
        v31 = (CAudioSession *)v4[1].SpinCount;
        v32 = *(__int64 (**)(void))(*(_QWORD *)v31 + 64LL);
        if ( (char *)v32 == (char *)CAudioSession::GetIdentifier )
          Identifier = CAudioSession::GetIdentifier(v31);
        else
          Identifier = (const unsigned __int16 *)v32();
        OwningThread_high = HIDWORD(v4[2].OwningThread);
        fPending = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 40LL))(DebugInfo);
        v131[0] = v4[13].LockSemaphore;
        v35 = (char *)(*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 72LL))(DebugInfo);
        p_SpinCount = &v4[5].SpinCount;
        Context = &v4[6].LockSemaphore;
        v115 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&Context);
        TickCount64 = GetTickCount64();
        v39 = 0;
        if ( v4[6].DebugInfo )
        {
          v94 = v4[6].DebugInfo;
          if ( GetTickCount64() - (unsigned __int64)v94 <= 0x3E8 )
          {
            p_SpinCount = &v4[5].SpinCount;
          }
          else
          {
            v95 = (char *)v94 - *(_QWORD *)&v4[6].LockCount;
            p_SpinCount = &v4[5].SpinCount;
            (*(void (__fastcall **)(ULONG_PTR *, char *, _QWORD))v4[5].SpinCount)(
              &v4[5].SpinCount,
              v95,
              LODWORD(v4[6].OwningThread));
            v39 = 1;
          }
        }
        if ( v39 )
        {
          *((_DWORD *)p_SpinCount + 6) = 0;
          p_SpinCount[2] = TickCount64;
        }
        else
        {
          ++*((_DWORD *)p_SpinCount + 6);
        }
        p_SpinCount[1] = TickCount64;
        if ( v115 )
          LeaveCriticalSection((LPCRITICAL_SECTION)Context);
        v40 = (void **)(p_SpinCount + 9);
        if ( p_SpinCount + 9 != (ULONG_PTR *)&Src )
        {
          p_Src = &Src;
          if ( Size[1] >= 0x10 )
            p_Src = (__int128 *)Src;
          v42 = Size[0];
          v43 = p_SpinCount[12];
          if ( Size[0] > v43 )
          {
            std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_(
              v40,
              Size[0],
              v38,
              p_Src);
          }
          else
          {
            v44 = p_SpinCount + 9;
            if ( v43 >= 0x10 )
              v44 = *v40;
            p_SpinCount[11] = Size[0];
            memmove(v44, p_Src, v42);
            *((_BYTE *)v44 + v42) = 0;
          }
        }
        v45 = (char *)(p_SpinCount + 13);
        v46 = -1LL;
        v47 = -1LL;
        do
          ++v47;
        while ( *(_WORD *)&v35[2 * v47] );
        v48 = p_SpinCount[16];
        if ( v47 > v48 )
        {
          std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_(
            v45,
            v47,
            v38,
            v35);
        }
        else
        {
          v49 = (char *)(p_SpinCount + 13);
          if ( v48 >= 8 )
            v49 = *(char **)v45;
          *((_QWORD *)v45 + 2) = v47;
          v50 = 2 * v47;
          memmove(v49, v35, 2 * v47);
          *(_WORD *)&v49[v50] = 0;
          p_SpinCount = &v4[5].SpinCount;
        }
        p_SpinCount[17] = (ULONG_PTR)v131[0];
        v51 = (void **)(p_SpinCount + 18);
        Context = p_SpinCount + 18;
        do
          ++v46;
        while ( Identifier[v46] );
        v52 = p_SpinCount[21];
        if ( v46 <= v52 )
        {
          v96 = v51;
          if ( v52 >= 8 )
            v96 = *v51;
          v51[2] = (void *)v46;
          memmove(v96, Identifier, 2 * v46);
          *((_WORD *)v96 + v46) = 0;
          goto LABEL_71;
        }
        v53 = 0x7FFFFFFFFFFFFFFELL;
        if ( v46 > 0x7FFFFFFFFFFFFFFELL )
          std::_Xlength_error("string too long");
        if ( (v46 | 7) <= 0x7FFFFFFFFFFFFFFELL )
        {
          v54 = v52 >> 1;
          if ( v52 <= 0x7FFFFFFFFFFFFFFELL - (v52 >> 1) )
          {
            v53 = v54 + v52;
            if ( (v46 | 7) >= v54 + v52 )
              v53 = v46 | 7;
          }
        }
        v55 = v53 + 1;
        if ( v53 != -1 )
        {
          if ( v55 > 0x7FFFFFFFFFFFFFFFLL )
          {
            std::_Xbad_alloc();
          }
          else
          {
            v35 = (char *)(2 * v55);
            if ( 2 * v55 < 0x1000 )
            {
              ProcessHeap = GetProcessHeap();
              v58 = HeapAlloc(ProcessHeap, 0, (SIZE_T)v35);
              if ( !v58 )
              {
                _o__invalid_parameter_noinfo_noreturn(v57);
                JUMPOUT(0x18006C0F0LL);
              }
              goto LABEL_68;
            }
          }
          v97 = (SIZE_T)(v35 + 39);
          if ( v35 + 39 < v35 )
            std::_Xbad_alloc();
          v98 = operator new(v97);
          if ( !v98 )
          {
            _o__invalid_parameter_noinfo_noreturn(v99);
            JUMPOUT(0x18006C0D8LL);
          }
          v58 = (_QWORD *)(((unsigned __int64)v98 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *(v58 - 1) = v98;
          goto LABEL_68;
        }
        v58 = 0LL;
LABEL_68:
        v59 = Context;
        *((_QWORD *)Context + 2) = v46;
        v59[3] = v53;
        memcpy_0(v58, Identifier, 2 * v46);
        *((_WORD *)v58 + v46) = 0;
        v60 = Context;
        if ( v52 >= 8 )
          std::_Deallocate(*(void **)Context, v52 + 1, 2uLL);
        *v60 = v58;
LABEL_71:
        v4[10].LockCount = fPending;
        v4[10].RecursionCount = OwningThread_high;
        if ( Size[1] >= 0x10 )
          std::_Deallocate((void *)Src, Size[1] + 1, 1uLL);
        v131[0] = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, v131)
          && fPending )
        {
          v131[0] = &qword_18018A2A0;
          qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
          qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          qword_18018A2A8 = (__int64)qword_18018A2B8;
          byte_18018A2B0 = 1;
          TraceLoggingRegisterEx(qword_18018A2B8, v100, v101);
          dword_18018A2B4 = 1;
          (*(void (__fastcall **)(void *))(qword_18018A2A0 + 8LL))(&qword_18018A2A0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18018A2A0);
        }
        v61 = *((_QWORD *)v131[0] + 1);
        if ( *(_DWORD *)v61 > 4u
          && (*(_BYTE *)(v61 + 16) & 2) != 0
          && (*(_QWORD *)(v61 + 24) & 2LL) == *(_QWORD *)(v61 + 24) )
        {
          std::stringbuf::str(&v125, psz);
          v102 = (const CHAR *)psz;
          if ( v136.m128i_i64[1] >= 0x10uLL )
            v102 = psz[0];
          TlgCreateSz(&v140, v102);
          v141 = (LPVOID *)&v110;
          v142 = 1LL;
          pDesc.Ptr = (ULONGLONG)&v4[13].LockSemaphore;
          *(_QWORD *)&pDesc.Size = 8LL;
          v103 = (const WCHAR *)(*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)v4[1].SpinCount + 64LL))(v4[1].SpinCount);
          TlgCreateWsz(&v144, v103);
          LODWORD(Context) = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)v4[2].DebugInfo + 40LL))(v4[2].DebugInfo);
          p_Context = &Context;
          v146 = 4LL;
          v147 = (char *)&v4[2].OwningThread + 4;
          v148 = 4LL;
          TlgWrite((TraceLoggingHProvider)v61, &unk_180145462, v104, v105, 8u, &pData);
          std::string::_Tidy_deallocate(psz);
        }
        *(_QWORD *)((char *)v123 + *(int *)(v123[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
        *(int *)((char *)&v122 + *(int *)(v123[0] + 4LL)) = *(_DWORD *)(v123[0] + 4LL) - 152;
        v125 = &std::stringbuf::`vftable';
        if ( (v128 & 1) != 0 )
        {
          if ( std::streambuf::pptr(&v125) )
            v62 = std::streambuf::epptr(&v125);
          else
            v62 = std::streambuf::egptr(&v125);
          v63 = v62;
          v64 = std::streambuf::eback(&v125);
          if ( (unsigned __int64)(v63 - std::streambuf::eback(&v125)) >= 0x1000 )
          {
            if ( (v64 & 0x1F) != 0 || (v106 = *(_QWORD *)(v64 - 8), v106 >= v64) || v64 - v106 - 8 > 0x1F )
            {
              _o__invalid_parameter_noinfo_noreturn(v65);
              v5 = 0;
              v4 = lpCriticalSection;
              v3 = a2;
              goto LABEL_85;
            }
            v64 = *(_QWORD *)(v64 - 8);
          }
          v66 = GetProcessHeap();
          HeapFree(v66, 0, (LPVOID)v64);
        }
        std::streambuf::setg(&v125, 0LL, 0LL, 0LL);
        std::streambuf::setp(&v125, 0LL, 0LL);
        v127 = 0LL;
        v128 &= ~1u;
        std::streambuf::~streambuf<char,std::char_traits<char>>(&v125);
        std::iostream::~basic_iostream<char,std::char_traits<char>>(v126);
        std::ios::~ios<char,std::char_traits<char>>(v129);
        v3 = a2;
LABEL_84:
        v5 = LODWORD(v113);
LABEL_85:
        v67 = v4[4].OwningThread;
        if ( v67 )
        {
          v131[0] = 0LL;
          v68 = v4[3].DebugInfo;
          v69 = (unsigned int)v4[2].RecursionCount;
          if ( v3 )
          {
            v107 = v116;
            if ( v116 <= v117 )
              v107 = v117;
            v116 = v107;
            v70 = *(__int64 (__fastcall **)(HANDLE, __int64, PRTL_CRITICAL_SECTION_DEBUG, LPVOID *))(*(_QWORD *)v67 + 48LL);
          }
          else
          {
            v70 = *(__int64 (__fastcall **)(HANDLE, __int64, PRTL_CRITICAL_SECTION_DEBUG, LPVOID *))(*(_QWORD *)v67 + 32LL);
          }
          v71 = v70(v67, v69, v68, v131);
          v5 = v71;
          if ( v71 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x784,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
              (const char *)(unsigned int)v71,
              1);
          if ( v5 == -2147417848 )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids);
            }
            Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v4[4].OwningThread);
            v5 = 0;
          }
        }
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 424);
        v119 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
        v72 = 0.0;
        v113 = 0.0;
        p_LockCount = &v4->LockCount;
        v74 = *(__int64 (__fastcall **)(CAudioStream *__hidden, float *))(*(_QWORD *)&v4->LockCount + 88LL);
        if ( v74 == CAudioStream::GetMaxStreamChannelVolume )
        {
          v113 = 0.0;
          v75 = v4[2].RecursionCount;
          if ( v75 )
          {
            v76 = v4[2].SpinCount;
            v77 = 0LL;
            p_LockCount = (LONG *)v75;
            do
            {
              if ( *(float *)(v77 + v76) > v72 )
              {
                v72 = *(float *)(v77 + v76);
                v113 = v72;
              }
              v77 += 4LL;
              p_LockCount = (LONG *)((char *)p_LockCount - 1);
            }
            while ( p_LockCount );
          }
        }
        else
        {
          v74((CAudioStream *)p_LockCount, &v113);
        }
        v131[0] = v4[11].LockSemaphore;
        while ( v131[0] )
        {
          Next = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                             p_LockCount,
                             v131);
          (*(void (__fastcall **)(_QWORD, HANDLE))(*(_QWORD *)*Next + 24LL))(*Next, v4[1].OwningThread);
        }
        if ( v119 )
          LeaveCriticalSection(lpCriticalSection);
        if ( v121 )
          LeaveCriticalSection(v120);
        goto LABEL_102;
      }
      v25 = v128;
    }
    if ( (v25 & 4) != 0 || !std::streambuf::gptr(&v125) )
    {
      LOBYTE(v131[0]) = 0;
      Src = *(_OWORD *)v131;
      *(__m128i *)Size = _mm_load_si128((const __m128i *)&_xmm);
      v132 = *(_OWORD *)Size;
      LOBYTE(v131[0]) = 0;
      v93 = v131;
    }
    else
    {
      v90 = std::streambuf::egptr(&v125);
      v91 = std::streambuf::eback(&v125);
      v92 = std::streambuf::eback(&v125);
      std::string::string(psz, v92, v90 - v91);
      Src = *(_OWORD *)psz;
      *(__m128i *)Size = v136;
      v136 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(psz[0]) = 0;
      v93 = psz;
    }
    std::string::_Tidy_deallocate(v93);
    goto LABEL_36;
  }
LABEL_102:
  v78 = *(void (__fastcall **)(CPerStreamVolumeAudioStream *))&v4->DebugInfo[1].Type;
  if ( v78 == CPerStreamVolumeAudioStream::ResetVolumeRampDelays )
  {
    v4[2].LockSemaphore = 0LL;
    v4[16].OwningThread = 0LL;
  }
  else
  {
    v78((CPerStreamVolumeAudioStream *)v4);
  }
  return v5;
}
