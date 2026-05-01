/*
 * XREFs of ??_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z @ 0x180198CF4
 * Callers:
 *     ??_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z @ 0x18019F8C0 (--_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x180198D30 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
