/*
 * XREFs of ??_GCStartExperienceManager@@UEAAPEAXI@Z @ 0x1800B5FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1800B6014 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStartExperienceManager *__fastcall CStartExperienceManager::`scalar deleting destructor'(
        CStartExperienceManager *this,
        char a2)
{
  CStartExperienceManager::~CStartExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
