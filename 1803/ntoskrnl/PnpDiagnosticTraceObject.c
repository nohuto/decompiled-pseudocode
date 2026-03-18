/*
 * XREFs of PnpDiagnosticTraceObject @ 0x1400C8D00
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1401466F0 (PnpDeviceCompletionRoutine.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140578620 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405786F0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1405D5A08 (PnpStartDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14073BAFC (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRebalance @ 0x14073E380 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x1408B65A4 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x1408C0D20 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x1408C14D0 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  REGHANDLE v2; // rbx
  int v5; // r8d
  __int16 v7; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v5 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v7 = (unsigned __int16)v5 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  UserData.Size = 2;
  v10 = v5;
  return EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
