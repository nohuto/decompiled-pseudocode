/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@Z @ 0x1800A80BC
 * Callers:
 *     ?GetStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A8CC0 (-GetStreamGroups@CDeviceGraphStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180032B08 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800A7F68 (--$_Uninitialized_move_al_unchecked1@PEAV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@PEA.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@_K1@Z @ 0x1800A95E8 (-_Change_array@-$vector@V-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V-$allocator@V-$Com.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::emplace_back<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> const &>(
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
  __int64 v13; // rcx
  __int64 *v14; // [rsp+80h] [rbp+18h]

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
    v14 = v10;
    try
    {
      v12 = &v10[v6];
      if ( v12 )
      {
        *v12 = *a2;
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v12);
      }
      std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *,std::allocator<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v11);
    }
    catch ( ... )
    {
      v13 = v14[v6];
      if ( v13 )
      {
        v14[v6] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      std::_Deallocate(v14, v9, 8uLL);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::_Change_array(a1, v11, v6 + 1, v9);
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
