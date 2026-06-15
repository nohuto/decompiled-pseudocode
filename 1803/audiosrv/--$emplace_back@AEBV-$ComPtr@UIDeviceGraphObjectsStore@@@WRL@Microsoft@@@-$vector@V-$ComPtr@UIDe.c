/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@Z @ 0x1800CBF98
 * Callers:
 *     ?GetAllStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CCBA0 (-GetAllStreamGroups@CDeviceGraphStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Micr.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CCF90 (-GetConnectedStreamGroups@CDeviceGraphStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WR.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18004F2A8 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800CBE50 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@PEAV.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@_K1@Z @ 0x1800CDBE4 (-_Change_array@-$vector@V-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V-$allocator@V-$Com.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::emplace_back<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> const &>(
        __int64 **a1,
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
  __int64 *v12; // r15
  __int64 *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // [rsp+80h] [rbp+18h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = v5 - *a1;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = v4 - *a1;
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
    v12 = (__int64 *)v11;
    v15 = (_QWORD *)v11;
    try
    {
      v13 = (__int64 *)(v11 + 8 * v7);
      *v13 = *a2;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v13);
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *,std::allocator<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v14 = v15[v7];
      if ( v14 )
      {
        v15[v7] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      std::_Deallocate(v15, v10, 8uLL);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::_Change_array(a1, v12, v7 + 1, v10);
  }
  else
  {
    *v5 = *a2;
    result = Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v5);
    ++a1[1];
  }
  return result;
}
