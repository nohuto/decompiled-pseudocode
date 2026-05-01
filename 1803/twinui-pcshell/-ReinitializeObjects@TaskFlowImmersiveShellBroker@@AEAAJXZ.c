/*
 * XREFs of ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A5F64
 * Callers:
 *     ?OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationScope@@W4ActivityFeedOperationState@@@Z @ 0x1801A5940 (-OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationS.c)
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A7350 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18008A018 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801A1788 (--$ActivateInstance@V-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL.c)
 *     ??$PoliciesTaskFlowFeatureState@AEAE_N_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N1@Z @ 0x1801A2224 (--$PoliciesTaskFlowFeatureState@AEAE_N_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N1@Z.c)
 *     ??4?$unique_call@P6AXXZ$1?CDPShutdown@@YAXXZ@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A2FA8 (--4-$unique_call@P6AXXZ$1-CDPShutdown@@YAXXZ@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A3F28 (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?IsActivityFeedEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x1801A57AC (-IsActivityFeedEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ.c)
 *     ?IsActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x1801A5868 (-IsActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowAFCIndexer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A64B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowAFCIndexer@@@wil@@CAX_NW4Rep.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A651C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 *     ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A6C04 (-StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A6D14 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A6DD0 (-StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A6F64 (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A70F8 (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A71B4 (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::ReinitializeObjects(TaskFlowImmersiveShellBroker *this, __int64 a2)
{
  __int64 v3; // rdx
  int started; // eax
  PVOID Reserved1; // rcx
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 **v8; // rdi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int8 v12; // si
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  int v19; // edi
  __int64 v20; // rdx
  PVOID v22; // rdi
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int active; // eax
  unsigned __int8 v30; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v31; // [rsp+21h] [rbp-3Fh] BYREF
  unsigned __int8 v32[2]; // [rsp+22h] [rbp-3Eh] BYREF
  __int16 v33; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v34; // [rsp+28h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v36; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v34 = -2LL;
  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowAFCIndexer>::ReportUsageToService(this, a2);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&hstringHeader);
  if ( !*((_QWORD *)this + 34) && *((_DWORD *)this + 50) != 2 )
  {
    started = TaskFlowImmersiveShellBroker::StartActivityIndexer(this);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        71LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)started);
  }
  Reserved1 = hstringHeader.Reserved.Reserved1;
  if ( hstringHeader.Reserved.Reserved1 )
    *((_DWORD *)hstringHeader.Reserved.Reserved1 + 4) = *(_DWORD *)&hstringHeader.Reserved.Reserved2[12];
  LOBYTE(v3) = 3;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(Reserved1, v3);
  if ( !*((_BYTE *)this + 288) )
  {
    v7 = CDPInitialize();
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        82LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v7);
    v30 = 1;
    wil::unique_call<void (*)(void),&void CDPShutdown(void)>::operator=((char *)this + 288, (char *)&v30);
    if ( v30 )
      CDPShutdown();
  }
  v8 = (wil::details::in1diag3 **)((char *)this + 296);
  if ( !*((_QWORD *)this + 37) && *((_DWORD *)this + 50) != 2 )
  {
    SafeRelease<IShellItemArray>((char *)this + 296);
    v9 = CDPGetUserActivitySettings((char *)this + 296);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        88LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v9);
    if ( *v8 )
    {
      v10 = (*(__int64 (__fastcall **)(wil::details::in1diag3 *, unsigned __int64, char *))(*(_QWORD *)*v8 + 56LL))(
              *v8,
              -(__int64)(this != 0LL) & ((unsigned __int64)this + 144),
              (char *)this + 304);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          92LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v10);
    }
  }
  if ( !TaskFlowImmersiveShellBroker::IsActivityFeedEnabled(this, v6)
    || (v12 = 1, !TaskFlowImmersiveShellBroker::IsActivityTrackingEnabled(this, v11)) )
  {
    v12 = 0;
  }
  v32[0] = v12;
  v33 = 1;
  v13 = *v8;
  if ( !*v8 )
    goto LABEL_26;
  v14 = (*(__int64 (__fastcall **)(wil::details::in1diag3 *, __int64, __int16 *))(*(_QWORD *)v13 + 48LL))(
          v13,
          3LL,
          &v33);
  v13 = retaddr;
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      102LL,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v14);
  v15 = 1;
  if ( v33 )
LABEL_26:
    v15 = 0;
  v30 = v15;
  LOBYTE(v11) = 3;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(v13, v11);
  v31 = 1;
  TaskFlowDataEngineTelemetry::PoliciesTaskFlowFeatureState<unsigned char &,bool,bool>(v32, &v31, &v30);
  if ( v12 && (!*((_QWORD *)this + 26) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313)) )
  {
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.TaskFlow.DataEngine.ActivityArbiter",
      0x3Bu,
      0x3Au);
    v19 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>>(
            v36,
            (__int64 *)this + 26);
    if ( v19 < 0 )
    {
      v20 = 112LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v19);
      return (unsigned int)v19;
    }
  }
  if ( *((_DWORD *)this + 50) != 2 )
  {
    hstringHeader.Reserved.Reserved1 = (PVOID)*((_QWORD *)this + 26);
    v22 = hstringHeader.Reserved.Reserved1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&hstringHeader);
    if ( v22 )
    {
      LOBYTE(v23) = v12;
      v24 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v22 + 80LL))(v22, v23);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          125LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v24);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hstringHeader);
  }
  if ( v12 )
  {
    if ( !*((_QWORD *)this + 27) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v19 = TaskFlowImmersiveShellBroker::StartAppViewListener(this);
      if ( v19 < 0 )
      {
        v20 = 134LL;
        goto LABEL_33;
      }
    }
    if ( !*((_QWORD *)this + 31) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v25 = TaskFlowImmersiveShellBroker::StartAppActivitySessionListener(this);
      if ( v25 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          140LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v25);
    }
    if ( !*((_QWORD *)this + 30) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v26 = TaskFlowImmersiveShellBroker::StartUserPresenceListener(this);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          145LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v26);
    }
    if ( !*((_QWORD *)this + 29) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v27 = TaskFlowImmersiveShellBroker::StartFileListener(this);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          150LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v27);
    }
    if ( !*((_QWORD *)this + 28) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v28 = TaskFlowImmersiveShellBroker::StartAppViewTitleChangeListener(this);
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          155LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v28);
    }
    active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(this, v16, v17, v18);
    if ( active < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        158LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)active);
    *((_BYTE *)this + 313) = 0;
  }
  return 0LL;
}
