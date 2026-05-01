/*
 * XREFs of ??_EComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAPEAXI@Z @ 0x1801C9B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA@XZ @ 0x1801C87A0 (--1ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *__fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vector deleting destructor'(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        char a2)
{
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::~ComponentRelationshipStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}
