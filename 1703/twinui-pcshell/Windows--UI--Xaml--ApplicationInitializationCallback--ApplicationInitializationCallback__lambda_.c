/*
 * XREFs of Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c___ @ 0x18012417C
 * Callers:
 *     _lambda_e8537fd42700b698b39adf2393712a09_::operator() @ 0x1801228E0 (_lambda_e8537fd42700b698b39adf2393712a09_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c___(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable';
  a1[4] = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v2 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
    *v2 = &off_18023EE70;
  a1[37] = v2;
  return a1;
}
