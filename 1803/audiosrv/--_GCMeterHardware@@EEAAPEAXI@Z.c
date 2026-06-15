/*
 * XREFs of ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x18004AB90
 * Callers:
 *     ?Release@CMeterControlBase@@UEAAKXZ @ 0x18004A980 (-Release@CMeterControlBase@@UEAAKXZ.c)
 * Callees:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x18004ADD4 (--1CMeterHardware@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMeterHardware *__fastcall CMeterHardware::`scalar deleting destructor'(CMeterHardware *this, char a2)
{
  CMeterHardware::~CMeterHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
