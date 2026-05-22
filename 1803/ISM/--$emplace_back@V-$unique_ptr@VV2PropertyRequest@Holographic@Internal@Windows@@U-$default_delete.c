/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@@Z @ 0x1800C9088
 * Callers:
 *     ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x1800C27CC (-AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologr.c)
 *     ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x1800C292C (-AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologra.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@0@PEAV10@00AEAV?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800CE02C (--$_Uninitialized_move_al_unchecked@PEAV-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Win.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::emplace_back<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
        __int64 **a1,
        char **a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  char *result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int64 *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  char *v15; // rcx
  __int64 *v16; // rbx
  __int64 *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 != v5 )
  {
    result = *a2;
    *a2 = 0LL;
    *v5 = (__int64)result;
    ++a1[1];
    return result;
  }
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
    *a2 = 0LL;
    v12[v7] = (__int64)v15;
    std::_Uninitialized_move_al_unchecked<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(
      *a1,
      a1[1],
      v12);
  }
  catch ( ... )
  {
    v22 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v12[v7]);
    std::_Default_allocator_traits<std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>::destroy<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
      v23,
      v22);
    std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
      v24,
      (unsigned __int64)v12,
      v11);
    throw;
  }
  v16 = *a1;
  if ( *a1 )
  {
    v17 = a1[1];
    if ( v16 != v17 )
    {
      do
      {
        v18 = *v16;
        if ( *v16 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 8LL))(v18, 1LL);
        ++v16;
      }
      while ( v16 != v17 );
      v16 = *a1;
    }
    v20 = a1[2] - v16;
    if ( v20 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v20 < 0x1000 )
      {
LABEL_27:
        operator delete(v16);
        goto LABEL_28;
      }
      if ( ((unsigned __int8)v16 & 0x1F) == 0 )
      {
        v21 = *(v16 - 1);
        if ( v21 < (unsigned __int64)v16 && (unsigned __int64)v16 - v21 - 8 <= 0x1F )
        {
          v16 = (__int64 *)*(v16 - 1);
          goto LABEL_27;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v18, v19);
    __debugbreak();
  }
LABEL_28:
  *a1 = v12;
  a1[1] = &v12[v8];
  result = (char *)&v12[v11];
  a1[2] = (__int64 *)result;
  return result;
}
