/*
 * XREFs of ??_E?$__abi_FunctorCapture@V_lambda_b17e8ea3ce422613d156e832a7d26e56_@@XPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@3456@@Details@Platform@@UEAAPEAXI@Z @ 0x1800A0500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_b17e8ea3ce422613d156e832a7d26e56_,void,Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 1);
  *a1 = (__int64)&Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
