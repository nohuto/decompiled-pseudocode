/*
 * XREFs of ??1?$list@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAA@XZ @ 0x1801C86B4
 * Callers:
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$27 @ 0x1801C7DD7 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801C7DD7.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::list<std::pair<HostIdentifierKey const,unsigned int>>::~list<std::pair<HostIdentifierKey const,unsigned int>>(
        __int64 a1)
{
  char *v2; // r9
  char *v3; // rcx
  char *v4; // rbx

  v2 = **(char ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(char **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(char **)v2;
      std::_Deallocate(v2, 1uLL, 0x20uLL);
      v3 = *(char **)a1;
      v2 = v4;
    }
    while ( v4 != *(char **)a1 );
  }
  std::_Deallocate(v3, 1uLL, 0x20uLL);
}
