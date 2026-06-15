/*
 * XREFs of ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x18000BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x18000BDD4 (--1CDuckingManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDuckingManager *__fastcall CDuckingManager::`vector deleting destructor'(CDuckingManager *this, char a2)
{
  CDuckingManager::~CDuckingManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x140);
  return this;
}
