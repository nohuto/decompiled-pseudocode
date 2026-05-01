/*
 * XREFs of ??_ECApplicationViewManager@@EEAAPEAXI@Z @ 0x180073F9C
 * Callers:
 *     ??_ECApplicationViewManager@@GFA@EAAPEAXI@Z @ 0x1800798C0 (--_ECApplicationViewManager@@GFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x180074034 (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CApplicationViewManager *__fastcall CApplicationViewManager::`vector deleting destructor'(
        CApplicationViewManager *this,
        char a2)
{
  CApplicationViewManager::~CApplicationViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
