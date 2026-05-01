/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_BindableVectorChangedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@BindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@23456@UE$AAAJPE$AAUIBindableObservableVector@3456@PE$AAVObject@Platform@@@Z @ 0x180165AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_BindableVectorChangedEventHandler___abi_IDelegate____abi_Invoke__Q__abi_IDelegate_BindableVectorChangedEventHandler_Interop_Xaml_UI_Windows__23456_UE_AAAJPE_AAUIBindableObservableVector_3456_PE_AAVObject_Platform___Z(
        _QWORD **a1)
{
  int v1; // eax

  try
  {
    if ( *a1 == &Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::`vftable'{for `__abi_IUnknown'} )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
    }
    else
    {
      v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
      if ( v1 < 0 )
        __abi_WinRTraiseException(v1);
    }
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
