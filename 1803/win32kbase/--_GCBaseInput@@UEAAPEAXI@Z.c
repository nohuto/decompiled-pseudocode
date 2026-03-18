/*
 * XREFs of ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C0121A00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C0121960 (--1CBaseInput@@UEAA@XZ.c)
 */

CBaseInput *__fastcall CBaseInput::`scalar deleting destructor'(CBaseInput *this, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  CBaseInput::~CBaseInput(this, a2);
  if ( (v2 & 1) != 0 && this )
    Win32FreePool((__int64)this);
  return this;
}
