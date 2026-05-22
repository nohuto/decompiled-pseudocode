/*
 * XREFs of ??1?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA@XZ @ 0x180009C50
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$2 @ 0x1800E38BB (_TestCommandHost--TestCommandHost_--_1_--dtor$2.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$1 @ 0x1800E4932 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$1.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$3 @ 0x1800E6D73 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$3.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$6 @ 0x1800E6DE6 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$6.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$7 @ 0x1800E957C (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::~unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>(
        __int64 a1)
{
  return std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::~_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>(a1);
}
