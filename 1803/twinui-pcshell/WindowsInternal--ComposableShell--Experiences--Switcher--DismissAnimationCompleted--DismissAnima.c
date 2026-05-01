/*
 * XREFs of WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::DismissAnimationCompleted__lambda_7d544a6ebe9fabad27cf83ed972508d6___ @ 0x1802028EC
 * Callers:
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x18020A864 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1801FA548 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x180205068 (_lambda_7d544a6ebe9fabad27cf83ed972508d6_--_lambda_7d544a6ebe9fabad27cf83ed972508d6_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_ @ 0x180205B44 (Platform--Details--__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_--__abi_F.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::DismissAnimationCompleted__lambda_7d544a6ebe9fabad27cf83ed972508d6___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  if ( a1 == (_QWORD *)-40LL )
  {
    v5 = 0LL;
  }
  else
  {
    v4 = lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(v8, a2);
    v5 = Platform::Details::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_(
           a1 + 5,
           v4);
  }
  a1[37] = v5;
  __abi_winrt_ptr_dtor(a2[1]);
  v6 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
