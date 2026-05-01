/*
 * XREFs of ??_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z @ 0x1801053B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CActivationBasedAppAndGlomCollection@@UEAA@XZ @ 0x1801043B0 (--1CActivationBasedAppAndGlomCollection@@UEAA@XZ.c)
 */

CActivationBasedAppAndGlomCollection *__fastcall CActivationBasedAppAndGlomCollection::`scalar deleting destructor'(
        CActivationBasedAppAndGlomCollection *this,
        char a2)
{
  CActivationBasedAppAndGlomCollection::~CActivationBasedAppAndGlomCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
