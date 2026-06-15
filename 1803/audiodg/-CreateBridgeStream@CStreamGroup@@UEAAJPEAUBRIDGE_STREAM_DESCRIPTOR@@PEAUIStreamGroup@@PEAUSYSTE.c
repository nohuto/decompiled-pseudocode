/*
 * XREFs of ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140042C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x14000184C (--0-$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$01@@QEAA@XZ @ 0x140001918 (--1-$CWatchdogTimer@$01@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x140001B60 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400030B4 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003190 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140007B00 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009CB8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B290 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002FC4C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14002FC9C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FCC4 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x14002FDF8 (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003D994 (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003DA40 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStreamGroup::CreateBridgeStream(
        CStreamGroup *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroup *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r13
  __int64 *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  struct IAudioProcessingObject *v16; // rcx
  int BridgeStreamPipeInstance; // eax
  __int64 v18; // rdx
  CPipeInstance *v19; // rbx
  struct SYSTEM_AUDIO_STREAM *v20; // r9
  int v21; // eax
  __int64 v22; // r8
  void (__fastcall ***v23)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v24; // r14
  const struct CPipeInstance *v25; // rbx
  CStreamInstance *v26; // rdi
  int v27; // eax
  ATL::CAtlException *v29; // rbx
  struct SYSTEM_AUDIO_STREAM *v30; // [rsp+28h] [rbp-D0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-B8h] BYREF
  char v32; // [rsp+48h] [rbp-B0h]
  CStreamInstance *v33; // [rsp+50h] [rbp-A8h] BYREF
  struct IAudioProcessingObject *v34; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-98h] BYREF
  struct ISubmixInternal *v36; // [rsp+68h] [rbp-90h] BYREF
  CPipeInstance *v37[3]; // [rsp+70h] [rbp-88h] BYREF
  char v38; // [rsp+88h] [rbp-70h]
  __int64 v39; // [rsp+90h] [rbp-68h]
  ATL::CAtlException *v40; // [rsp+98h] [rbp-60h] BYREF
  struct _TP_TIMER *pv[11]; // [rsp+A0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  char *v43; // [rsp+100h] [rbp+8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v44; // [rsp+118h] [rbp+20h]

  v44 = a4;
  v39 = -2LL;
  v4 = a4;
  v8 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
         (__int64)this,
         lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  CWatchdogTimer<2>::CWatchdogTimer<2>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v9,
    (struct _TP_TIMER *)L"CStreamGroup::CreateBridgeStream",
    (__int64)&pftDueTime);
  v37[0] = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v32 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  if ( *((_BYTE *)this + 297) )
  {
    v10 = -2147024809;
    v11 = 135LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)v10);
    goto LABEL_9;
  }
  if ( !a2 )
  {
    v10 = -2147467261;
LABEL_7:
    v11 = 138LL;
    goto LABEL_8;
  }
  if ( *(_DWORD *)a2 > 2u )
  {
    v10 = -2147024809;
    goto LABEL_7;
  }
  v12 = *((_DWORD *)this + 60);
  if ( v12 != *(_DWORD *)a2 && (v12 != 2 || *((_DWORD *)a2 + 2) != 2) )
  {
    v10 = -2147024809;
    v11 = 141LL;
    goto LABEL_8;
  }
  if ( *((_QWORD *)this + 27) != *((_QWORD *)a2 + 4) )
  {
    v10 = -2147024809;
    v11 = 142LL;
    goto LABEL_8;
  }
  v13 = *(_QWORD *)((char *)a2 + 12) - *((_QWORD *)this + 28);
  if ( !v13 )
    v13 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)this + 29);
  if ( v13 )
  {
    v14 = *(_QWORD *)((char *)a2 + 12) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v14 )
      v14 = *(_QWORD *)((char *)a2 + 20) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v14 )
    {
      v10 = -2147024809;
      v11 = 148LL;
      goto LABEL_8;
    }
  }
  v34 = 0LL;
  v35 = 0LL;
  (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
    a3,
    &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
    &v35);
  v15 = v35;
  if ( v35 )
  {
    v16 = v34;
    v34 = 0LL;
    if ( v16 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v16->lpVtbl->Release)(v16);
    BridgeStreamPipeInstance = (*(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v15 + 24LL))(
                                 v15,
                                 &v34);
    v10 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v18 = 156LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)BridgeStreamPipeInstance);
LABEL_30:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v35);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v34);
LABEL_9:
      if ( v32 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_62;
    }
  }
  if ( v34 )
  {
    BridgeStreamPipeInstance = CPipeInstance::CreateBridgeStreamPipeInstance(
                                 *((struct IUnknown **)this + 31),
                                 a2,
                                 v34,
                                 *((struct CPipeInstance **)this + 6),
                                 *((struct tWAVEFORMATEX **)this + 26),
                                 v30,
                                 v37);
    v10 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v18 = 168LL;
      goto LABEL_29;
    }
    v19 = v37[0];
    BridgeStreamPipeInstance = CPipeInstance::Initialize(v37[0]);
    v10 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v18 = 170LL;
      goto LABEL_29;
    }
    BridgeStreamPipeInstance = CPipeInstance::ConnectAPOs(v19, 0LL);
    v10 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v18 = 171LL;
      goto LABEL_29;
    }
    BridgeStreamPipeInstance = CPipeInstance::CreateApoEndpointInstance(v19, a2, v34, v20);
    v10 = BridgeStreamPipeInstance;
    if ( BridgeStreamPipeInstance < 0 )
    {
      v18 = 172LL;
      goto LABEL_29;
    }
    v33 = 0LL;
    v21 = CStreamInstance::CreateStreamInstance(&v33, 0, *(_DWORD *)a2, (__int64)v19, (__int64)v19);
    v10 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB4,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v21);
LABEL_42:
      if ( v33 )
        CStreamInstance::`scalar deleting destructor'(v33);
      v33 = 0LL;
      goto LABEL_30;
    }
    v37[0] = 0LL;
    v23 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 36);
    if ( v23 )
    {
      (**v23)(v23, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v36);
      v24 = v36;
    }
    else
    {
      v24 = 0LL;
      v36 = 0LL;
    }
    if ( v24 )
    {
      v25 = (const struct CPipeInstance *)*((_QWORD *)this + 32);
      v26 = v33;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 64LL))((char *)this + 24);
      v27 = CStreamInstance::ConnectToRightSubmix(v26, v24, v25);
      v10 = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBC,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)v27);
LABEL_51:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v36);
        goto LABEL_42;
      }
    }
    v37[1] = (CPipeInstance *)&v36;
    v37[2] = (CPipeInstance *)&v33;
    v38 = 1;
    try
    {
      v43 = (char *)v33;
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
        (__int64 *)this + 7,
        (__int64 *)&v43,
        v22);
    }
    catch ( ATL::CAtlException *v40 )
    {
      v29 = v40;
      if ( *(_DWORD *)v40 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v43) = *(_DWORD *)v29;
      v10 = (unsigned int)v43;
      if ( (int)v43 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCA,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)v43);
        if ( v36 )
          CStreamInstance::DisconnectFromRightSubmix((struct CPipeInstance **)v33, v36);
        goto LABEL_51;
      }
      v4 = v44;
    }
    *((_QWORD *)v4 + 6) = *((_QWORD *)v33 + 1);
    v33 = 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v36);
    if ( v33 )
      CStreamInstance::`scalar deleting destructor'(v33);
  }
  PublishDeviceGraphWnfState();
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v35);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v34);
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  v10 = 0;
LABEL_62:
  ATL::CAutoPtr<CPipeInstance>::Free(v37);
  CWatchdogTimer<2>::~CWatchdogTimer<2>((__int64)pv);
  return v10;
}
