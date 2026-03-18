/*
 * XREFs of UsbhHubSSH_AddDeviceInit @ 0x1C0026B50
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhHubSSH_AddDeviceInit(__int64 a1, __int64 a2)
{
  int v4; // r9d
  EVENT_TYPE v5; // esi
  _DWORD *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r10

  Log(a1, 0x10000, 1936933220, 0LL, a2);
  v5 = v4 + 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v5,
      17,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v6 = FdoExt(*(_QWORD *)(a2 + 8));
  *((_QWORD *)v6 + 389) = v6 + 776;
  *((_QWORD *)v6 + 388) = v6 + 776;
  KeInitializeEvent((PRKEVENT)v6 + 139, v5, v5);
  KeInitializeEvent((PRKEVENT)v6 + 140, v5, v5);
  Log(a1, 0x2000, 1768843604, (__int64)(v6 + 800), (__int64)UsbhHubSSH_Timer);
  *(_QWORD *)v7 = 1332899156LL;
  *(_QWORD *)(v7 + 48) = v8;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 72) = 1397966964;
  KeInitializeSemaphore((PRKSEMAPHORE)(v6 + 782), v5, v5);
  KeInitializeSemaphore((PRKSEMAPHORE)(v6 + 790), v5, v5);
  KeInitializeEvent((PRKEVENT)v6 + 143, NotificationEvent, v5);
  KeInitializeEvent((PRKEVENT)v6 + 141, NotificationEvent, v5);
  v6[820] = v5;
  v6[781] = v5;
}
