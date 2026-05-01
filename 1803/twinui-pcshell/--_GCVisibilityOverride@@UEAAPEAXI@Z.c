/*
 * XREFs of ??_GCVisibilityOverride@@UEAAPEAXI@Z @ 0x1801134E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVisibilityOverride@@UEAA@XZ @ 0x180113444 (--1CVisibilityOverride@@UEAA@XZ.c)
 */

CVisibilityOverride *__fastcall CVisibilityOverride::`scalar deleting destructor'(CVisibilityOverride *this, char a2)
{
  CVisibilityOverride::~CVisibilityOverride(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
