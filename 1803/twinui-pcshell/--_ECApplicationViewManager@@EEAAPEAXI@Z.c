/*
 * XREFs of ??_ECApplicationViewManager@@EEAAPEAXI@Z @ 0x18013B008
 * Callers:
 *     ??_ECApplicationViewManager@@GEI@EAAPEAXI@Z @ 0x1800A3DA0 (--_ECApplicationViewManager@@GEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x18013A470 (--1CApplicationViewManager@@EEAA@XZ.c)
 */

CApplicationViewManager *__fastcall CApplicationViewManager::`vector deleting destructor'(
        CApplicationViewManager *this,
        char a2)
{
  CApplicationViewManager::~CApplicationViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x298);
  return this;
}
