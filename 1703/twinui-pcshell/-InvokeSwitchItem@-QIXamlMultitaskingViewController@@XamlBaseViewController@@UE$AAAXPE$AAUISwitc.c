/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180145620
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180143460 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwit.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180143E28 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIApplicationView@@@Z @ 0x180145CA0 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Common@Multitasking@E.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_a035833f56cc8561cdc8626dfadd60a5___ @ 0x180145E0C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_a035833f56cc8561cdc8626dfadd60a5___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Z(
        __int64 a1,
        __int64 a2)
{
  IUnknown *v3; // rbx
  IUnknown *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  IUnknown *v8; // [rsp+38h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h]
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  IUnknown *v12; // [rsp+88h] [rbp+38h]

  v10 = 0LL;
  XamlBaseViewController::GetAppViewFromSwitchItem(a1, a2, &v10);
  v3 = *(IUnknown **)(a1 + 56);
  v12 = v3;
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->AddRef)(v3);
  CoAllowSetForegroundWindow(v3, 0LL);
  v8 = v3;
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->AddRef)(v3);
  v9 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v4 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_a035833f56cc8561cdc8626dfadd60a5___(&v11, &v8);
  CurrentThreadId = GetCurrentThreadId();
  result = Windows::Internal::ComTaskPool::RunTask(1, 0, CurrentThreadId, 0, v4, 0LL);
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v9 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    result = ((__int64 (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
  if ( v3 )
    result = ((__int64 (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  if ( v10 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return result;
}
