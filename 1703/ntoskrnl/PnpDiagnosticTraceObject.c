/*
 * XREFs of PnpDiagnosticTraceObject @ 0x1400682D8
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140080E60 (PnpDeviceCompletionRoutine.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140457020 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x14045BAC0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PipEnumerateDevice @ 0x1404A758C (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x140597A84 (PnpQueueQueryAndRemoveEvent.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     PnpRebalance @ 0x1406A9D3C (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x1407F99D8 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x14081F560 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x14081FA60 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  REGHANDLE v2; // rbx
  int v6; // r8d
  __int16 v7; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-40h] BYREF
  __int64 v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+64h] [rbp-24h]

  v2 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v6 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v7 = (unsigned __int16)v6 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  UserData.Size = 2;
  v10 = v6;
  return EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
