/*
 * XREFs of ??_ECApplicationViewManager@@EEAAPEAXI@Z @ 0x180071434
 * Callers:
 *     ??_ECApplicationViewManager@@GDI@EAAPEAXI@Z @ 0x180076C80 (--_ECApplicationViewManager@@GDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x1800714CC (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
