/*
 * XREFs of ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x18008DD20
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std::allocator_std::_Func_class_bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_______ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_______ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18008ED90 (std--_Func_impl_std--_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std_ea_18008ED90.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std::allocator_std::_Func_class_bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18008EE70 (std--_Func_impl_std--_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std_ea_18008EE70.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x18008DFE0 (-_Reserve@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Targ.c)
 */

char __fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::push_back(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  char result; // al
  __int64 v9; // rsi
  unsigned __int64 v10; // rsi

  v4 = a1[1];
  if ( a2 >= v4 || *a1 > a2 )
  {
    if ( v4 == a1[2] )
      std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reserve(a1);
    v10 = a1[1];
    result = 0;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 24) = 7LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_WORD *)v10 = 0;
      std::wstring::_Assign_rv((_QWORD *)v10, (_QWORD *)a2);
      *(_QWORD *)(v10 + 32) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(v10 + 40) = *(_QWORD *)(a2 + 40);
      result = *(_BYTE *)(a2 + 48);
      *(_BYTE *)(v10 + 48) = result;
    }
  }
  else
  {
    v5 = (__int64)(a2 - *a1) / 56;
    if ( v4 == a1[2] )
      std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reserve(a1);
    v6 = 56 * v5;
    v7 = a1[1];
    result = 0;
    v9 = *a1 + v6;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 24) = 7LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_WORD *)v7 = 0;
      std::wstring::_Assign_rv((_QWORD *)v7, (_QWORD *)v9);
      *(_QWORD *)(v7 + 32) = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v7 + 40) = *(_QWORD *)(v9 + 40);
      result = *(_BYTE *)(v9 + 48);
      *(_BYTE *)(v7 + 48) = result;
    }
  }
  a1[1] += 56LL;
  return result;
}
