/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180007B50
 * Callers:
 *     ??_ECApplicationManager@@OEI@EAAPEAXI@Z @ 0x18001C6C0 (--_ECApplicationManager@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180007D1C (--1CApplicationManager@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  CApplicationManager::~CApplicationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
