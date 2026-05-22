/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@AEBV234@@Z @ 0x180025460
 * Callers:
 *     ?RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x180023940 (-RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBam.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18000CC90 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Mi.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>::emplace_back<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy> const &>(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD))
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  void (__fastcall ***v6)(_QWORD); // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int64 *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  void (__fastcall ***v15)(_QWORD); // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 *v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx

  v4 = *(_QWORD **)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 + 1;
    v9 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
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
      v12[v7] = (__int64)*a2;
      if ( v15 )
        (**v15)(v15);
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v12);
    }
    catch ( ... )
    {
      v23 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v12[v7]);
      std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>>::destroy<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>(
        v24,
        v23);
      std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
        v25,
        (unsigned __int64)v12,
        v11);
      throw;
    }
    v18 = *(__int64 **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_33;
    v19 = *(__int64 **)(a1 + 8);
    if ( v18 != v19 )
    {
      do
      {
        v17 = *v18;
        if ( *v18 )
        {
          *v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        }
        ++v18;
      }
      while ( v18 != v19 );
      v18 = *(__int64 **)a1;
    }
    v20 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v18) >> 3;
    if ( v20 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v20 < 0x1000 )
      {
LABEL_32:
        operator delete(v18);
LABEL_33:
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 8) = &v12[v8];
        *(_QWORD *)(a1 + 16) = &v12[v11];
        return *(_QWORD *)(a1 + 8) - 8LL;
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
    (**v6)(v6);
  *(_QWORD *)(a1 + 8) += 8LL;
  return *(_QWORD *)(a1 + 8) - 8LL;
}
