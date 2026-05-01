/*
 * XREFs of ??_GCImmersiveWindowManager@@MEAAPEAXI@Z @ 0x180115BF4
 * Callers:
 *     ??_ECImmersiveWindowManager@@OEI@EAAPEAXI@Z @ 0x1800A3090 (--_ECImmersiveWindowManager@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveWindowManager@@MEAA@XZ @ 0x18011571C (--1CImmersiveWindowManager@@MEAA@XZ.c)
 */

CImmersiveWindowManager *__fastcall CImmersiveWindowManager::`scalar deleting destructor'(
        CImmersiveWindowManager *this,
        char a2)
{
  CImmersiveWindowManager::~CImmersiveWindowManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
