/*
 * XREFs of ??_ECMouseSensor@@UEAAPEAXI@Z @ 0x1C0131840
 * Callers:
 *     CMouseSensor_Destroy @ 0x1C0131B70 (CMouseSensor_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C0121960 (--1CBaseInput@@UEAA@XZ.c)
 */

CMouseSensor *__fastcall CMouseSensor::`vector deleting destructor'(CMouseSensor *this, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  *(_QWORD *)this = &CMouseSensor::`vftable';
  CBaseInput::~CBaseInput(this, a2);
  if ( (v2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
