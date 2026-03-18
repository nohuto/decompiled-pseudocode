/*
 * XREFs of ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C000A850
 * Callers:
 *     CKeyboardSensor_Destroy @ 0x1C0004F50 (CKeyboardSensor_Destroy.c)
 *     CMouseSensor_Destroy @ 0x1C0004F80 (CMouseSensor_Destroy.c)
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C001AAD0 (--1CRIMBase@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CBaseInput *__fastcall CBaseInput::`scalar deleting destructor'(CBaseInput *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, v4, v5);
  return this;
}
