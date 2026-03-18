/*
 * XREFs of ??_ECGravityBounceAccelerator@@UEAAPEAXI@Z @ 0x18019B950
 * Callers:
 *     ??_ECGravityBounceAccelerator@@W7EAAPEAXI@Z @ 0x1800DDCE0 (--_ECGravityBounceAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CGravityBounceAccelerator *__fastcall CGravityBounceAccelerator::`vector deleting destructor'(
        CGravityBounceAccelerator *this,
        char a2)
{
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
