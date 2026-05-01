/*
 * XREFs of ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18008EC44
 * Callers:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008D174 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18008D1F4 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 *     _StartLayout::SelectionData::GetSelectionScore_::_1_::dtor$0 @ 0x1801EA5C1 (_StartLayout--SelectionData--GetSelectionScore_--_1_--dtor$0.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$50 @ 0x1801EA6FF (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$50.c)
 *     _std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64____::_1_::catch$66 @ 0x1801EA87B (_std--vector_unsigned_short_____ptr64_std--allocator_unsigned_short_____ptr64___--vector_unsigne.c)
 *     _std::_Wrap_alloc_std::allocator_ParsedPenWorkspaceLayout___::construct_ParsedPenWorkspaceLayout_ParsedPenWorkspaceLayout__::_1_::dtor$7 @ 0x1801EA9D2 (_std--_Wrap_alloc_std--allocator_ParsedPenWorkspaceLayout___--construct_ParsedPenWo_ea_1801EA9D2.c)
 *     _std::_Func_impl__lambda_4e68ad2abbd0bb666338069fbee19963__std::allocator_int__StartLayout::SelectionData_ParsedPenWorkspaceLayout_const_&___ptr64_::_Do_call_::_1_::dtor$14 @ 0x1801EAA16 (_std--_Func_impl__lambda_4e68ad2abbd0bb666338069fbee19963__std--allocator_int__StartLayout--Sele.c)
 *     _PenWorkspaceDiscoverBroker::RuntimeClassInitialize_::_1_::dtor$21 @ 0x1801EC217 (_PenWorkspaceDiscoverBroker--RuntimeClassInitialize_--_1_--dtor$21.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$54 @ 0x1801ECF7C (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$54.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$13 @ 0x1801EE12C (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801EE12C.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$48 @ 0x1801EE15C (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801EE15C.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$83 @ 0x1801EE18F (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801EE18F.c)
 *     _XamlTaskbarManager_CreateInstance_::_1_::dtor$21 @ 0x1801F0198 (_XamlTaskbarManager_CreateInstance_--_1_--dtor$21.c)
 *     _VirtualDesktopDataSource_CreateInstance_::_1_::dtor$19 @ 0x1801F6D5B (_VirtualDesktopDataSource_CreateInstance_--_1_--dtor$19.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>>>(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) >> 3;
    if ( v3 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x18008ECB8LL);
  }
}
