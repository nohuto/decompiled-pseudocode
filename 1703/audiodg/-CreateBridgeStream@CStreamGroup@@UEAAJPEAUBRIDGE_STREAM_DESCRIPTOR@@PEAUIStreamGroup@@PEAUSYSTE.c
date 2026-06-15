/*
 * XREFs of ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043970
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400014A8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400036D4 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400037B0 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     wil::ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___ @ 0x14000391C (wil--ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??$try_copy@UISubmixInternal@@@?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISubmixInternal@@Uerr_returncode_policy@wil@@@1@XZ @ 0x140008780 (--$try_copy@UISubmixInternal@@@-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-$.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000AC54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B9C0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400141C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x14001A350 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140031194 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140031214 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400312AC (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x1400313A0 (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1400313E8 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003EEC8 (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003EF74 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
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
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  struct IAudioProcessingObject *v17; // rcx
  int BridgeStreamPipeInstance; // eax
  __int64 v19; // rdx
  CPipeInstance *v20; // rbx
  struct SYSTEM_AUDIO_STREAM *v21; // r9
  int v22; // eax
  struct ISubmixInternal *v23; // r14
  const struct CPipeInstance *v24; // rbx
  CStreamInstance *v25; // rdi
  int v26; // eax
  ATL::CAtlException *v28; // rbx
  struct SYSTEM_AUDIO_STREAM *v29; // [rsp+28h] [rbp-E0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+48h] [rbp-C0h]
  struct IAudioProcessingObject *v32; // [rsp+50h] [rbp-B8h] BYREF
  CStreamInstance *v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-A0h] BYREF
  struct ISubmixInternal *v36; // [rsp+70h] [rbp-98h] BYREF
  __int128 v37; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v38[2]; // [rsp+88h] [rbp-80h] BYREF
  char v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  ATL::CAtlException *v41; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE Parameter[11]; // [rsp+B0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  char *v44; // [rsp+110h] [rbp+8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v45; // [rsp+128h] [rbp+20h]

  v45 = a4;
  v40 = -2LL;
  v4 = a4;
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v44, &Context);
  if ( (_DWORD)v44 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_140086158;
    qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v31 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&lpCriticalSection, v9, v10);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context + 1),
    v8,
    L"CStreamGroup::CreateBridgeStream");
  Context = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  LOBYTE(v31) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  if ( *((_BYTE *)this + 297) )
  {
    v11 = 134LL;
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
      (void *)0x89,
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
    v11 = 140LL;
    goto LABEL_16;
  }
  if ( *((_QWORD *)this + 27) != *((_QWORD *)a2 + 4) )
  {
    v11 = 141LL;
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
      v11 = 147LL;
      goto LABEL_16;
    }
  }
  v32 = 0LL;
  v34 = 0LL;
  (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
    a3,
    &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
    &v34);
  v16 = v34;
  if ( v34 )
  {
    v17 = v32;
    v32 = 0LL;
    if ( v17 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v17->lpVtbl->Release)(v17);
    BridgeStreamPipeInstance = (*(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v16 + 24LL))(
                                 v16,
                                 &v32);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 155LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)BridgeStreamPipeInstance);
LABEL_32:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v34);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v32);
LABEL_10:
      if ( (_BYTE)v31 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_62;
    }
  }
  if ( v32 )
  {
    BridgeStreamPipeInstance = CPipeInstance::CreateBridgeStreamPipeInstance(
                                 *((struct IUnknown **)this + 31),
                                 a2,
                                 v32,
                                 *((struct CPipeInstance **)this + 6),
                                 *((struct tWAVEFORMATEX **)this + 26),
                                 v29,
                                 (struct CPipeInstance **)&Context);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 167LL;
      goto LABEL_31;
    }
    v20 = (CPipeInstance *)Context;
    BridgeStreamPipeInstance = CPipeInstance::Initialize((CPipeInstance *)Context);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 169LL;
      goto LABEL_31;
    }
    BridgeStreamPipeInstance = CPipeInstance::ConnectAPOs(v20, 0LL);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 170LL;
      goto LABEL_31;
    }
    BridgeStreamPipeInstance = CPipeInstance::CreateApoEndpointInstance(v20, a2, v32, v21);
    v12 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v19 = 171LL;
      goto LABEL_31;
    }
    v33 = 0LL;
    v22 = CStreamInstance::CreateStreamInstance(&v33, 0, *(_DWORD *)a2, (__int64)v20, (__int64)v20);
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB3,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v22);
LABEL_44:
      if ( v33 )
        CStreamInstance::`scalar deleting destructor'(v33);
      v33 = 0LL;
      goto LABEL_32;
    }
    Context = 0LL;
    wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::try_copy<ISubmixInternal>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 36,
      &v36);
    v23 = v36;
    if ( v36 )
    {
      v24 = (const struct CPipeInstance *)*((_QWORD *)this + 32);
      v25 = v33;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 64LL))((char *)this + 24);
      v26 = CStreamInstance::ConnectToRightSubmix(v25, v23, v24);
      v12 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xBB,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)v26);
LABEL_50:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v36);
        goto LABEL_44;
      }
    }
    *(_QWORD *)&v37 = &v36;
    *((_QWORD *)&v37 + 1) = &v33;
    wil::ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___((__int64)v38, &v37);
    try
    {
      v44 = (char *)v33;
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead((_QWORD *)this + 7, &v44);
    }
    catch ( ATL::CAtlException *v41 )
    {
      v28 = v41;
      if ( *(_DWORD *)v41 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v44) = *(_DWORD *)v28;
      v12 = (unsigned int)v44;
      if ( (int)v44 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xC9,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)v44);
        if ( v39 && *(_QWORD *)v38[0] )
          CStreamInstance::DisconnectFromRightSubmix(
            *(struct CPipeInstance ***)v38[1],
            *(struct ISubmixInternal **)v38[0]);
        goto LABEL_50;
      }
      v4 = v45;
    }
    *((_QWORD *)v4 + 6) = *((_QWORD *)v33 + 1);
    v33 = 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v36);
    if ( v33 )
      CStreamInstance::`scalar deleting destructor'(v33);
  }
  PublishDeviceGraphWnfState();
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v34);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v32);
  if ( (_BYTE)v31 )
    LeaveCriticalSection(lpCriticalSection);
  v12 = 0;
LABEL_62:
  ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)&Context);
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  return v12;
}
