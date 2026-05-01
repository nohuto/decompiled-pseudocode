/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180007D40
 * Callers:
 *     ??_ECApplicationManager@@OGA@EAAPEAXI@Z @ 0x18001D090 (--_ECApplicationManager@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180007E1C (--1CApplicationManager@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  CApplicationManager::~CApplicationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
