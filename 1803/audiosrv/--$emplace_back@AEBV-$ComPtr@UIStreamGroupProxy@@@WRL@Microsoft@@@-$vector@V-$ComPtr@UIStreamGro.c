/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B0F58
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_0e41d75607236968788bdd59460e85d3___ @ 0x1800CC21C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef_.c)
 *     _lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator() @ 0x1800CC740 (_lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator().c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CCA40 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CCDA0 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18004F2A8 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800CBEC0 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@PEAV123@V.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800CDC84 (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 *v13; // rcx
  _QWORD *v14; // [rsp+80h] [rbp+18h]

  v4 = (__int64 *)a1[2];
  v5 = (__int64 *)a1[1];
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = ((__int64)v4 - *a1) >> 3;
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
      v13 = (__int64 *)(v11 + 8 * v7);
      *v13 = *a2;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v13);
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
    *v5 = *a2;
    result = Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v5);
    a1[1] += 8LL;
  }
  return result;
}
