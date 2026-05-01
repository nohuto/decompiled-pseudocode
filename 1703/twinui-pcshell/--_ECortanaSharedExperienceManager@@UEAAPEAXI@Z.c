/*
 * XREFs of ??_ECortanaSharedExperienceManager@@UEAAPEAXI@Z @ 0x1800BFA00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x1800BFA34 (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CortanaSharedExperienceManager *__fastcall CortanaSharedExperienceManager::`vector deleting destructor'(
        CortanaSharedExperienceManager *this,
        char a2)
{
  CortanaSharedExperienceManager::~CortanaSharedExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
