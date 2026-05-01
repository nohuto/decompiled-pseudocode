/*
 * XREFs of ??_GCGlobals@ApplicationViewManagement@@UEAAPEAXI@Z @ 0x180079360
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x180079394 (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ApplicationViewManagement::CGlobals *__fastcall ApplicationViewManagement::CGlobals::`scalar deleting destructor'(
        ApplicationViewManagement::CGlobals *this,
        char a2)
{
  ApplicationViewManagement::CGlobals::~CGlobals(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
