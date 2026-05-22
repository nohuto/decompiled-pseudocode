/*
 * XREFs of ??$emplace_back@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800A9BEC
 * Callers:
 *     ?EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A50D4 (-EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAPEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@00AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800ABA0C (--$_Uninitialized_move_al_unchecked@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V-$allocator@VH.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<Microsoft::WRL::Wrappers::HString>::emplace_back<Microsoft::WRL::Wrappers::HString>(
        _QWORD *a1,
        char **a2)
{
  char **v4; // rcx
  char **v5; // rbx
  char *result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  _QWORD *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  HSTRING *v15; // rbx
  HSTRING *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx

  v4 = (char **)a1[2];
  v5 = (char **)a1[1];
  if ( v4 != v5 )
  {
    result = *a2;
    *v5 = *a2;
    *a2 = 0LL;
    a1[1] += 8LL;
    return result;
  }
  v7 = ((__int64)v5 - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = ((__int64)v4 - *a1) >> 3;
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
      v12 = operator new(v13);
    }
    else
    {
      if ( v13 + 39 < v13 )
        std::_Default_allocate_traits<1>::_Fail();
      v14 = operator new(v13 + 39);
      v12 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v12 - 1) = v14;
    }
  }
  else
  {
    v12 = 0LL;
  }
  try
  {
    v12[v7] = *a2;
    *a2 = 0LL;
    std::_Uninitialized_move_al_unchecked<Microsoft::WRL::Wrappers::HString *,Microsoft::WRL::Wrappers::HString *,std::allocator<Microsoft::WRL::Wrappers::HString>>(
      *a1,
      a1[1],
      v12);
  }
  catch ( ... )
  {
    v21 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v12[v7]);
    std::_Default_allocator_traits<std::allocator<Microsoft::WRL::Wrappers::HString>>::destroy<Microsoft::WRL::Wrappers::HString>(
      v22,
      v21);
    std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
      v23,
      (unsigned __int64)v12,
      v11);
    throw;
  }
  v15 = (HSTRING *)*a1;
  if ( *a1 )
  {
    v16 = (HSTRING *)a1[1];
    if ( v15 != v16 )
    {
      do
      {
        WindowsDeleteString(*v15);
        *v15++ = 0LL;
      }
      while ( v15 != v16 );
      v15 = (HSTRING *)*a1;
    }
    v19 = (__int64)(a1[2] - (_QWORD)v15) >> 3;
    if ( v19 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v19 < 0x1000 )
      {
LABEL_25:
        operator delete(v15);
        goto LABEL_26;
      }
      if ( ((unsigned __int8)v15 & 0x1F) == 0 )
      {
        v20 = (unsigned __int64)*(v15 - 1);
        if ( v20 < (unsigned __int64)v15 && (unsigned __int64)v15 - v20 - 8 <= 0x1F )
        {
          v15 = (HSTRING *)*(v15 - 1);
          goto LABEL_25;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v18, v17);
    __debugbreak();
  }
LABEL_26:
  *a1 = v12;
  a1[1] = &v12[v8];
  result = (char *)&v12[v11];
  a1[2] = result;
  return result;
}
