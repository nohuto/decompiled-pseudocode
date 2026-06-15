/*
 * XREFs of ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400025F0 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400431D0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??0?$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x14000184C (--0-$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$01@@QEAA@XZ @ 0x140001918 (--1-$CWatchdogTimer@$01@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x140001B60 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140002F60 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400030B4 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003190 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400066A0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140007B00 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009CB8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B290 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000CB04 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140010960 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x140011414 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015040 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002FC4C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14002FC9C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FCC4 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140032510 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CSubmixImpl::CreateStream(
        CSubmixImpl *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r13
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v6; // r14
  __int64 *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // eax
  const struct tWAVEFORMATEX *v11; // rcx
  int LastError; // ebx
  __int64 v13; // rax
  CPipeInstance *v14; // rbx
  int v15; // eax
  int StreamInstance; // edi
  HANDLE CurrentProcess; // rdi
  HANDLE v18; // rax
  const char *v19; // r9
  HANDLE v20; // rdi
  HANDLE v21; // rax
  const char *v22; // r9
  int v23; // eax
  void (__fastcall ***v24)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  void (__fastcall *v25)(_QWORD, GUID *, struct ISubmixInternal **); // rax
  struct ISubmixInternal *v26; // r12
  const struct CPipeInstance *v27; // rbx
  CStreamInstance *v28; // rdi
  int v29; // eax
  CStreamInstance *v30; // rbx
  __int64 v31; // rdi
  struct ATL::CAtlPlex *v32; // rax
  int v33; // edx
  _QWORD *v34; // rax
  int i; // edx
  char *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  HANDLE v39; // rax
  HANDLE v40; // rax
  unsigned int v41; // edx
  ATL::CAtlException *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  HANDLE v47; // rcx
  bool v48; // cc
  unsigned int v49; // edx
  CStreamInstance *v50; // rcx
  unsigned int v51; // edx
  struct SYSTEM_AUDIO_STREAM *dwDesiredAccess; // [rsp+20h] [rbp-138h]
  int dwDesiredAccessa; // [rsp+20h] [rbp-138h]
  CPipeInstance *v54; // [rsp+40h] [rbp-118h] BYREF
  CStreamInstance *v55; // [rsp+48h] [rbp-110h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-108h] BYREF
  char v57; // [rsp+58h] [rbp-100h]
  struct ISubmixInternal *v58; // [rsp+60h] [rbp-F8h] BYREF
  HANDLE TargetHandle; // [rsp+68h] [rbp-F0h] BYREF
  HANDLE hObject; // [rsp+70h] [rbp-E8h] BYREF
  char *v61[2]; // [rsp+78h] [rbp-E0h]
  struct _TP_TIMER *pv[6]; // [rsp+88h] [rbp-D0h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v63; // [rsp+B8h] [rbp-A0h]
  struct SYSTEM_AUDIO_STREAM *v64; // [rsp+C0h] [rbp-98h]
  __int64 v65; // [rsp+C8h] [rbp-90h]
  ATL::CAtlException *v66; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v67; // [rsp+D8h] [rbp-80h]
  char v68; // [rsp+E8h] [rbp-70h]
  __int128 v69; // [rsp+F0h] [rbp-68h]
  __int128 v70; // [rsp+100h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v65 = -2LL;
  v4 = a4;
  v6 = a2;
  v63 = a2;
  v64 = a4;
  v8 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
         (__int64)this,
         lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  CWatchdogTimer<2>::CWatchdogTimer<2>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v9,
    (struct _TP_TIMER *)L"CSubmixImpl::CreateStream",
    (__int64)&pftDueTime);
  v54 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v57 = 0;
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
      (int)dwDesiredAccess);
    if ( v57 )
      LeaveCriticalSection(lpCriticalSection);
    ATL::CAutoPtr<CPipeInstance>::Free(&v54);
    CWatchdogTimer<2>::~CWatchdogTimer<2>((__int64)pv);
    return 2147549183LL;
  }
  if ( !v6 )
  {
    LastError = -2147467261;
    goto LABEL_53;
  }
  if ( *(_DWORD *)v6 > 2u )
  {
    LastError = -2147024809;
    goto LABEL_53;
  }
  v10 = *((_DWORD *)v6 + 18);
  if ( v10 < 0x12 )
  {
    LastError = -2147024809;
    goto LABEL_53;
  }
  v11 = (const struct tWAVEFORMATEX *)*((_QWORD *)v6 + 10);
  if ( !v11 )
  {
    LastError = -2147467261;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E1,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)LastError,
      (int)dwDesiredAccess);
    if ( !v57 )
    {
LABEL_55:
      ATL::CAutoPtr<CPipeInstance>::Free(&v54);
      CWatchdogTimer<2>::~CWatchdogTimer<2>((__int64)pv);
      return (unsigned int)LastError;
    }
LABEL_54:
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_55;
  }
  if ( v11->wFormatTag == 0xFFFE && v10 < 0x28 )
  {
    LastError = -2147024809;
    goto LABEL_53;
  }
  LastError = ValidateWaveFormatEx(v11);
  if ( LastError < 0 )
    goto LABEL_53;
  v69 = *((_OWORD *)v6 + 3);
  v70 = v69;
  EtwEventActivityIdControl(4LL, &v70);
  if ( *((_QWORD *)this + 24) != *((_QWORD *)v6 + 4) )
  {
    v44 = 487LL;
LABEL_57:
    LastError = -2147024809;
LABEL_59:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)LastError,
      (int)dwDesiredAccess);
    goto LABEL_60;
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
      v44 = 493LL;
      goto LABEL_57;
    }
  }
  LastError = CPipeInstance::CreateStreamPipeInstance(
                *((struct IDeviceGraphObjectCache **)this + 28),
                v6,
                *((struct CPipeInstance **)this + 3),
                *((struct tWAVEFORMATEX **)this + 23),
                dwDesiredAccess,
                &v54);
  if ( LastError < 0 )
  {
    v44 = 500LL;
    goto LABEL_59;
  }
  v14 = v54;
  v15 = CPipeInstance::Initialize(v54);
  StreamInstance = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v15,
      (int)dwDesiredAccess);
    EtwEventActivityIdControl(4LL, &v70);
    if ( !v57 )
    {
LABEL_68:
      ATL::CAutoPtr<CPipeInstance>::Free(&v54);
      CWatchdogTimer<2>::~CWatchdogTimer<2>((__int64)pv);
      return (unsigned int)StreamInstance;
    }
LABEL_67:
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_68;
  }
  StreamInstance = CPipeInstance::ConnectAPOs(v14, a3);
  if ( StreamInstance < 0 )
  {
    v46 = 502LL;
    goto LABEL_71;
  }
  StreamInstance = CPipeInstance::CreateStreamInstance(v14, v6, v4);
  if ( StreamInstance < 0 )
  {
    v46 = 504LL;
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v46,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)StreamInstance,
      (int)dwDesiredAccess);
    EtwEventActivityIdControl(4LL, &v70);
    if ( !v57 )
      goto LABEL_68;
    goto LABEL_67;
  }
  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v18 = GetCurrentProcess();
  if ( !DuplicateHandle(v18, *((HANDLE *)v4 + 3), CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1FE,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                  v19);
LABEL_74:
    v47 = TargetHandle;
    v48 = (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_76:
    if ( v48 )
      CloseHandle(v47);
LABEL_60:
    EtwEventActivityIdControl(4LL, &v70);
    if ( !v57 )
      goto LABEL_55;
    goto LABEL_54;
  }
  hObject = 0LL;
  v20 = GetCurrentProcess();
  v21 = GetCurrentProcess();
  if ( !DuplicateHandle(v21, *((HANDLE *)v4 + 4), v20, &hObject, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x202,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                  v22);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    goto LABEL_74;
  }
  v55 = 0LL;
  v23 = CStreamInstance::CreateStreamInstance(&v55, *((_DWORD *)v6 + 3), *(_DWORD *)v6, (__int64)v14, (__int64)v14);
  LastError = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v23,
      dwDesiredAccessa);
    v50 = v55;
    if ( !v55 )
    {
LABEL_82:
      v55 = 0LL;
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      v47 = TargetHandle;
      v48 = (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
      goto LABEL_76;
    }
LABEL_81:
    CStreamInstance::`scalar deleting destructor'(v50, v49);
    goto LABEL_82;
  }
  v54 = 0LL;
  v24 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 33);
  if ( v24 )
  {
    v25 = **v24;
    if ( (char *)v25 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
      ATL::CComObject<CStreamGroup>::QueryInterface(v24, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v58);
    else
      v25(v24, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v58);
    v26 = v58;
  }
  else
  {
    v26 = 0LL;
    v58 = 0LL;
  }
  if ( v26 )
  {
    v27 = (const struct CPipeInstance *)*((_QWORD *)this + 29);
    v28 = v55;
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
    v29 = CStreamInstance::ConnectToRightSubmix(v28, v26, v27);
    LastError = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v29,
        dwDesiredAccessa);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v58);
      v50 = v55;
      if ( !v55 )
        goto LABEL_82;
      goto LABEL_81;
    }
  }
  v61[0] = (char *)&v58;
  v61[1] = (char *)&v55;
  v67 = *(_OWORD *)v61;
  v68 = 1;
  try
  {
    v30 = v55;
    v31 = *((_QWORD *)this + 4);
    if ( !*((_QWORD *)this + 8) )
    {
      v32 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 7, *((unsigned int *)this + 18), 0x18uLL);
      if ( !v32 )
        ATL::AtlThrowImpl(-2147024882);
      v33 = *((_DWORD *)this + 18);
      v34 = (_QWORD *)((char *)v32 + 16 * (v33 - 1) + 8 * (unsigned int)(v33 - 1) + 8);
      for ( i = v33 - 1; i >= 0; --i )
      {
        *v34 = *((_QWORD *)this + 8);
        *((_QWORD *)this + 8) = v34;
        v34 -= 3;
      }
    }
    v36 = (char *)*((_QWORD *)this + 8);
    v61[0] = v36;
    v37 = *(_QWORD *)v36;
    *((_QWORD *)v36 + 2) = v30;
    *((_QWORD *)this + 8) = v37;
    *((_QWORD *)v36 + 1) = 0LL;
    *(_QWORD *)v36 = v31;
    ++*((_QWORD *)this + 6);
    v38 = *((_QWORD *)this + 4);
    if ( v38 )
      *(_QWORD *)(v38 + 8) = v36;
    else
      *((_QWORD *)this + 5) = v36;
    *((_QWORD *)this + 4) = v36;
  }
  catch ( ATL::CAtlException *v66 )
  {
    v43 = v66;
    if ( *(_DWORD *)v66 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v61[0]) = *(_DWORD *)v43;
    LastError = (int)v61[0];
    if ( SLODWORD(v61[0]) < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x220,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)LODWORD(v61[0]),
        dwDesiredAccessa);
      if ( v58 )
        CStreamInstance::DisconnectFromRightSubmix((struct CPipeInstance **)v55, v58);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v58);
      if ( v55 )
        CStreamInstance::`scalar deleting destructor'(v55, v51);
      goto LABEL_82;
    }
    v6 = v63;
    v4 = v64;
  }
  *((_QWORD *)v4 + 6) = *((_QWORD *)v55 + 1);
  v55 = 0LL;
  v68 = 0;
  v39 = TargetHandle;
  TargetHandle = 0LL;
  *((_QWORD *)v4 + 3) = v39;
  v40 = hObject;
  hObject = 0LL;
  *((_QWORD *)v4 + 4) = v40;
  TrackSystemEffectBehavior(*((_QWORD *)v6 + 13), 1LL, 1LL);
  TrackSystemEffectBehavior(*((_QWORD *)v6 + 13), 2LL, 1LL);
  TrackSystemEffectBehavior(*((_QWORD *)v6 + 13), 3LL, 1LL);
  PublishDeviceGraphWnfState();
  if ( v58 )
    (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v55 )
    CStreamInstance::`scalar deleting destructor'(v55, v41);
  v55 = 0LL;
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TargetHandle);
  EtwEventActivityIdControl(4LL, &v70);
  if ( v57 )
    LeaveCriticalSection(lpCriticalSection);
  CWatchdogTimer<2>::~CWatchdogTimer<2>((__int64)pv);
  return 0LL;
}
