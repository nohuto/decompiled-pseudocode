/*
 * XREFs of ??_GCMeterSoftware@@EEAAPEAXI@Z @ 0x180087F50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x180087C60 (--1CMeterSoftware@@EEAA@XZ.c)
 */

CMeterSoftware *__fastcall CMeterSoftware::`scalar deleting destructor'(CMeterSoftware *this, char a2)
{
  CMeterSoftware::~CMeterSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
