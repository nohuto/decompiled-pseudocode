/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::Run @ 0x1800E5A70
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ActivateApplicationForLaunchHelper@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1801CE080 (-_ActivateApplicationForLaunchHelper@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATE.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::Run(
        __int64 a1)
{
  __int64 v1; // rdi
  __int64 *ppv; // rax
  HRESULT Instance; // ebx
  __int64 v4; // r8
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v7 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v7);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)ppv);
  if ( Instance >= 0 )
    Instance = _ActivateApplicationForLaunchHelper(v7, v1, v4, v1);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( Instance < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)Instance);
}
