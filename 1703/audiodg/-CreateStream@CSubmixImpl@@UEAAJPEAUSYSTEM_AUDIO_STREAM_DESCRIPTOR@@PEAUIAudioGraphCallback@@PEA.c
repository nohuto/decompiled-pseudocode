/*
 * XREFs of ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002610 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043F30 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400014A8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400036D4 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400037B0 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     wil::ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___ @ 0x14000391C (wil--ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140003D90 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400060C0 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ??$try_copy@UISubmixInternal@@@?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISubmixInternal@@Uerr_returncode_policy@wil@@@1@XZ @ 0x140008780 (--$try_copy@UISubmixInternal@@@-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-$.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000AC54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B9C0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000D5F4 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140011CE0 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400141C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x14001A350 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14001B270 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140031194 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140031214 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x1400313A0 (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140033E30 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CSubmixImpl::CreateStream(
        CSubmixImpl *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r13
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v6; // r14
  __int64 v8; // rcx
  DWORD v9; // ebx
  unsigned int v10; // eax
  const struct tWAVEFORMATEX *v11; // rcx
  int LastError; // ebx
  __int64 v13; // rax
  int v14; // eax
  CPipeInstance *v15; // rbx
  int v16; // eax
  int StreamInstance; // esi
  HANDLE CurrentProcess; // rsi
  HANDLE v19; // rax
  const char *v20; // r9
  HANDLE v21; // rsi
  HANDLE v22; // rax
  const char *v23; // r9
  int v24; // eax
  struct ISubmixInternal *v25; // r12
  const struct CPipeInstance *v26; // rbx
  CStreamInstance *v27; // rsi
  int v28; // eax
  CStreamInstance *v29; // rsi
  __int64 **v30; // rbx
  __int64 v31; // r15
  __int64 *v32; // rax
  __int64 *v33; // rcx
  HANDLE v34; // rax
  HANDLE v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rbx
  unsigned int v39; // edx
  WINBOOL *v41; // rbx
  void (__stdcall *v42)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  HANDLE v47; // rcx
  bool v48; // cc
  unsigned int v49; // edx
  CStreamInstance *v50; // rcx
  unsigned int v51; // edx
  struct SYSTEM_AUDIO_STREAM *DueTime; // [rsp+20h] [rbp-138h]
  int DueTimea; // [rsp+20h] [rbp-138h]
  int DueTimeb; // [rsp+20h] [rbp-138h]
  __int64 DueTimec; // [rsp+20h] [rbp-138h]
  __int64 DueTimed; // [rsp+20h] [rbp-138h]
  __int64 DueTimee; // [rsp+20h] [rbp-138h]
  struct CPipeInstance *v58; // [rsp+40h] [rbp-118h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-110h] BYREF
  int v60; // [rsp+50h] [rbp-108h]
  WINBOOL fPending[2]; // [rsp+58h] [rbp-100h] BYREF
  CStreamInstance *v62; // [rsp+60h] [rbp-F8h] BYREF
  HANDLE TargetHandle; // [rsp+68h] [rbp-F0h] BYREF
  __int128 Context; // [rsp+70h] [rbp-E8h] BYREF
  HANDLE hObject; // [rsp+80h] [rbp-D8h] BYREF
  struct ISubmixInternal *v66; // [rsp+88h] [rbp-D0h] BYREF
  void *phNewTimer; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+98h] [rbp-C0h]
  DWORD CurrentThreadId; // [rsp+A0h] [rbp-B8h]
  const wchar_t *v70; // [rsp+A8h] [rbp-B0h]
  __int64 v71; // [rsp+B0h] [rbp-A8h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v72; // [rsp+B8h] [rbp-A0h]
  struct SYSTEM_AUDIO_STREAM *v73; // [rsp+C0h] [rbp-98h]
  _QWORD v74[2]; // [rsp+C8h] [rbp-90h] BYREF
  char v75; // [rsp+D8h] [rbp-80h]
  __int64 v76; // [rsp+E0h] [rbp-78h]
  WINBOOL *v77; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v78; // [rsp+F0h] [rbp-68h]
  __int128 v79; // [rsp+100h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v76 = -2LL;
  v4 = a4;
  v6 = a2;
  v72 = a2;
  v73 = a4;
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, (LPVOID *)&Context);
  if ( fPending[0] )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    *(_QWORD *)&Context = &qword_140086158;
    qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v60 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&lpCriticalSection, v42, v43);
  }
  v8 = *(_QWORD *)(Context + 8);
  v9 = g_AudioDgWatchDogTimerInMs;
  phNewTimer = 0LL;
  v68 = v8;
  CurrentThreadId = GetCurrentThreadId();
  v70 = L"CSubmixImpl::CreateStream";
  v71 = 0LL;
  if ( v9 >= 0x3E8 )
    CreateTimerQueueTimer(&phNewTimer, 0LL, CWatchdogTimer::TimerCallback, &phNewTimer, v9, 0, 0x20u);
  v58 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  LOBYTE(v60) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  if ( *((_BYTE *)this + 273) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      (int)DueTime);
    if ( (_BYTE)v60 )
      LeaveCriticalSection(lpCriticalSection);
    ATL::CAutoPtr<CPipeInstance>::Free(&v58);
    CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)&phNewTimer);
    return 2147549183LL;
  }
  if ( !v6 )
  {
    LastError = -2147467261;
    goto LABEL_79;
  }
  if ( *(_DWORD *)v6 > 2u )
  {
    LastError = -2147024809;
    goto LABEL_79;
  }
  v10 = *((_DWORD *)v6 + 18);
  if ( v10 < 0x12 )
  {
    LastError = -2147024809;
    goto LABEL_79;
  }
  v11 = (const struct tWAVEFORMATEX *)*((_QWORD *)v6 + 10);
  if ( !v11 )
  {
    LastError = -2147467261;
    goto LABEL_79;
  }
  if ( v11->wFormatTag == 0xFFFE && v10 < 0x28 )
  {
    LastError = -2147024809;
LABEL_79:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1DD,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)LastError,
      (int)DueTime);
    if ( !(_BYTE)v60 )
    {
LABEL_81:
      ATL::CAutoPtr<CPipeInstance>::Free(&v58);
      CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)&phNewTimer);
      return (unsigned int)LastError;
    }
LABEL_80:
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_81;
  }
  LastError = ValidateWaveFormatEx(v11);
  if ( LastError < 0 )
    goto LABEL_79;
  v78 = *((_OWORD *)v6 + 3);
  v79 = v78;
  EtwEventActivityIdControl(4LL, &v79);
  if ( *((_QWORD *)this + 24) != *((_QWORD *)v6 + 4) )
  {
    v44 = 483LL;
LABEL_83:
    LastError = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x80070057LL,
      (int)DueTime);
    goto LABEL_84;
  }
  v13 = *(_QWORD *)((char *)v6 + 116) - *((_QWORD *)this + 25);
  if ( !v13 )
    v13 = *(_QWORD *)((char *)v6 + 124) - *((_QWORD *)this + 26);
  if ( v13 )
  {
    v45 = *(_QWORD *)((char *)v6 + 116) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v45 )
      v45 = *(_QWORD *)((char *)v6 + 124) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v45 )
    {
      v44 = 489LL;
      goto LABEL_83;
    }
  }
  v14 = CPipeInstance::CreateStreamPipeInstance(
          *((struct IDeviceGraphObjectCache **)this + 28),
          v6,
          *((struct CPipeInstance **)this + 3),
          *((struct tWAVEFORMATEX **)this + 23),
          DueTime,
          &v58);
  LastError = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1F0,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v14,
      DueTimea);
    goto LABEL_84;
  }
  v15 = v58;
  v16 = CPipeInstance::Initialize(v58);
  StreamInstance = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1F1,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v16,
      DueTimea);
    EtwEventActivityIdControl(4LL, &v79);
    if ( !(_BYTE)v60 )
    {
LABEL_93:
      ATL::CAutoPtr<CPipeInstance>::Free(&v58);
      CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)&phNewTimer);
      return (unsigned int)StreamInstance;
    }
LABEL_92:
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_93;
  }
  StreamInstance = CPipeInstance::ConnectAPOs(v15, a3);
  if ( StreamInstance < 0 )
  {
    v46 = 498LL;
    goto LABEL_96;
  }
  StreamInstance = CPipeInstance::CreateStreamInstance(v15, v6, v4);
  if ( StreamInstance < 0 )
  {
    v46 = 500LL;
LABEL_96:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v46,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)StreamInstance,
      DueTimea);
    EtwEventActivityIdControl(4LL, &v79);
    if ( !(_BYTE)v60 )
      goto LABEL_93;
    goto LABEL_92;
  }
  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v19 = GetCurrentProcess();
  if ( !DuplicateHandle(v19, *((HANDLE *)v4 + 3), CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1FA,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                  v20);
LABEL_99:
    v47 = TargetHandle;
    v48 = (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_101:
    if ( v48 )
      CloseHandle(v47);
LABEL_84:
    EtwEventActivityIdControl(4LL, &v79);
    if ( !(_BYTE)v60 )
      goto LABEL_81;
    goto LABEL_80;
  }
  hObject = 0LL;
  v21 = GetCurrentProcess();
  v22 = GetCurrentProcess();
  if ( !DuplicateHandle(v22, *((HANDLE *)v4 + 4), v21, &hObject, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1FE,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                  v23);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    goto LABEL_99;
  }
  v62 = 0LL;
  DueTimeb = (int)v15;
  v24 = CStreamInstance::CreateStreamInstance(&v62, *((unsigned int *)v6 + 3), *(unsigned int *)v6, v15);
  LastError = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x207,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v24,
      DueTimeb);
    v50 = v62;
    if ( !v62 )
    {
LABEL_107:
      v62 = 0LL;
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      v47 = TargetHandle;
      v48 = (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
      goto LABEL_101;
    }
LABEL_106:
    CStreamInstance::`scalar deleting destructor'(v50, v49);
    goto LABEL_107;
  }
  v58 = 0LL;
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::try_copy<ISubmixInternal>((char *)this + 264, &v66);
  v25 = v66;
  if ( v66 )
  {
    v26 = (const struct CPipeInstance *)*((_QWORD *)this + 29);
    v27 = v62;
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
    v28 = CStreamInstance::ConnectToRightSubmix(v27, v25, v26);
    LastError = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x20F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v28,
        DueTimeb);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v66);
      v50 = v62;
      if ( !v62 )
        goto LABEL_107;
      goto LABEL_106;
    }
  }
  *(_QWORD *)&Context = &v66;
  *((_QWORD *)&Context + 1) = &v62;
  wil::ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___((__int64)v74, &Context);
  try
  {
    v29 = v62;
    v30 = (__int64 **)((char *)this + 32);
    v31 = *((_QWORD *)this + 4);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)v30);
    v32 = v30[4];
    *(_QWORD *)&Context = v32;
    v33 = (__int64 *)*v32;
    if ( v32 )
      v32[2] = (__int64)v29;
    v30[4] = v33;
    v32[1] = 0LL;
    *v32 = v31;
    v30[2] = (__int64 *)((char *)v30[2] + 1);
    if ( *v30 )
      (*v30)[1] = (__int64)v32;
    else
      v30[1] = v32;
    *v30 = v32;
  }
  catch ( ATL::CAtlException *v77 )
  {
    v41 = v77;
    if ( *v77 == -1073741571 )
      _o__resetstkoflw();
    fPending[0] = *v41;
    LastError = fPending[0];
    if ( fPending[0] < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x21C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)fPending[0],
        DueTimeb);
      if ( v75 && *(_QWORD *)v74[0] )
        CStreamInstance::DisconnectFromRightSubmix(
          *(struct CPipeInstance ***)v74[1],
          *(struct ISubmixInternal **)v74[0]);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v66);
      if ( v62 )
        CStreamInstance::`scalar deleting destructor'(v62, v51);
      goto LABEL_107;
    }
    v6 = v72;
    v4 = v73;
  }
  *((_QWORD *)v4 + 6) = *((_QWORD *)v62 + 1);
  v62 = 0LL;
  v75 = 0;
  v34 = TargetHandle;
  TargetHandle = 0LL;
  *((_QWORD *)v4 + 3) = v34;
  v35 = hObject;
  hObject = 0LL;
  *((_QWORD *)v4 + 4) = v35;
  v36 = *((_QWORD *)v6 + 13);
  *(_QWORD *)&Context = 0LL;
  *(_QWORD *)fPending = 0LL;
  if ( (unsigned int)GetClassFromEndpointId(v36) != 3
    && CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         (LPVOID *)&Context) >= 0
    && (*(int (__fastcall **)(_QWORD, __int64, WINBOOL *))(*(_QWORD *)Context + 40LL))(Context, v36, fPending) >= 0 )
  {
    TrackSystemEffectBehavior(*(__int64 *)fPending, 1, 1, 1, DueTimec);
  }
  if ( *(_QWORD *)fPending )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 16LL))(*(_QWORD *)fPending);
  if ( (_QWORD)Context )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)Context + 16LL))(Context);
  v37 = *((_QWORD *)v6 + 13);
  *(_QWORD *)fPending = 0LL;
  *(_QWORD *)&Context = 0LL;
  if ( (unsigned int)GetClassFromEndpointId(v37) != 3
    && CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         (LPVOID *)fPending) >= 0
    && (*(int (__fastcall **)(_QWORD, __int64, __int128 *))(**(_QWORD **)fPending + 40LL))(
         *(_QWORD *)fPending,
         v37,
         &Context) >= 0 )
  {
    TrackSystemEffectBehavior(Context, 2, 1, 1, DueTimed);
  }
  if ( (_QWORD)Context )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)Context + 16LL))(Context);
  if ( *(_QWORD *)fPending )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 16LL))(*(_QWORD *)fPending);
  v38 = *((_QWORD *)v6 + 13);
  *(_QWORD *)fPending = 0LL;
  *(_QWORD *)&Context = 0LL;
  if ( (unsigned int)GetClassFromEndpointId(v38) != 3
    && CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         (LPVOID *)fPending) >= 0
    && (*(int (__fastcall **)(_QWORD, __int64, __int128 *))(**(_QWORD **)fPending + 40LL))(
         *(_QWORD *)fPending,
         v38,
         &Context) >= 0 )
  {
    TrackSystemEffectBehavior(Context, 3, 1, 1, DueTimee);
  }
  if ( (_QWORD)Context )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)Context + 16LL))(Context);
  if ( *(_QWORD *)fPending )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 16LL))(*(_QWORD *)fPending);
  PublishDeviceGraphWnfState();
  if ( v66 )
    (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v66 + 16LL))(v66);
  if ( v62 )
    CStreamInstance::`scalar deleting destructor'(v62, v39);
  v62 = 0LL;
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TargetHandle);
  EtwEventActivityIdControl(4LL, &v79);
  if ( (_BYTE)v60 )
    LeaveCriticalSection(lpCriticalSection);
  if ( phNewTimer )
  {
    DeleteTimerQueueTimer(0LL, phNewTimer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    phNewTimer = 0LL;
  }
  if ( v71 )
    (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v71 + 8LL))(v71, v70, v68);
  return 0LL;
}
