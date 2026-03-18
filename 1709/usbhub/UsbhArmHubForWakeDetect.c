/*
 * XREFs of UsbhArmHubForWakeDetect @ 0x1C0017140
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C0046878 (UsbhArmHubWakeOnConnect.c)
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x1C00056DC (UsbhDisarmHubForWakeDetect.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 */

void __fastcall UsbhArmHubForWakeDetect(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  int v3; // r9d
  __int64 v4; // r9
  int v5; // r10d
  NTSTATUS v6; // eax
  int Timeouta; // [rsp+20h] [rbp-18h]
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  v2 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1750554411, 0LL, 0LL);
  UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_START, v3 & Timeouta, v3 & v9);
  while ( 1 )
  {
    Log((__int64)DeviceObject, 16, 1750554488, 0LL, _InterlockedCompareExchange(v2 + 1221, 2, 1));
    if ( v5 == 1 )
      break;
    if ( ((v5 - 2) & 0xFFFFFFFD) == 0 )
      return;
    UsbhDisarmHubForWakeDetect((int)DeviceObject);
  }
  KeWaitForSingleObject(v2 + 1224, Executive, 0, v4, (PLARGE_INTEGER)(v4 & (unsigned __int64)Timeout));
  Log((__int64)DeviceObject, 16, 1750554480, 0LL, 0LL);
  KeResetEvent((PRKEVENT)v2 + 204);
  v6 = PoRequestPowerIrp(
         DeviceObject,
         0,
         (POWER_STATE)v2[1259],
         (PREQUEST_POWER_COMPLETE)UsbhFdoWakePoComplete_Action,
         0LL,
         0LL);
  if ( v6 == 259 )
  {
    Log((__int64)DeviceObject, 16, 1749111373, 0LL, 0LL);
  }
  else
  {
    Log((__int64)DeviceObject, 16, 1463896944, v6, 0LL);
    v2[1221] = 1;
    KeSetEvent((PRKEVENT)v2 + 204, 0, 0);
  }
}
