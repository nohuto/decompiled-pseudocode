/*
 * XREFs of ??1?$unordered_multimap@UHostIdentifierKey@@IU?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@@std@@QEAA@XZ @ 0x1801C8770
 * Callers:
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$3 @ 0x1801C7DF7 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801C7DF7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_multimap<HostIdentifierKey,unsigned int>::~unordered_multimap<HostIdentifierKey,unsigned int>(
        _QWORD *a1)
{
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::~_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>(a1);
}
