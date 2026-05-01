/*
 * XREFs of ??_G?$__abi_FunctorCapture@V_lambda_48eef4ac22d2d23d7627f0d26dc0219c_@@XPE$AAVApplicationInitializationCallbackParams@Xaml@UI@Windows@@@Details@Platform@@UEAAPEAXI@Z @ 0x1801244D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_48eef4ac22d2d23d7627f0d26dc0219c_,void,Windows::UI::Xaml::ApplicationInitializationCallbackParams __gc *>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
