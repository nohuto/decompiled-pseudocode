/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x1801053E4
 * Callers:
 *     ??_ECApplicationManager@@OFI@EAAPEAXI@Z @ 0x1800A27F0 (--_ECApplicationManager@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180104434 (--1CApplicationManager@@MEAA@XZ.c)
 */

CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(
        CApplicationManager *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CApplicationManager::~CApplicationManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3A0);
  return this;
}
