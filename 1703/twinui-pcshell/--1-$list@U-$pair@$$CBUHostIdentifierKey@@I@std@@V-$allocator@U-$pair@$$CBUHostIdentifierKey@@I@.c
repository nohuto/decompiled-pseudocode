/*
 * XREFs of ??1?$list@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAA@XZ @ 0x1800FDA70
 * Callers:
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$12 @ 0x18019DF06 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_18019DF06.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::list<std::pair<HostIdentifierKey const,unsigned int>>::~list<std::pair<HostIdentifierKey const,unsigned int>>(
        char **a1)
{
  char **v1; // rax
  char *v3; // rcx
  char *v4; // rbx

  v1 = (char **)*a1;
  v3 = *(char **)*a1;
  *v1 = (char *)v1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v3 != *a1 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_Deallocate(v3, 1uLL, 0x20uLL);
      v3 = v4;
    }
    while ( v4 != *a1 );
  }
  std::_Deallocate(*a1, 1uLL, 0x20uLL);
}
