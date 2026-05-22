/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x18001FAD8
 * Callers:
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001CC60 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 *     ?OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180083770 (-OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800202EC (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@V-$alloc.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> const &>(
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
  __int64 *v16; // rdi
  __int64 *v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // [rsp+90h] [rbp+18h]

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
    v25 = v12;
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
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IInputTarget> *,Microsoft::WRL::ComPtr<IInputTarget> *,std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v22 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v25[v7]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>::destroy<Microsoft::WRL::ComPtr<IInputTarget>>(
        v23,
        v22);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v24,
        v25,
        v11);
      throw;
    }
    v16 = (__int64 *)*a1;
    if ( !*a1 )
      goto LABEL_31;
    v17 = (__int64 *)a1[1];
    while ( v16 != v17 )
    {
      v18 = *v16;
      if ( *v16 )
      {
        *v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      ++v16;
    }
    v19 = *a1;
    v20 = (__int64)(a1[2] - *a1) >> 3;
    if ( v20 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v20 < 0x1000 )
      {
LABEL_29:
        operator delete((void *)v19);
LABEL_31:
        *a1 = (unsigned __int64)v13;
        a1[1] = (unsigned __int64)&v13[v8];
        a1[2] = (unsigned __int64)&v13[v11];
        return;
      }
      if ( (v19 & 0x1F) == 0 )
      {
        v21 = *(_QWORD *)(v19 - 8);
        if ( v21 < v19 )
        {
          v19 = v19 - v21 - 8;
          if ( v19 <= 0x1F )
          {
            v19 = v21;
            goto LABEL_29;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v19);
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
