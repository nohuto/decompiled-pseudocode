/*
 * XREFs of ??_GCFrictionAccelerator@@UEAAPEAXI@Z @ 0x18019B924
 * Callers:
 *     ??_ECFrictionAccelerator@@W7EAAPEAXI@Z @ 0x1800DDCD0 (--_ECFrictionAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CFrictionAccelerator *__fastcall CFrictionAccelerator::`scalar deleting destructor'(
        CFrictionAccelerator *this,
        char a2)
{
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
