/*
 * XREFs of ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x18009B368
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std::allocator_std::_Func_class_bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_______ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_______ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18009C520 (std--_Func_impl_std--_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std_ea_18009C520.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std::allocator_std::_Func_class_bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18009C600 (std--_Func_impl_std--_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std_ea_18009C600.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x18009B618 (-_Reserve@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Targ.c)
 */

char __fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::push_back(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  char v5; // al
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  char result; // al

  v2 = a1[1];
  v3 = a2;
  if ( a2 >= v2 || (v5 = 1, *a1 > a2) )
    v5 = 0;
  if ( v5 )
  {
    v6 = *a1;
    v7 = (__int64)(a2 - v6) / 56;
    if ( v2 == a1[2] )
    {
      std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reserve(a1);
      v6 = *a1;
      v2 = a1[1];
    }
    v3 = v6 + 56 * v7;
  }
  else if ( v2 == a1[2] )
  {
    ((void (*)(void))std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reserve)();
    v2 = a1[1];
  }
  *(_QWORD *)(v2 + 24) = 7LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_WORD *)v2 = 0;
  std::wstring::_Assign_rv((_QWORD *)v2, (_QWORD *)v3);
  *(_QWORD *)(v2 + 32) = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(v3 + 40);
  result = *(_BYTE *)(v3 + 48);
  *(_BYTE *)(v2 + 48) = result;
  a1[1] += 56LL;
  return result;
}
