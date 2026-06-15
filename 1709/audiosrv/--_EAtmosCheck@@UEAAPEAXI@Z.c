/*
 * XREFs of ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x1800E2A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x1800E2650 (--1AtmosCheck@@UEAA@XZ.c)
 */

AtmosCheck *__fastcall AtmosCheck::`vector deleting destructor'(AtmosCheck *this, char a2)
{
  AtmosCheck::~AtmosCheck(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
