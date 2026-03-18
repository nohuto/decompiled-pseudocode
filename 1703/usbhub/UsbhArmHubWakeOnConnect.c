/*
 * XREFs of UsbhArmHubWakeOnConnect @ 0x1C00459C8
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     UsbhSetHubRemoteWake @ 0x1C0006294 (UsbhSetHubRemoteWake.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0015D58 (UsbhArmHubForWakeDetect.c)
 */

__int64 __fastcall UsbhArmHubWakeOnConnect(PDEVICE_OBJECT DeviceObject)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = (__int64)FdoExt((__int64)DeviceObject);
  v3 = result;
  if ( (*(_DWORD *)(result + 2560) & 0x80000) == 0 )
  {
    UsbhArmHubForWakeDetect(DeviceObject);
    result = UsbhSetHubRemoteWake((__int64)DeviceObject, 1);
    if ( (int)result >= 0 )
      *(_DWORD *)(v3 + 2560) |= 0x80000u;
  }
  return result;
}
