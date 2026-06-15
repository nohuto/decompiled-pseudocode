/*
 * XREFs of ??_GTelephonyController@@MEAAPEAXI@Z @ 0x18011A254
 * Callers:
 *     ??_ETelephonyController@@O7EAAPEAXI@Z @ 0x180066870 (--_ETelephonyController@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x18011A1E0 (--1TelephonyController@@MEAA@XZ.c)
 */

TelephonyController *__fastcall TelephonyController::`scalar deleting destructor'(TelephonyController *this, char a2)
{
  TelephonyController::~TelephonyController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
