/*
 * XREFs of ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C0218D90
 * Callers:
 *     ??_EInkDevice@@WCA@EAAPEAXI@Z @ 0x1C0145B00 (--_EInkDevice@@WCA@EAAPEAXI@Z.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0218DF4 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C02198F0 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 * Callees:
 *     ??1InkDevice@@UEAA@XZ @ 0x1C021E304 (--1InkDevice@@UEAA@XZ.c)
 */

InkDevice *__fastcall InkDevice::`vector deleting destructor'(InkDevice *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  InkDevice::~InkDevice(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool(this, v4, v5);
  return this;
}
