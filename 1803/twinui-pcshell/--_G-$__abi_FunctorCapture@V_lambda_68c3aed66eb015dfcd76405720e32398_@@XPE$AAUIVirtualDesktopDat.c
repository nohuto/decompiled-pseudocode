/*
 * XREFs of ??_G?$__abi_FunctorCapture@V_lambda_68c3aed66eb015dfcd76405720e32398_@@XPE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopCollectionChangedEventArgs@3456@@Details@Platform@@UEAAPEAXI@Z @ 0x180208990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_68c3aed66eb015dfcd76405720e32398_,void,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs __gc *>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __abi_winrt_ptr_dtor(a1[1]);
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
