/*
 * XREFs of ?CompareStringVector@SelectionData@StartLayout@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x18014AC14
 * Callers:
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18014ADF4 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18025CF30 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUCompone.c)
 */

__int64 __fastcall StartLayout::SelectionData::CompareStringVector(
        __int64 a1,
        LPCWCH **a2,
        char a3,
        LPCWCH **a4,
        char a5,
        int *a6)
{
  LPCWCH *v8; // rdi
  int v9; // ebx
  LPCWCH *v10; // r12
  LPCWCH *v11; // rsi
  LPCWCH *v12; // r13

  if ( a3 && a5 )
  {
    v8 = *a2;
    v9 = -1;
    v10 = a2[1];
LABEL_9:
    if ( v8 != v10 )
    {
      v11 = *a4;
      v12 = a4[1];
      while ( 1 )
      {
        if ( v11 == v12 )
        {
          ++v8;
          goto LABEL_9;
        }
        if ( CompareStringOrdinal(*v8, -1, *v11, -1, 0) == 2 )
          break;
        ++v11;
      }
      v9 = *a6 + 1;
    }
    *a6 = v9;
  }
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>(a2);
  return std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>(a4);
}
