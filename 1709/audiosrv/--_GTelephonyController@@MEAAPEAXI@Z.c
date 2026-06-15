/*
 * XREFs of ??_GTelephonyController@@MEAAPEAXI@Z @ 0x1800ED2C8
 * Callers:
 *     ??_ETelephonyController@@O7EAAPEAXI@Z @ 0x180037AE0 (--_ETelephonyController@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x1800ED260 (--1TelephonyController@@MEAA@XZ.c)
 */

TelephonyController *__fastcall TelephonyController::`scalar deleting destructor'(TelephonyController *this, char a2)
{
  TelephonyController::~TelephonyController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
