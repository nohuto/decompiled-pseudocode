/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_1b6451e4c080ccabeb3922fbf3bb257d__0__wistd::details::function_allocator_wistd::_Func_class_long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x1801B96F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_1b6451e4c080ccabeb3922fbf3bb257d__0__wistd::details::function_allocator_wistd::_Func_class_long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r10
  __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  v3 = a1;
  if ( !a2 )
    __fastfail(7u);
  *a2 = off_180320A48;
  v4 = *(_QWORD *)(a1 + 8);
  a2[1] = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 96);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 96), v5 + 1, v5);
        if ( v6 != v5 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v5 + 16),
      (volatile int *)v4);
  }
LABEL_10:
  a2[2] = *(_QWORD *)(v3 + 16);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2 + 2);
  return a2;
}
