/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18017A618
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180177E20 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwit.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180178D68 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18017AA5C (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  IUnknown *v3; // rbx
  IUnknown *v4; // rbp
  struct IUnknownVtbl *v5; // rdi
  struct IUnknownVtbl *v6; // r15
  IUnknown *v7; // r14
  IUnknown *v8; // rax
  IUnknown *v9; // rsi
  DWORD CurrentThreadId; // eax
  __int64 result; // rax
  struct IUnknownVtbl *v12; // [rsp+80h] [rbp+8h] BYREF
  IUnknown *v13; // [rsp+90h] [rbp+18h]
  __int64 v14; // [rsp+98h] [rbp+20h]

  v12 = 0LL;
  XamlBaseViewController::GetAppViewFromSwitchItem(a1, a2, &v12);
  v3 = *(IUnknown **)(a1 + 56);
  v13 = v3;
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->AddRef)(v3);
  CoAllowSetForegroundWindow(v3, 0LL);
  v4 = v3;
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->AddRef)(v3);
  v5 = v12;
  v6 = v12;
  if ( v12 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v12->QueryInterface + 1))(v12);
  v7 = 0LL;
  v14 = 0LL;
  v8 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v8[1].lpVtbl) = 1;
    v8->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9->lpVtbl = (struct IUnknownVtbl *)off_1802B6F88;
    v4 = 0LL;
    v9[2].lpVtbl = (struct IUnknownVtbl *)v3;
    v6 = 0LL;
    v9[3].lpVtbl = v5;
    v7 = v9;
  }
  CurrentThreadId = GetCurrentThreadId();
  result = Windows::Internal::ComTaskPool::RunTask(1, 0, CurrentThreadId, 0, v7, 0LL);
  if ( v7 )
    result = ((__int64 (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
  if ( v6 )
    result = (*((__int64 (__fastcall **)(struct IUnknownVtbl *))v6->QueryInterface + 2))(v6);
  if ( v4 )
    result = ((__int64 (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
  if ( v3 )
    result = ((__int64 (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  if ( v5 )
    return (*((__int64 (__fastcall **)(struct IUnknownVtbl *))v5->QueryInterface + 2))(v5);
  return result;
}
