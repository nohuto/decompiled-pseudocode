/*
 * XREFs of ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140044310
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x140001310 (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x140001BA0 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140001D90 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001E70 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400078D8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140008F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FFDC (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140030BF8 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140030C78 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x140030DE0 (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x140030E68 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033668 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003F9D4 (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003FA80 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStreamGroup::CreateBridgeStream(
        CStreamGroup *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroup *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r13
  __int64 v8; // r8
  void (__stdcall *v9)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct IAudioProcessingObject *v17; // rcx
  int BridgeStreamPipeInstance; // eax
  __int64 v19; // rdx
  CPipeInstance *v20; // rbx
  struct SYSTEM_AUDIO_STREAM *v21; // r9
  int v22; // eax
  __int64 v23; // r8
  void (__fastcall ***v24)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v25; // r14
  const struct CPipeInstance *v26; // rbx
  CStreamInstance *v27; // rdi
  int v28; // eax
  ATL::CAtlException *v30; // rbx
  LPVOID *v31; // [rsp+28h] [rbp-D0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-B8h] BYREF
  int v33; // [rsp+48h] [rbp-B0h]
  CStreamInstance *v34; // [rsp+50h] [rbp-A8h] BYREF
  struct IAudioProcessingObject *v35; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-98h] BYREF
  struct ISubmixInternal *v37; // [rsp+68h] [rbp-90h] BYREF
  LPVOID Context[3]; // [rsp+70h] [rbp-88h] BYREF
  char v39; // [rsp+88h] [rbp-70h]
  __int64 v40; // [rsp+90h] [rbp-68h]
  ATL::CAtlException *v41; // [rsp+98h] [rbp-60h] BYREF
  HANDLE Parameter[11]; // [rsp+A0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  char *v44; // [rsp+100h] [rbp+8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v45; // [rsp+118h] [rbp+20h]

  v45 = a4;
  v40 = -2LL;
  v4 = a4;
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v44, Context);
  if ( (_DWORD)v44 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context[0] = &qword_14008A158;
    qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v33 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&lpCriticalSection, v9, v10);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context[0] + 1),
    v8,
    L"CStreamGroup::CreateBridgeStream");
  Context[0] = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  LOBYTE(v33) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  if ( *((_BYTE *)this + 297) )
  {
    v11 = 135LL;
LABEL_16:
    v12 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)0x80070057LL);
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v12 = -2147467261;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8A,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)v12);
    goto LABEL_10;
  }
  if ( *(_DWORD *)a2 > 2u )
  {
    v12 = -2147024809;
    goto LABEL_9;
  }
  v13 = *((_DWORD *)this + 60);
  if ( v13 != *(_DWORD *)a2 && (v13 != 2 || *((_DWORD *)a2 + 2) != 2) )
  {
    v11 = 141LL;
    goto LABEL_16;
  }
  if ( *((_QWORD *)this + 27) != *((_QWORD *)a2 + 4) )
  {
    v11 = 142LL;
    goto LABEL_16;
  }
  v14 = *(_QWORD *)((char *)a2 + 12) - *((_QWORD *)this + 28);
  if ( !v14 )
    v14 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)this + 29);
  if ( v14 )
  {
    v15 = *(_QWORD *)((char *)a2 + 12) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v15 )
      v15 = *(_QWORD *)((char *)a2 + 20) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v15 )
    {
      v11 = 148LL;
      goto LABEL_16;
    }
  }
  v35 = 0LL;
  v36 = 0LL;
  (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
    a3,
    &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
    &v36);
  v16 = v36;
  if ( v36 )
  {
    v17 = v35;
    v35 = 0LL;
    if ( v17 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v17->lpVtbl->Release)(v17);
    BridgeStreamPipeInstance = (*(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v16 + 24LL))(
                                 v16,
                                 &v35);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 156LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)BridgeStreamPipeInstance);
LABEL_32:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v36);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_10:
      if ( (_BYTE)v33 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_64;
    }
  }
  if ( v35 )
  {
    BridgeStreamPipeInstance = CPipeInstance::CreateBridgeStreamPipeInstance(
                                 *((struct IUnknown **)this + 31),
                                 a2,
                                 v35,
                                 *((struct CPipeInstance **)this + 6),
                                 *((struct tWAVEFORMATEX **)this + 26),
                                 v31,
                                 (struct CPipeInstance **)Context);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 168LL;
      goto LABEL_31;
    }
    v20 = (CPipeInstance *)Context[0];
    BridgeStreamPipeInstance = CPipeInstance::Initialize((CPipeInstance *)Context[0]);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 170LL;
      goto LABEL_31;
    }
    BridgeStreamPipeInstance = CPipeInstance::ConnectAPOs(v20, 0LL);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 171LL;
      goto LABEL_31;
    }
    BridgeStreamPipeInstance = CPipeInstance::CreateApoEndpointInstance(v20, a2, v35, v21);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 172LL;
      goto LABEL_31;
    }
    v34 = 0LL;
    v22 = CStreamInstance::CreateStreamInstance(&v34, 0, *(_DWORD *)a2, (__int64)v20, (__int64)v20);
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB4,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v22);
LABEL_44:
      if ( v34 )
        CStreamInstance::`scalar deleting destructor'(v34);
      v34 = 0LL;
      goto LABEL_32;
    }
    Context[0] = 0LL;
    v24 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 36);
    if ( v24 )
    {
      (**v24)(v24, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v37);
      v25 = v37;
    }
    else
    {
      v25 = 0LL;
      v37 = 0LL;
    }
    if ( v25 )
    {
      v26 = (const struct CPipeInstance *)*((_QWORD *)this + 32);
      v27 = v34;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 64LL))((char *)this + 24);
      v28 = CStreamInstance::ConnectToRightSubmix(v27, v25, v26);
      v12 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xBC,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)v28);
LABEL_53:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v37);
        goto LABEL_44;
      }
    }
    Context[1] = &v37;
    Context[2] = &v34;
    v39 = 1;
    try
    {
      v44 = (char *)v34;
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
        (__int64 *)this + 7,
        (__int64 *)&v44,
        v23);
    }
    catch ( ATL::CAtlException *v41 )
    {
      v30 = v41;
      if ( *(_DWORD *)v41 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v44) = *(_DWORD *)v30;
      v12 = (unsigned int)v44;
      if ( (int)v44 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xCA,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)v44);
        if ( v37 )
          CStreamInstance::DisconnectFromRightSubmix((struct CPipeInstance **)v34, v37);
        goto LABEL_53;
      }
      v4 = v45;
    }
    *((_QWORD *)v4 + 6) = *((_QWORD *)v34 + 1);
    v34 = 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v37);
    if ( v34 )
      CStreamInstance::`scalar deleting destructor'(v34);
  }
  PublishDeviceGraphWnfState();
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v36);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v35);
  if ( (_BYTE)v33 )
    LeaveCriticalSection(lpCriticalSection);
  v12 = 0;
LABEL_64:
  ATL::CAutoPtr<CPipeInstance>::Free((LPVOID **)Context);
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  return v12;
}
