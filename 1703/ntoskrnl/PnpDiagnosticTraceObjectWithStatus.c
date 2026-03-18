/*
 * XREFs of PnpDiagnosticTraceObjectWithStatus @ 0x140036914
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140036870 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140457020 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbLoadNode @ 0x140489A54 (PiDrvDbLoadNode.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PnpRebalance @ 0x1406A9D3C (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x1407F99D8 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObjectWithStatus(
        PCEVENT_DESCRIPTOR EventDescriptor,
        unsigned __int16 *a2,
        int a3)
{
  REGHANDLE v3; // rbx
  int v7; // ecx
  __int16 v8; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-1h] BYREF
  __int64 v10; // [rsp+58h] [rbp+Fh]
  int v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+64h] [rbp+1Bh]
  int *v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+74h] [rbp+2Bh]
  int v16; // [rsp+C0h] [rbp+77h] BYREF

  v16 = a3;
  v3 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v7 = *a2;
  UserData.Reserved = 0;
  v12 = 0;
  v15 = 0;
  v8 = (unsigned __int16)v7 >> 1;
  UserData.Ptr = (ULONGLONG)&v8;
  v10 = *((_QWORD *)a2 + 1);
  v13 = &v16;
  v11 = v7;
  UserData.Size = 2;
  v14 = 4;
  return EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
}
