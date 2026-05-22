/*
 * XREFs of ??$emplace_back@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x18000C08C
 * Callers:
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x18000BDD0 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 *     ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18002F5A0 (-RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEA.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18000CC90 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Mi.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::emplace_back<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r12
  __int64 *v11; // r14
  size_t v12; // rcx
  void *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 *v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx

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
    if ( v10 )
    {
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Default_allocate_traits<1>::_Fail();
      v12 = 8 * v10;
      if ( 8 * v10 < 0x1000 )
      {
        v11 = (__int64 *)operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
          std::_Default_allocate_traits<1>::_Fail();
        v13 = operator new(v12 + 39);
        v11 = (__int64 *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = (__int64)v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = &v11[v6];
      *v14 = 0LL;
      if ( v14 != a2 )
      {
        *v14 = *a2;
        *a2 = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v22 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v11[v6]);
      std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>>::destroy<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>(
        v23,
        v22);
      std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
        v24,
        (unsigned __int64)v11,
        v10);
      throw;
    }
    v16 = *a1;
    if ( !*a1 )
      goto LABEL_33;
    v17 = a1[1];
    if ( v16 != v17 )
    {
      do
      {
        v18 = *v16;
        if ( *v16 )
        {
          *v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        }
        ++v16;
      }
      while ( v16 != v17 );
      v16 = *a1;
    }
    v19 = a1[2] - v16;
    if ( v19 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v19 < 0x1000 )
      {
LABEL_32:
        operator delete(v16);
LABEL_33:
        *a1 = v11;
        a1[1] = &v11[v7];
        a1[2] = &v11[v10];
        return (__int64)(a1[1] - 1);
      }
      if ( ((unsigned __int8)v16 & 0x1F) == 0 )
      {
        v20 = *(v16 - 1);
        if ( v20 < (unsigned __int64)v16 && (unsigned __int64)v16 - v20 - 8 <= 0x1F )
        {
          v16 = (__int64 *)*(v16 - 1);
          goto LABEL_32;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, v15);
    __debugbreak();
  }
  *v5 = 0LL;
  if ( v5 != a2 )
  {
    *v5 = *a2;
    *a2 = 0LL;
  }
  return (__int64)a1[1]++;
}
