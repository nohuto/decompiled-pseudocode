/*
 * XREFs of ??_ECSpringAccelerator@@UEAAPEAXI@Z @ 0x180193534
 * Callers:
 *     ??_ECSpringAccelerator@@W7EAAPEAXI@Z @ 0x1800DDCB0 (--_ECSpringAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CSpringAccelerator *__fastcall CSpringAccelerator::`vector deleting destructor'(CSpringAccelerator *this, char a2)
{
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
