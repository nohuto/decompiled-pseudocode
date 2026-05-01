/*
 * XREFs of Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c___ @ 0x1801FC048
 * Callers:
 *     _lambda_e8537fd42700b698b39adf2393712a09_::operator() @ 0x1801FD0E0 (_lambda_e8537fd42700b698b39adf2393712a09_--operator().c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1801FA548 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
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
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v2 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
    *v2 = &off_180430138;
  a1[37] = v2;
  return a1;
}
