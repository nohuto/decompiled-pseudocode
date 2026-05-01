/*
 * XREFs of ??1?$unordered_multimap@UHostIdentifierKey@@IU?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@@std@@QEAA@XZ @ 0x180118464
 * Callers:
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$1 @ 0x1801EE13C (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801EE13C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_multimap<HostIdentifierKey,unsigned int>::~unordered_multimap<HostIdentifierKey,unsigned int>(
        __int64 a1)
{
  return std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::~_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>(a1);
}
