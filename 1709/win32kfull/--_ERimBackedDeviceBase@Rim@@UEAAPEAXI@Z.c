/*
 * XREFs of ??_ERimBackedDeviceBase@Rim@@UEAAPEAXI@Z @ 0x1C020B980
 * Callers:
 *     <none>
 * Callees:
 *     ?UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C020BD60 (-UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 */

Rim::RimBackedDeviceBase *__fastcall Rim::RimBackedDeviceBase::`vector deleting destructor'(
        Rim::RimBackedDeviceBase *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &Rim::RimBackedDeviceBase::`vftable';
  Rim::RimBackedDeviceBase::UnInitialize(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, v4, v5);
  return this;
}
