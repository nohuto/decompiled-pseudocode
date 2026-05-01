/*
 * XREFs of ??_ECJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1800BCC50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1800BCC84 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CJumpViewExperienceManager *__fastcall CJumpViewExperienceManager::`vector deleting destructor'(
        CJumpViewExperienceManager *this,
        char a2)
{
  CJumpViewExperienceManager::~CJumpViewExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
