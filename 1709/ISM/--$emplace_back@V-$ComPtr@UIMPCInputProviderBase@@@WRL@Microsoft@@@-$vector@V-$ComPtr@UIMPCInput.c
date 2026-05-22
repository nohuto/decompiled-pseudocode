/*
 * XREFs of ??$emplace_back@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800599AC
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18005934C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18005FB40 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800202EC (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@V-$alloc.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::emplace_back<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 *v13; // rdx
  __int64 *v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // [rsp+80h] [rbp+18h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = v5 - *a1;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = v6 + 1;
    v8 = v4 - *a1;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = (__int64 *)std::_Allocate(v10, 8uLL);
    v12 = v11;
    v23 = v11;
    try
    {
      v13 = &v11[v6];
      if ( v13 )
      {
        *v13 = 0LL;
        if ( v13 != a2 )
        {
          *v13 = *a2;
          *a2 = 0LL;
        }
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IInputTarget> *,Microsoft::WRL::ComPtr<IInputTarget> *,std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v20 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v23[v6]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>::destroy<Microsoft::WRL::ComPtr<IInputTarget>>(
        v21,
        v20);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v22,
        v23,
        v10);
      throw;
    }
    v14 = *a1;
    if ( !*a1 )
      goto LABEL_31;
    v15 = a1[1];
    while ( v14 != v15 )
    {
      v16 = *v14;
      if ( *v14 )
      {
        *v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      ++v14;
    }
    v17 = (unsigned __int64)*a1;
    v18 = a1[2] - *a1;
    if ( v18 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v18 < 0x1000 )
      {
LABEL_29:
        operator delete((void *)v17);
LABEL_31:
        *a1 = v12;
        a1[1] = &v12[v7];
        a1[2] = &v12[v10];
        return;
      }
      if ( (v17 & 0x1F) == 0 )
      {
        v19 = *(_QWORD *)(v17 - 8);
        if ( v19 < v17 )
        {
          v17 = v17 - v19 - 8;
          if ( v17 <= 0x1F )
          {
            v17 = v19;
            goto LABEL_29;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v17);
    __debugbreak();
  }
  if ( v5 )
  {
    *v5 = 0LL;
    if ( v5 != a2 )
    {
      *v5 = *a2;
      *a2 = 0LL;
    }
  }
  ++a1[1];
}
