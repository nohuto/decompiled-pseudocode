/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x18002CA5C
 * Callers:
 *     ?OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18002BF40 (-OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800A7080 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18000CCDC (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@PEAV123@V-$allo.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> const &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int64 *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 *v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = v5 - *a1;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 + 1;
    v9 = v4 - *a1;
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
    if ( v11 )
    {
      if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Default_allocate_traits<1>::_Fail();
      v13 = 8 * v11;
      if ( 8 * v11 < 0x1000 )
      {
        v12 = (__int64 *)operator new(v13);
      }
      else
      {
        if ( v13 + 39 < v13 )
          std::_Default_allocate_traits<1>::_Fail();
        v14 = operator new(v13 + 39);
        v12 = (__int64 *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v12 - 1) = (__int64)v14;
      }
    }
    else
    {
      v12 = 0LL;
    }
    try
    {
      v15 = *a2;
      v12[v7] = *a2;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IMessageProxy> *,Microsoft::WRL::ComPtr<IMessageProxy> *,std::allocator<Microsoft::WRL::ComPtr<IMessageProxy>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v22 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v12[v7]);
      std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>::destroy<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>(
        v23,
        v22);
      std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
        v24,
        (unsigned __int64)v12,
        v11);
      throw;
    }
    v18 = *a1;
    if ( !*a1 )
      goto LABEL_33;
    v19 = a1[1];
    if ( v18 != v19 )
    {
      do
      {
        v17 = *v18;
        if ( *v18 )
        {
          *v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        ++v18;
      }
      while ( v18 != v19 );
      v18 = *a1;
    }
    v20 = a1[2] - v18;
    if ( v20 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v20 < 0x1000 )
      {
LABEL_32:
        operator delete(v18);
LABEL_33:
        *a1 = v12;
        a1[1] = &v12[v8];
        a1[2] = &v12[v11];
        return;
      }
      if ( ((unsigned __int8)v18 & 0x1F) == 0 )
      {
        v21 = *(v18 - 1);
        if ( v21 < (unsigned __int64)v18 && (unsigned __int64)v18 - v21 - 8 <= 0x1F )
        {
          v18 = (__int64 *)*(v18 - 1);
          goto LABEL_32;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v17, v16);
    __debugbreak();
  }
  v6 = *a2;
  *v5 = *a2;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  ++a1[1];
}
