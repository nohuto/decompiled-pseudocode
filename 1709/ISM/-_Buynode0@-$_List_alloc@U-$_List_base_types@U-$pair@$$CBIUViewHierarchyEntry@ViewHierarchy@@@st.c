/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000AB30
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180009C84 (--0TestCommandHost@@AEAA@XZ.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAW4TestCommandMessageType@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAW4TestCommandMessageType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18000ADA4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAW4TestCommandMessageType@@@2@V-$tuple@$.c)
 *     ??0ViewHierarchy@@AEAA@XZ @ 0x180082F34 (--0ViewHierarchy@@AEAA@XZ.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800847C8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_List__ea_1800847C8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax
  _QWORD *v6; // rcx

  result = operator new(0x28uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  try
  {
    if ( result )
      *result = a2;
    v6 = result + 1;
    if ( result != (_QWORD *)-8LL )
      *v6 = a3;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      (__int64)v6,
      result);
    throw;
  }
  return result;
}
