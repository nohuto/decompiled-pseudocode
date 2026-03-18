/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14057F644
 * Callers:
 *     WmipForwardWmiIrp @ 0x14051F140 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
