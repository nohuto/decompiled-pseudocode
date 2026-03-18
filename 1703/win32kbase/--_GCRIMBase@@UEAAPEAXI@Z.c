/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C006E6D0
 * Callers:
 *     CKeyboardSensor_Destroy @ 0x1C0069420 (CKeyboardSensor_Destroy.c)
 *     CMouseSensor_Destroy @ 0x1C0069450 (CMouseSensor_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
