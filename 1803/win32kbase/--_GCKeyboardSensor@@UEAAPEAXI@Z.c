/*
 * XREFs of ??_GCKeyboardSensor@@UEAAPEAXI@Z @ 0x1C012AEA0
 * Callers:
 *     CKeyboardSensor_Destroy @ 0x1C012B0E0 (CKeyboardSensor_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C0121960 (--1CBaseInput@@UEAA@XZ.c)
 */

CKeyboardSensor *__fastcall CKeyboardSensor::`scalar deleting destructor'(CKeyboardSensor *this, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  *(_QWORD *)this = &CKeyboardSensor::`vftable';
  CBaseInput::~CBaseInput(this, a2);
  if ( (v2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
