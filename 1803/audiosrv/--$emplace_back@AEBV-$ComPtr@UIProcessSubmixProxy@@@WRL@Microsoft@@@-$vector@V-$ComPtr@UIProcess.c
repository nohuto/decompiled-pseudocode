/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z @ 0x1800C79B4
 * Callers:
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3ea8e7556f72cf8b3f162dbd37187d30___ @ 0x1800C7B04 (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--We.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800CBEC0 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@PEAV123@V.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800CDC84 (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
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
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // [rsp+80h] [rbp+18h]

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
    v11 = std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = v11;
    v14 = (_QWORD *)v11;
    try
    {
      v13 = *a2;
      *(_QWORD *)(v11 + 8 * v7) = *a2;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IProcessSubmixProxy> *,Microsoft::WRL::ComPtr<IProcessSubmixProxy> *,std::allocator<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14[v7]);
      std::_Deallocate(v14, v10, 8uLL);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Change_array(a1, v12, v7 + 1, v10);
  }
  else
  {
    v6 = *a2;
    *v5 = *a2;
    if ( v6 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    a1[1] += 8LL;
  }
  return result;
}
