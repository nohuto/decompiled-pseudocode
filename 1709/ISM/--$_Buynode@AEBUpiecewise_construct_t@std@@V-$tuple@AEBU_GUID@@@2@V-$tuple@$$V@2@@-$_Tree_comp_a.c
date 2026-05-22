/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003450C
 * Callers:
 *     ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180033864 (-DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@XZ @ 0x180034874 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U-$KeyCompareTrai.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        _OWORD **a3)
{
  __int64 result; // rax
  _OWORD *v5; // rcx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  try
  {
    if ( result != -32 )
    {
      v5 = *a3;
      *(_OWORD *)(result + 32) = **a3;
      *(GUID *)(result + 48) = DirectX::g_XMZero;
      *(_QWORD *)(result + 80) = 0LL;
      *(_QWORD *)(result + 88) = 7LL;
      *(_WORD *)(result + 64) = 0;
      *(_QWORD *)(result + 96) = 0LL;
      *(_DWORD *)(result + 104) = 0;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      (__int64)v5,
      (void *)result);
    throw;
  }
  return result;
}
