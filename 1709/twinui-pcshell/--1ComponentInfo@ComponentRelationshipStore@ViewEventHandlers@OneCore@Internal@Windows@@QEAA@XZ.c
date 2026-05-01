/*
 * XREFs of ??1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x18012B5D4
 * Callers:
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent_::_1_::dtor$2 @ 0x1801F772C (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--Registe_ea_1801F772C.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::PlaceComponentInfoOnFreeList_::_1_::dtor$0 @ 0x1801F776E (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--PlaceComponentInfoOn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::~ComponentInfo(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  __int64 v5; // rcx

  v2 = (char *)*((_QWORD *)this + 8);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
