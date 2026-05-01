/*
 * XREFs of ??$emplace_back@AEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801F73A8
 * Callers:
 *     wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___ @ 0x1801AB93C (wil--ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___.c)
 *     _lambda_37665b47845c81d82a3f5e49d766d167_::operator() @ 0x1801F7974 (_lambda_37665b47845c81d82a3f5e49d766d167_--operator().c)
 *     ?RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z @ 0x1801F9060 (-RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@_K1@Z @ 0x1801B12A8 (-_Change_array@-$vector@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801F7338 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@V.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem> &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 *v12; // r15
  __int64 *v13; // rcx
  char *v14; // [rsp+80h] [rbp+18h]

  v4 = *(__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = (__int64 *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = v11;
    v14 = (char *)v11;
    try
    {
      v13 = &v11[v7];
      *v13 = *a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v13);
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v12);
    }
    catch ( ... )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14[8 * v7]);
      std::_Deallocate(v14, v10, 8uLL);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Change_array(a1, (__int64)v12, v7 + 1, v10);
  }
  else
  {
    *v5 = *a2;
    result = Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v5);
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
