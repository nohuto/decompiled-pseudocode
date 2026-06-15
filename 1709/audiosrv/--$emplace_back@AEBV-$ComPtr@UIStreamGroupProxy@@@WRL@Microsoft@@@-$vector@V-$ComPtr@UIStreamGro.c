/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x180095E40
 * Callers:
 *     _lambda_66f05aa6b27db1192e1217df58c6c38a_::operator() @ 0x1800963F0 (_lambda_66f05aa6b27db1192e1217df58c6c38a_--operator().c)
 *     _lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator() @ 0x1800964B8 (_lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator().c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800967F0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180096B60 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180095C84 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@PEAV123@V-$all.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x180097A80 (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B6878 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 *v12; // rcx
  __int64 *v13; // [rsp+80h] [rbp+18h]

  result = *(_QWORD *)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)result == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = (result - *(_QWORD *)a1) >> 3;
    v8 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    v10 = std::_Allocate(v9, 8uLL);
    v11 = v10;
    v13 = v10;
    try
    {
      v12 = &v10[v6];
      if ( v12 )
      {
        *v12 = *a2;
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v12);
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v11);
    }
    catch ( ... )
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v13[v6]);
      std::_Deallocate(v13, v9, 8uLL);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Change_array(a1, v11, v6 + 1, v9);
  }
  else
  {
    if ( v5 )
    {
      *v5 = *a2;
      result = Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v5);
    }
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
