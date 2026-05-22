/*
 * XREFs of _lambda_db39044b7ead6141e706115c994a467b_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK_____ptr64_void_(__cdecl_)(_RTL_SRWLOCK_____ptr64)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_2___RTL_SRWLOCK_____ptr64_0_std::nullptr_t_______ @ 0x180077E34
 * Callers:
 *     ?RemoveSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180078030 (-RemoveSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV-.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x180077898 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_180077898.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800779A4 (-erase@-$_Tree@V-$_Tmap_traits@KV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 */

unsigned __int64 **__fastcall lambda_db39044b7ead6141e706115c994a467b_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK_____ptr64_void____cdecl____RTL_SRWLOCK_____ptr64___ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_2___RTL_SRWLOCK_____ptr64_0_std::nullptr_t_______(
        _QWORD **a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v3; // rdi
  __int64 ***v4; // r15
  __int64 *v5; // r14
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 i; // rbx
  _QWORD *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 j; // rdx
  unsigned __int64 **result; // rax
  unsigned __int64 *v18; // rbx
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  __int64 *v21; // [rsp+60h] [rbp+18h] BYREF

  v21 = a3;
  v3 = *a1;
  v4 = (__int64 ***)(a2 + 24);
  v5 = *(__int64 **)(a2 + 24);
  v8 = (__int64)v5;
  v9 = v5[1];
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v10 = v9 + 32;
    if ( *(_QWORD *)(v9 + 56) >= 8uLL )
      v10 = *(_QWORD *)(v9 + 32);
    if ( (int)_o__wcsicmp(v10) >= 0 )
    {
      if ( *(_BYTE *)(v8 + 25) )
      {
        v11 = v3;
        if ( v3[3] >= 8uLL )
          v11 = (_QWORD *)*v3;
        if ( (int)_o__wcsicmp(v11) < 0 )
          v8 = v9;
      }
      v5 = (__int64 *)v9;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      v9 = *(_QWORD *)(v9 + 16);
    }
  }
  if ( *(_BYTE *)(v8 + 25) )
    i = (__int64)(*v4 + 1);
  else
    i = v8;
LABEL_16:
  for ( i = *(_QWORD *)i; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
  {
    v13 = v3;
    if ( v3[3] >= 8uLL )
      v13 = (_QWORD *)*v3;
    if ( (int)_o__wcsicmp(v13) < 0 )
    {
      v8 = i;
      goto LABEL_16;
    }
  }
  v14 = v5;
  while ( v14 != (__int64 *)v8 )
  {
    if ( !*((_BYTE *)v14 + 25) )
    {
      v15 = v14[2];
      if ( *(_BYTE *)(v15 + 25) )
      {
        for ( j = v14[1]; !*(_BYTE *)(j + 25) && v14 == *(__int64 **)(j + 16); j = *(_QWORD *)(j + 8) )
          v14 = (__int64 *)j;
        v14 = (__int64 *)j;
      }
      else
      {
        do
        {
          v14 = (__int64 *)v15;
          v15 = *(_QWORD *)v15;
        }
        while ( !*(_BYTE *)(v15 + 25) );
      }
    }
  }
  std::_Tree<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>,0>>::erase(
    v4,
    &v21,
    v5,
    (__int64 *)v8);
  result = *(unsigned __int64 ***)(a2 + 104);
  v18 = *result;
  if ( *result != (unsigned __int64 *)result )
  {
    v19 = *a1;
    do
    {
      v20 = v19;
      if ( v19[3] >= 8uLL )
        v20 = (_QWORD *)*v19;
      result = (unsigned __int64 **)_o__wcsicmp(v20);
      if ( (_DWORD)result )
      {
        if ( !*((_BYTE *)v18 + 25) )
        {
          result = (unsigned __int64 **)v18[2];
          if ( *((_BYTE *)result + 25) )
          {
            for ( result = (unsigned __int64 **)v18[1];
                  !*((_BYTE *)result + 25) && v18 == result[2];
                  result = (unsigned __int64 **)result[1] )
            {
              v18 = (unsigned __int64 *)result;
            }
            v18 = (unsigned __int64 *)result;
          }
          else
          {
            do
            {
              v18 = (unsigned __int64 *)result;
              result = (unsigned __int64 **)*result;
            }
            while ( !*((_BYTE *)result + 25) );
          }
        }
      }
      else
      {
        result = std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::erase(
                   (_QWORD *)(a2 + 104),
                   (unsigned __int64 **)&v21,
                   v18);
        v18 = *result;
      }
    }
    while ( v18 != *(unsigned __int64 **)(a2 + 104) );
  }
  return result;
}
