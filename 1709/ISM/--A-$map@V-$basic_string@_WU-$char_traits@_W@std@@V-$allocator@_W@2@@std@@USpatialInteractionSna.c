/*
 * XREFs of ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUSpatialInteractionSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180076734
 * Callers:
 *     _lambda_cd0cf05eb48187a67a9205d44c09d298_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK_____ptr64_void_(__cdecl_)(_RTL_SRWLOCK_____ptr64)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_2___RTL_SRWLOCK_____ptr64_0_std::nullptr_t_______ @ 0x180075B70 (_lambda_cd0cf05eb48187a67a9205d44c09d298_--operator()_wil--unique_any_t_wil--details--unique_sto.c)
 *     ?AddSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180076804 (-AddSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV-$ba.c)
 *     _lambda_04ea9bd14a26c12d050b221e58aed9d7_::operator() @ 0x1800C78EC (_lambda_04ea9bd14a26c12d050b221e58aed9d7_--operator().c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180075EF4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@_WU-$char_traits@_W@std@@.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x18007642C (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 */

__int64 __fastcall std::map<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>>::operator[](
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  unsigned __int64 *v8; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (_QWORD *)(v5 + 32);
    if ( *(_QWORD *)(v5 + 56) >= 8uLL )
      v6 = (_QWORD *)*v6;
    if ( (int)_o__wcsicmp(v6) >= 0 )
    {
      v2 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  if ( v2 == *a1 )
    goto LABEL_12;
  v7 = a2;
  if ( a2[3] >= 8uLL )
    v7 = (_QWORD *)*a2;
  if ( (int)_o__wcsicmp(v7) < 0 )
  {
LABEL_12:
    v10 = a2;
    v8 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(
           a1,
           (__int64)a2,
           (__int64 *)&v10);
    std::_Tree<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>,0>>::_Insert_hint<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot> &,std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>,void *> *>(
      (__int64 **)a1,
      &v10,
      v2,
      v8 + 4,
      v8);
    v2 = (__int64)v10;
  }
  return v2 + 64;
}
