/*
 * XREFs of ??_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z @ 0x18016AEE4
 * Callers:
 *     ??_ETouchKeyboardExperienceManager@@GCI@EAAPEAXI@Z @ 0x18016DC60 (--_ETouchKeyboardExperienceManager@@GCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18016AF18 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TouchKeyboardExperienceManager *__fastcall TouchKeyboardExperienceManager::`scalar deleting destructor'(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  TouchKeyboardExperienceManager::~TouchKeyboardExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
