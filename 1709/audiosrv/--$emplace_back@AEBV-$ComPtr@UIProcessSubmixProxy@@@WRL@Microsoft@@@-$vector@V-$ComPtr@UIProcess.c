/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z @ 0x180092028
 * Callers:
 *     std::_For_each_unchecked_Microsoft::WRL::WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162dbd37187d30___ @ 0x180091F64 (std--_For_each_unchecked_Microsoft--WRL--WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162db.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180095C84 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@PEAV123@V-$all.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x180097A80 (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::emplace_back<Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // [rsp+80h] [rbp+18h]

  result = a1[2];
  v5 = (__int64 *)a1[1];
  if ( (__int64 *)result == v5 )
  {
    v7 = ((__int64)v5 - *a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = (result - *a1) >> 3;
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
    v11 = std::_Allocate(v10, 8uLL);
    v12 = v11;
    v15 = v11;
    try
    {
      v13 = &v11[v7];
      if ( v13 )
      {
        v14 = *a2;
        *v13 = *a2;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v15[v7]);
      std::_Deallocate(v15, v10, 8uLL);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Change_array(a1, v12, v7 + 1, v10);
  }
  else
  {
    if ( v5 )
    {
      v6 = *a2;
      *v5 = *a2;
      if ( v6 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    a1[1] += 8LL;
  }
  return result;
}
