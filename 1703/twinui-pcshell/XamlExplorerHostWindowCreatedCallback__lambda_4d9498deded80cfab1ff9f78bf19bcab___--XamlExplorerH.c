/*
 * XREFs of XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___::XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___ @ 0x180131758
 * Callers:
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab___ @ 0x180131594 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18006E8CC (--0-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___::XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  int v8; // eax
  _QWORD *v9; // r14
  _QWORD *v10; // rcx
  __int64 v11; // rbp
  bool v12; // zf

  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  *(_DWORD *)(a1 + 36) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IXamlExplorerHostWindowCreatedCallback,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_180240AB0;
  *(_QWORD *)(a1 + 24) = off_180240B00;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(a2 + 8));
  *(_QWORD *)(a1 + 48) = v4;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 32);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(a2 + 32));
  *(_QWORD *)(a1 + 72) = v5;
  v6 = *(_QWORD *)(a2 + 40);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(a2 + 40));
  *(_QWORD *)(a1 + 80) = v6;
  *(_QWORD *)(a1 + 88) = 0LL;
  v7 = (_QWORD *)(a2 + 48);
  if ( a1 + 88 != a2 + 48 )
  {
    *(_QWORD *)(a1 + 88) = *v7;
    *v7 = 0LL;
  }
  v8 = *(_DWORD *)(a2 + 88);
  v9 = (_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 96) = &wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 112) = a1 + 96;
  if ( v8 )
  {
    v10 = wil::details::g_pThreadFailureCallbacks
        ? (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                      (__int64)&wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::`vftable',
                      1)
        : 0LL;
    *v9 = v10;
    if ( v10 )
    {
      *(_QWORD *)(a1 + 120) = *v10;
      *v10 = v9;
      *(_DWORD *)(a1 + 128) = GetCurrentThreadId();
    }
  }
  v11 = a1 + 152;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 152,
    a2 + 112);
  *(_QWORD *)(a1 + 400) = *(_QWORD *)(a2 + 360);
  *(_QWORD *)(a2 + 360) = 0LL;
  if ( *(_QWORD *)(a1 + 400) )
  {
    v11 = *(_QWORD *)(a1 + 400);
    if ( v11 )
      v11 += 8LL;
  }
  *(_QWORD *)(a1 + 144) = v11;
  *(_QWORD *)(a1 + 136) = v11 + 40;
  v12 = *(_DWORD *)(a2 + 88) == 0;
  *(_QWORD *)(a2 + 104) = a2 + 112;
  if ( !v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 64));
  *(_QWORD *)(a1 + 96) = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
  return a1;
}
