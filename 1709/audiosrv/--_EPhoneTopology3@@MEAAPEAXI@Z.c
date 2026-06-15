/*
 * XREFs of ??_EPhoneTopology3@@MEAAPEAXI@Z @ 0x1800EA9B0
 * Callers:
 *     ??_EPhoneTopology3@@O7EAAPEAXI@Z @ 0x180037AC0 (--_EPhoneTopology3@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PhoneTopology3@@MEAA@XZ @ 0x1800EA78C (--1PhoneTopology3@@MEAA@XZ.c)
 */

PhoneTopology3 *__fastcall PhoneTopology3::`vector deleting destructor'(PhoneTopology3 *this, char a2)
{
  PhoneTopology3::~PhoneTopology3(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x528);
  return this;
}
