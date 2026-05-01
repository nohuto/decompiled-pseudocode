/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1801D0B9C
 * Callers:
 *     ?reserve@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX_K@Z @ 0x1801D0F6C (-reserve@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Micros.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801C76D8 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rsi
  char *v8; // [rsp+60h] [rbp+8h]

  v4 = a1[1] - *a1;
  v5 = (__int64 *)std::_Allocate<std::_Default_allocate_traits<1>>(a2, 8uLL);
  v6 = (__int64)v5;
  v8 = (char *)v5;
  try
  {
    std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper> *,Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
      *a1,
      a1[1],
      v5);
  }
  catch ( ... )
  {
    std::_Deallocate(v8, a2, 8uLL);
    throw;
  }
  return std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Change_array(
           (__int64)a1,
           v6,
           v4,
           a2);
}
