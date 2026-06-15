/*
 * XREFs of ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x18009F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CProcessSubmixManager@@UEAA@XZ @ 0x18009F288 (--1CProcessSubmixManager@@UEAA@XZ.c)
 */

CProcessSubmixManager *__fastcall CProcessSubmixManager::`scalar deleting destructor'(
        CProcessSubmixManager *this,
        char a2)
{
  CProcessSubmixManager::~CProcessSubmixManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
