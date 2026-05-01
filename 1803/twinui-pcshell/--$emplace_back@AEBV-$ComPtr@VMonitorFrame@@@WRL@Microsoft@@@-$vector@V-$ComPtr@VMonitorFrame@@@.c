/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x180204C44
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18020994C (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1802048A8 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@PEAV123@V-$alloc.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@_K1@Z @ 0x180211034 (-_Change_array@-$vector@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VMonitor.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::emplace_back<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
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
  __int64 *v11; // rax
  __int64 *v12; // r15
  __int64 *v13; // rcx
  __int64 v14; // rcx
  char *v15; // [rsp+80h] [rbp+18h]

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
    v11 = (__int64 *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = v11;
    v15 = (char *)v11;
    try
    {
      v13 = &v11[v7];
      *v13 = *a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v13);
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<MonitorFrame> *,Microsoft::WRL::ComPtr<MonitorFrame> *,std::allocator<Microsoft::WRL::ComPtr<MonitorFrame>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v14 = *(_QWORD *)&v15[8 * v7];
      if ( v14 )
      {
        *(_QWORD *)&v15[8 * v7] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      std::_Deallocate(v15, v10, 8uLL);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::_Change_array(a1, v12, v7 + 1, v10);
  }
  else
  {
    *v5 = *a2;
    result = Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v5);
    ++a1[1];
  }
  return result;
}
