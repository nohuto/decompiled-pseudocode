/*
 * XREFs of ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008D174
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008D680 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18008DC9C (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 *     ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18008E918 (--1-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18008EE20 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@PEAUParsedPenWorkspaceLayout@@@std@@YAXPEAUParsedPenWorkspaceLayout@@0AEAU?$_Wrap_alloc@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@0@@Z @ 0x18008F4A0 (--$_Destroy_range@V-$allocator@UParsedPenWorkspaceLayout@@@std@@PEAUParsedPenWorkspaceLayout@@@s.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x18008F52C (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 *     ??$destroy@UParsedTaskbarLayout@@@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@@Z @ 0x18008F764 (--$destroy@UParsedTaskbarLayout@@@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@Q.c)
 *     ??_GTaskbarLayoutParser@@UEAAPEAXI@Z @ 0x18008F7E0 (--_GTaskbarLayoutParser@@UEAAPEAXI@Z.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800F0570 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1800F19CC (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$1 @ 0x1801EA8A7 (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$1.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$2 @ 0x1801EA8B3 (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$2.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$1 @ 0x1801ED008 (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$1.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$2 @ 0x1801ED014 (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$2.c)
 * Callees:
 *     ??1?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@XZ @ 0x18008EB0C (--1-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@.c)
 */

void __fastcall StartLayout::SelectionData::~SelectionData(StartLayout::SelectionData *this)
{
  LPVOID *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v4; // rsi

  v1 = (LPVOID *)*((_QWORD *)this + 1);
  v2 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v1 + 7LL) >> 3;
  if ( (unsigned __int64)v1 > *((_QWORD *)this + 2) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      CoTaskMemFree(*v1);
      ++v2;
      ++v1;
    }
    while ( v2 != v4 );
  }
  std::vector<enum SharedStartModel::LayoutSKU>::~vector<enum SharedStartModel::LayoutSKU>((char *)this + 32);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>>>((char *)this + 8);
}
