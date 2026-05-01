/*
 * XREFs of ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180100DCC
 * Callers:
 *     ?HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1800FC310 (-HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180100C44 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke @ 0x180105F80 (CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___--Invoke.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1801CD2A0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_CloseView(HolographicPositioner *this, struct IApplicationView *a2)
{
  IUnknown *v3; // rbx
  __int64 *v4; // rax
  HRESULT Service; // ebx
  IUnknown *v6; // rcx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  punk = 0LL;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
    (char *)this + 8,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v3 = punk;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
  Service = IUnknown_QueryService(
              v3,
              (const GUID *const)&SID_AppCrusher,
              &GUID_55c8429b_3f9e_4736_96a2_1c56e2dfc883,
              (void **)v4);
  v6 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  }
  if ( Service < 0 )
  {
    v7 = (unsigned int)Service;
    v8 = 2069LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v7);
    goto LABEL_9;
  }
  v9 = ApplicationViewHelpers::CloseView(a2, v14, 10LL);
  Service = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 2076LL;
    goto LABEL_7;
  }
  Service = 0;
LABEL_9:
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)Service;
}
