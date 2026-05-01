/*
 * XREFs of ??_GCActionCenterExperienceManager@@UEAAPEAXI@Z @ 0x180095340
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1800953C8 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CActionCenterExperienceManager *__fastcall CActionCenterExperienceManager::`scalar deleting destructor'(
        CActionCenterExperienceManager *this,
        char a2)
{
  CActionCenterExperienceManager::~CActionCenterExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
