/*
 * XREFs of _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x1802013A4
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_bf3c92b221d60276737ef151eb6f13fc__void_::Invoke @ 0x1802018F0 (Platform--Details--__abi_FunctorCapture__lambda_bf3c92b221d60276737ef151eb6f13fc__void_--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1801FBB24 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x18020176C (-ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 *     ?ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ @ 0x180216160 (-ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_bf3c92b221d60276737ef151eb6f13fc_::operator()(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  XamlExplorerHostWindow *v7; // rcx
  RTL_SRWLOCK *v8; // rbx

  v5 = Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  v6 = __abi_winrt_ptr_ctor(v5);
  __abi_winrt_ptr_dtor(v5);
  IXamlSwitcherWindowInteractionEvents::ViewLoaded(v6, 0LL);
  XamlExplorerHostWindow::ChangeVisibilityHelper(v7, 1);
  v8 = (RTL_SRWLOCK *)(*(_QWORD *)a1 + 96LL);
  AcquireSRWLockShared(v8);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 64LL) + 40LL))(*(_QWORD *)(*(_QWORD *)a1 + 64LL));
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return __abi_winrt_ptr_dtor(v6);
}
