/*
 * XREFs of ??$emplace_back@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005BC64
 * Callers:
 *     ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x18005AB3C (-ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180062AD0 (-AttachProvider@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_poli.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18005BED4 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_polic.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &>(
        unsigned __int64 *a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  _QWORD *v17; // r15
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // [rsp+90h] [rbp+18h]

  v4 = (__int64 *)a1[2];
  v5 = (__int64 *)a1[1];
  if ( v4 == v5 )
  {
    v7 = (__int64)((__int64)v5 - *a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 + 1;
    v9 = (__int64)((__int64)v4 - *a1) >> 3;
    v10 = v9 >> 1;
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    v12 = std::_Allocate(v11, 8uLL);
    v13 = v12;
    v24 = v12;
    try
    {
      v14 = &v12[v7];
      if ( v14 )
      {
        v15 = *a2;
        *v14 = *a2;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> *,wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v21 = (_QWORD *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v24[v7]);
      std::_Wrap_alloc<std::allocator<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>(
        v22,
        v21);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v23,
        v24,
        v11);
      throw;
    }
    v16 = (_QWORD *)*a1;
    if ( !*a1 )
      goto LABEL_31;
    v17 = (_QWORD *)a1[1];
    while ( v16 != v17 )
    {
      if ( *v16 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 16LL))(*v16);
      ++v16;
    }
    v18 = *a1;
    v19 = (__int64)(a1[2] - *a1) >> 3;
    if ( v19 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v19 < 0x1000 )
      {
LABEL_29:
        operator delete((void *)v18);
LABEL_31:
        *a1 = (unsigned __int64)v13;
        a1[1] = (unsigned __int64)&v13[v8];
        a1[2] = (unsigned __int64)&v13[v11];
        return;
      }
      if ( (v18 & 0x1F) == 0 )
      {
        v20 = *(_QWORD *)(v18 - 8);
        if ( v20 < v18 )
        {
          v18 = v18 - v20 - 8;
          if ( v18 <= 0x1F )
          {
            v18 = v20;
            goto LABEL_29;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v18);
    __debugbreak();
  }
  if ( v5 )
  {
    v6 = *a2;
    *v5 = *a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  a1[1] += 8LL;
}
