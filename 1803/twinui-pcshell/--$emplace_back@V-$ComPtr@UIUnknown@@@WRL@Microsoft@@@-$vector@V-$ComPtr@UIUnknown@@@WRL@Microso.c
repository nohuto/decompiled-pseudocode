/*
 * XREFs of ??$emplace_back@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Z @ 0x180190EA4
 * Callers:
 *     ?AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z @ 0x180191C54 (-AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180190E34 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIUnknown@@@WRL@Microsoft@@PEAV123@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@_K1@Z @ 0x180193088 (-_Change_array@-$vector@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIUnknown@@@.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IUnknown>>::emplace_back<Microsoft::WRL::ComPtr<IUnknown>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  CWinRTApplicationView **v10; // rax
  CWinRTApplicationView **v11; // r15
  __int64 *v12; // rax
  char *v13; // [rsp+80h] [rbp+18h]

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
    v10 = (CWinRTApplicationView **)std::_Allocate<std::_Default_allocate_traits<1>>(v9, 8uLL);
    v11 = v10;
    v13 = (char *)v10;
    try
    {
      v12 = (__int64 *)&v10[v6];
      *v12 = 0LL;
      if ( v12 != a2 )
      {
        *v12 = *a2;
        *a2 = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IUnknown> *,Microsoft::WRL::ComPtr<IUnknown> *,std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>(
        *(CWinRTApplicationView ***)a1,
        *(CWinRTApplicationView ***)(a1 + 8),
        v11);
    }
    catch ( ... )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v13[8 * v6]);
      std::_Deallocate(v13, v9, 8uLL);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<IUnknown>>::_Change_array(a1, v11, v6 + 1, v9);
  }
  else
  {
    *v5 = 0LL;
    if ( v5 != a2 )
    {
      result = *a2;
      *v5 = *a2;
      *a2 = 0LL;
    }
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
