/*
 * XREFs of ??1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x180072C2C
 * Callers:
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@2@@Z @ 0x180072AFC (-_Freenode@-$_List_buy@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent_::_1_::dtor$2 @ 0x1800B2848 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Registe_ea_1800B2848.c)
 *     ?PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJI@Z @ 0x180301670 (-PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::PlaceComponentInfoOnFreeList_::_1_::dtor$0 @ 0x180301793 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--PlaceComponentInfoOn.c)
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x180301980 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Int_ea_180301980.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::~ComponentInfo(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx

  v2 = (char *)*((_QWORD *)this + 8);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)this + 2);
}
