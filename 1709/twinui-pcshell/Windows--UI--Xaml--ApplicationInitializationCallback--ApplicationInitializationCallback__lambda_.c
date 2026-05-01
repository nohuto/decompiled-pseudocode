/*
 * XREFs of Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c___ @ 0x18014E634
 * Callers:
 *     _lambda_e8537fd42700b698b39adf2393712a09_::operator() @ 0x18014CEB4 (_lambda_e8537fd42700b698b39adf2393712a09_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c___(
        _QWORD *a1)
{
  unsigned __int64 v2; // rdx

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable';
  a1[4] = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v2 = (unsigned __int64)(a1 + 5);
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
    *(_QWORD *)v2 = off_1802B2FD0;
  a1[37] = v2 & -(__int64)(v2 != 0);
  return a1;
}
