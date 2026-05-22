/*
 * XREFs of ??1PTPDevice@@UEAA@XZ @ 0x18009CF24
 * Callers:
 *     ??_EPTPDevice@@UEAAPEAXI@Z @ 0x18009CEF0 (--_EPTPDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PTPDevice::~PTPDevice(PTPDevice *this)
{
  *(_QWORD *)this = &PTPDevice::`vftable';
  *((_OWORD *)this + 8) = 0uLL;
  HIDDevice::~HIDDevice(this);
}
