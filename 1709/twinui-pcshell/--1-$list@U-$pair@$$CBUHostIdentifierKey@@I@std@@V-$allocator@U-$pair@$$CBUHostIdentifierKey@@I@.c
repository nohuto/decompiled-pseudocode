/*
 * XREFs of ??1?$list@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAA@XZ @ 0x180128C0C
 * Callers:
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore_::_1_::dtor$12 @ 0x1801EE11C (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Compone_ea_1801EE11C.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::list<std::pair<HostIdentifierKey const,unsigned int>>::~list<std::pair<HostIdentifierKey const,unsigned int>>(
        void **a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = *a1;
  v3 = *(_QWORD **)*a1;
  *v1 = v1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v3 != *a1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 != *a1 );
  }
  operator delete(*a1);
}
