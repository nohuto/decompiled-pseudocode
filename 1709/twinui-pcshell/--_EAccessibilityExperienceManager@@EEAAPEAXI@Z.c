/*
 * XREFs of ??_EAccessibilityExperienceManager@@EEAAPEAXI@Z @ 0x1801AFE74
 * Callers:
 *     ??_EAccessibilityExperienceManager@@GDA@EAAPEAXI@Z @ 0x1801B3190 (--_EAccessibilityExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x1801AFEA8 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AccessibilityExperienceManager *__fastcall AccessibilityExperienceManager::`vector deleting destructor'(
        AccessibilityExperienceManager *this,
        char a2)
{
  AccessibilityExperienceManager::~AccessibilityExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
