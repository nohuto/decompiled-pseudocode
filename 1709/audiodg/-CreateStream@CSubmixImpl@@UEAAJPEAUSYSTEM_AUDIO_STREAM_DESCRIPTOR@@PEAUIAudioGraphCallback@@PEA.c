/*
 * XREFs of ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011570
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400018D0 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400448E0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x140001310 (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x140001BA0 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140001D90 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001E70 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003A90 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400078D8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140008F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000A874 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14000E708 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140012250 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015750 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140017230 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FFDC (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140030BF8 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140030C78 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140033650 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033668 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CSubmixImpl::CreateStream(
        CSubmixImpl *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r13
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v6; // r15
  void *v8; // rcx
  DWORD v9; // ebx
  unsigned int v10; // eax
  const struct tWAVEFORMATEX *v11; // rcx
  int LastError; // ebx
  __int64 v13; // rax
  int StreamPipeInstance; // eax
  CPipeInstance *v15; // rbx
  int v16; // eax
  int StreamInstance; // edi
  HANDLE CurrentProcess; // rdi
  HANDLE v19; // rax
  const char *v20; // r9
  HANDLE v21; // rdi
  HANDLE v22; // rax
  const char *v23; // r9
  int v24; // eax
  __int64 v25; // r9
  void (__fastcall ***v26)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  void (__fastcall *v27)(_QWORD, GUID *, struct ISubmixInternal **); // rax
  struct ISubmixInternal *v28; // r12
  const struct CPipeInstance *v29; // rbx
  CStreamInstance *v30; // rdi
  int v31; // eax
  CStreamInstance *v32; // rbx
  __int64 v33; // rdi
  struct ATL::CAtlPlex *v34; // rax
  int v35; // edx
  _QWORD *v36; // rax
  int i; // edx
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  HANDLE v41; // rax
  HANDLE v42; // rax
  __int64 v43; // r9
  __int64 v44; // r9
  unsigned int v45; // edx
  void (__stdcall *v47)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v48; // r8
  WINBOOL *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  HANDLE v53; // rcx
  bool v54; // cc
  unsigned int v55; // edx
  CStreamInstance *v56; // rcx
  unsigned int v57; // edx
  struct SYSTEM_AUDIO_STREAM *DueTime; // [rsp+20h] [rbp-138h]
  int DueTimea; // [rsp+20h] [rbp-138h]
  int DueTimeb; // [rsp+20h] [rbp-138h]
  LPVOID Context; // [rsp+40h] [rbp-118h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-110h] BYREF
  int v63; // [rsp+50h] [rbp-108h]
  CStreamInstance *v64; // [rsp+58h] [rbp-100h] BYREF
  struct ISubmixInternal *v65; // [rsp+60h] [rbp-F8h] BYREF
  HANDLE TargetHandle; // [rsp+68h] [rbp-F0h] BYREF
  HANDLE hObject; // [rsp+70h] [rbp-E8h] BYREF
  WINBOOL fPending[4]; // [rsp+78h] [rbp-E0h] BYREF
  void *phNewTimer[2]; // [rsp+88h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+98h] [rbp-C0h]
  const wchar_t *v71; // [rsp+A0h] [rbp-B8h]
  __int64 v72; // [rsp+A8h] [rbp-B0h]
  char v73; // [rsp+B0h] [rbp-A8h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v74; // [rsp+B8h] [rbp-A0h]
  struct SYSTEM_AUDIO_STREAM *v75; // [rsp+C0h] [rbp-98h]
  __int64 v76; // [rsp+C8h] [rbp-90h]
  WINBOOL *v77; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v78; // [rsp+D8h] [rbp-80h]
  char v79; // [rsp+E8h] [rbp-70h]
  __int128 v80; // [rsp+F0h] [rbp-68h]
  __int128 v81; // [rsp+100h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v76 = -2LL;
  v4 = a4;
  v6 = a2;
  v74 = a2;
  v75 = a4;
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
  if ( fPending[0] )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_14008A158;
    qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v63 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&lpCriticalSection, v47, v48);
  }
  v8 = (void *)*((_QWORD *)Context + 1);
  v9 = g_AudioDgWatchDogTimerInMs;
  phNewTimer[0] = 0LL;
  phNewTimer[1] = v8;
  CurrentThreadId = GetCurrentThreadId();
  v71 = L"CSubmixImpl::CreateStream";
  v72 = 0LL;
  v73 = 0;
  if ( v9 >= 0x3E8 )
    CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, v9, 0, 0x20u);
  Context = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  LOBYTE(v63) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  if ( *((_BYTE *)this + 273) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DE,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      (int)DueTime);
    if ( (_BYTE)v63 )
      LeaveCriticalSection(lpCriticalSection);
    ATL::CAutoPtr<CPipeInstance>::Free(&Context);
    CWatchdogTimer::~CWatchdogTimer(phNewTimer);
    return 2147549183LL;
  }
  if ( !v6 )
  {
    LastError = -2147467261;
    goto LABEL_59;
  }
  if ( *(_DWORD *)v6 > 2u )
  {
    LastError = -2147024809;
    goto LABEL_59;
  }
  v10 = *((_DWORD *)v6 + 18);
  if ( v10 < 0x12 )
  {
    LastError = -2147024809;
    goto LABEL_59;
  }
  v11 = (const struct tWAVEFORMATEX *)*((_QWORD *)v6 + 10);
  if ( !v11 )
  {
    LastError = -2147467261;
LABEL_59:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1E1,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)LastError,
      (int)DueTime);
    if ( !(_BYTE)v63 )
    {
LABEL_61:
      ATL::CAutoPtr<CPipeInstance>::Free(&Context);
      CWatchdogTimer::~CWatchdogTimer(phNewTimer);
      return (unsigned int)LastError;
    }
LABEL_60:
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_61;
  }
  if ( v11->wFormatTag == 0xFFFE && v10 < 0x28 )
  {
    LastError = -2147024809;
    goto LABEL_59;
  }
  LastError = ValidateWaveFormatEx(v11);
  if ( LastError < 0 )
    goto LABEL_59;
  v80 = *((_OWORD *)v6 + 3);
  v81 = v80;
  EtwEventActivityIdControl(4LL, &v81);
  if ( *((_QWORD *)this + 24) != *((_QWORD *)v6 + 4) )
  {
    v50 = 487LL;
LABEL_63:
    LastError = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x80070057LL,
      (int)DueTime);
    goto LABEL_64;
  }
  v13 = *(_QWORD *)((char *)v6 + 116) - *((_QWORD *)this + 25);
  if ( !v13 )
    v13 = *(_QWORD *)((char *)v6 + 124) - *((_QWORD *)this + 26);
  if ( v13 )
  {
    v51 = *(_QWORD *)((char *)v6 + 116) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v51 )
      v51 = *(_QWORD *)((char *)v6 + 124) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v51 )
    {
      v50 = 493LL;
      goto LABEL_63;
    }
  }
  StreamPipeInstance = CPipeInstance::CreateStreamPipeInstance(
                         *((struct IDeviceGraphObjectCache **)this + 28),
                         v6,
                         *((struct CPipeInstance **)this + 3),
                         *((struct tWAVEFORMATEX **)this + 23),
                         DueTime,
                         (struct CPipeInstance **)&Context);
  LastError = StreamPipeInstance;
  if ( StreamPipeInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1F4,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)StreamPipeInstance,
      DueTimea);
    goto LABEL_64;
  }
  v15 = (CPipeInstance *)Context;
  v16 = CPipeInstance::Initialize((CPipeInstance *)Context);
  StreamInstance = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1F5,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v16,
      DueTimea);
    EtwEventActivityIdControl(4LL, &v81);
    if ( !(_BYTE)v63 )
    {
LABEL_73:
      ATL::CAutoPtr<CPipeInstance>::Free(&Context);
      CWatchdogTimer::~CWatchdogTimer(phNewTimer);
      return (unsigned int)StreamInstance;
    }
LABEL_72:
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_73;
  }
  StreamInstance = CPipeInstance::ConnectAPOs(v15, a3);
  if ( StreamInstance < 0 )
  {
    v52 = 502LL;
    goto LABEL_76;
  }
  StreamInstance = CPipeInstance::CreateStreamInstance(v15, v6, v4);
  if ( StreamInstance < 0 )
  {
    v52 = 504LL;
LABEL_76:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v52,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)StreamInstance,
      DueTimea);
    EtwEventActivityIdControl(4LL, &v81);
    if ( !(_BYTE)v63 )
      goto LABEL_73;
    goto LABEL_72;
  }
  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v19 = GetCurrentProcess();
  if ( !DuplicateHandle(v19, *((HANDLE *)v4 + 3), CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1FE,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                  v20);
LABEL_79:
    v53 = TargetHandle;
    v54 = (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_81:
    if ( v54 )
      CloseHandle(v53);
LABEL_64:
    EtwEventActivityIdControl(4LL, &v81);
    if ( !(_BYTE)v63 )
      goto LABEL_61;
    goto LABEL_60;
  }
  hObject = 0LL;
  v21 = GetCurrentProcess();
  v22 = GetCurrentProcess();
  if ( !DuplicateHandle(v22, *((HANDLE *)v4 + 4), v21, &hObject, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x202,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                  v23);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    goto LABEL_79;
  }
  v64 = 0LL;
  v24 = CStreamInstance::CreateStreamInstance(&v64, *((_DWORD *)v6 + 3), *(_DWORD *)v6, (__int64)v15, (__int64)v15);
  LastError = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x20B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v24,
      DueTimeb);
    v56 = v64;
    if ( !v64 )
    {
LABEL_87:
      v64 = 0LL;
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      v53 = TargetHandle;
      v54 = (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
      goto LABEL_81;
    }
LABEL_86:
    CStreamInstance::`scalar deleting destructor'(v56, v55);
    goto LABEL_87;
  }
  Context = 0LL;
  v26 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 33);
  if ( v26 )
  {
    v27 = **v26;
    if ( (char *)v27 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
      ATL::CComObject<CStreamGroup>::QueryInterface(v26, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v65);
    else
      v27(v26, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v65);
    v28 = v65;
  }
  else
  {
    v28 = 0LL;
    v65 = 0LL;
  }
  if ( v28 )
  {
    v29 = (const struct CPipeInstance *)*((_QWORD *)this + 29);
    v30 = v64;
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
    v31 = CStreamInstance::ConnectToRightSubmix(v30, v28, v29);
    LastError = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x213,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v31,
        DueTimeb);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v65);
      v56 = v64;
      if ( !v64 )
        goto LABEL_87;
      goto LABEL_86;
    }
  }
  *(_QWORD *)fPending = &v65;
  *(_QWORD *)&fPending[2] = &v64;
  v78 = *(_OWORD *)fPending;
  v79 = 1;
  try
  {
    v32 = v64;
    v33 = *((_QWORD *)this + 4);
    if ( !*((_QWORD *)this + 8) )
    {
      v34 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 7, *((unsigned int *)this + 18), 0x18uLL);
      if ( !v34 )
        ATL::AtlThrowImpl(-2147024882);
      v35 = *((_DWORD *)this + 18);
      v36 = (_QWORD *)((char *)v34 + 16 * (v35 - 1) + 8 * (unsigned int)(v35 - 1) + 8);
      for ( i = v35 - 1; i >= 0; --i )
      {
        *v36 = *((_QWORD *)this + 8);
        *((_QWORD *)this + 8) = v36;
        v36 -= 3;
      }
    }
    v38 = (__int64 *)*((_QWORD *)this + 8);
    *(_QWORD *)fPending = v38;
    v39 = *v38;
    if ( v38 )
      v38[2] = (__int64)v32;
    *((_QWORD *)this + 8) = v39;
    v38[1] = 0LL;
    *v38 = v33;
    ++*((_QWORD *)this + 6);
    v40 = *((_QWORD *)this + 4);
    if ( v40 )
      *(_QWORD *)(v40 + 8) = v38;
    else
      *((_QWORD *)this + 5) = v38;
    *((_QWORD *)this + 4) = v38;
  }
  catch ( ATL::CAtlException *v77 )
  {
    v49 = v77;
    if ( *v77 == -1073741571 )
      _o__resetstkoflw();
    fPending[0] = *v49;
    LastError = fPending[0];
    if ( fPending[0] < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x220,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)fPending[0],
        DueTimeb);
      if ( v65 )
        CStreamInstance::DisconnectFromRightSubmix((struct CPipeInstance **)v64, v65);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v65);
      if ( v64 )
        CStreamInstance::`scalar deleting destructor'(v64, v57);
      goto LABEL_87;
    }
    v6 = v74;
    v4 = v75;
  }
  *((_QWORD *)v4 + 6) = *((_QWORD *)v64 + 1);
  v64 = 0LL;
  v79 = 0;
  v41 = TargetHandle;
  TargetHandle = 0LL;
  *((_QWORD *)v4 + 3) = v41;
  v42 = hObject;
  hObject = 0LL;
  *((_QWORD *)v4 + 4) = v42;
  LOBYTE(v25) = 1;
  TrackSystemEffectBehavior(*((_QWORD *)v6 + 13), 1LL, 1LL, v25);
  LOBYTE(v43) = 1;
  TrackSystemEffectBehavior(*((_QWORD *)v6 + 13), 2LL, 1LL, v43);
  LOBYTE(v44) = 1;
  TrackSystemEffectBehavior(*((_QWORD *)v6 + 13), 3LL, 1LL, v44);
  PublishDeviceGraphWnfState();
  if ( v65 )
    (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v65 + 16LL))(v65);
  if ( v64 )
    CStreamInstance::`scalar deleting destructor'(v64, v45);
  v64 = 0LL;
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TargetHandle);
  EtwEventActivityIdControl(4LL, &v81);
  if ( (_BYTE)v63 )
    LeaveCriticalSection(lpCriticalSection);
  CWatchdogTimer::~CWatchdogTimer(phNewTimer);
  return 0LL;
}
