/*
 * XREFs of UsbhArmHubForWakeDetect @ 0x1C0015D58
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C00459C8 (UsbhArmHubWakeOnConnect.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0005F78 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhEtwGetHubInfo @ 0x1C00082F0 (UsbhEtwGetHubInfo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 */

void __fastcall UsbhArmHubForWakeDetect(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  int v3; // r9d
  _DWORD *v4; // rax
  int v5; // ecx
  __int64 v6; // r9
  int v7; // r10d
  NTSTATUS v8; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-59h]
  int v10; // [rsp+60h] [rbp-19h] BYREF
  _DWORD v11[4]; // [rsp+68h] [rbp-11h] BYREF
  int v12; // [rsp+78h] [rbp-1h] BYREF
  __int16 v13; // [rsp+7Ch] [rbp+3h]
  __int16 v14; // [rsp+7Eh] [rbp+5h]
  __int16 v15; // [rsp+80h] [rbp+7h]
  __int16 v16; // [rsp+82h] [rbp+9h]
  _BYTE v17[40]; // [rsp+88h] [rbp+Fh] BYREF

  v2 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1750554411, 0LL, 0LL);
  v10 &= v3;
  v11[0] &= v3;
  if ( dword_1C0069650 != v3 )
  {
    v4 = FdoExt((__int64)DeviceObject);
    v12 = v4[1298];
    v13 = *((_WORD *)v4 + 2598);
    v5 = v4[1300];
    v14 = v5;
    v11[2] = v5;
    v15 = *((_WORD *)v4 + 2614);
    v16 = *((_WORD *)v4 + 2615);
    UsbhEtwGetHubInfo((__int64)v4, (__int64)v17);
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_START,
      0LL,
      (unsigned __int64)&v12,
      12LL,
      v17,
      36LL,
      v11,
      4LL,
      &v10,
      4LL,
      0LL);
  }
  while ( 1 )
  {
    Log((__int64)DeviceObject, 16, 1750554488, 0LL, _InterlockedCompareExchange(v2 + 1221, 2, 1));
    if ( v7 == 1 )
      break;
    if ( ((v7 - 2) & 0xFFFFFFFD) == 0 )
      return;
    UsbhDisarmHubForWakeDetect((int)DeviceObject);
  }
  KeWaitForSingleObject(v2 + 1224, Executive, 0, v6, (PLARGE_INTEGER)(v6 & (unsigned __int64)Timeout));
  Log((__int64)DeviceObject, 16, 1750554480, 0LL, 0LL);
  KeResetEvent((PRKEVENT)v2 + 204);
  v8 = PoRequestPowerIrp(
         DeviceObject,
         0,
         (POWER_STATE)v2[1259],
         (PREQUEST_POWER_COMPLETE)UsbhFdoWakePoComplete_Action,
         0LL,
         0LL);
  if ( v8 == 259 )
  {
    Log((__int64)DeviceObject, 16, 1749111373, 0LL, 0LL);
  }
  else
  {
    Log((__int64)DeviceObject, 16, 1463896944, v8, 0LL);
    v2[1221] = 1;
    KeSetEvent((PRKEVENT)v2 + 204, 0, 0);
  }
}
