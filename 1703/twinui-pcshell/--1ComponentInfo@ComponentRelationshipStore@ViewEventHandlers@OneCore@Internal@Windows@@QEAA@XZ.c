/*
 * XREFs of ??1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x180100EF8
 * Callers:
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair_::_1_::dtor$1 @ 0x1801A521D (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Registe_ea_1801A521D.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::PlaceComponentInfoOnFreeList_::_1_::dtor$1 @ 0x1801A526B (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--PlaceCo_ea_1801A526B.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::~ComponentInfo(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  __int64 v5; // rcx

  v2 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
