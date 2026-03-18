/*
 * XREFs of Template_q @ 0x1401FAC14
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x1404E34FC (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceIdList @ 0x140558CB8 (PiCMGetDeviceIdList.c)
 *     PnpCallAddDevice @ 0x1405C6CE0 (PnpCallAddDevice.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_q(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+88h] [rbp+20h] BYREF

  v6 = a4;
  v5.Ptr = (ULONGLONG)&v6;
  *(_QWORD *)&v5.Size = 4LL;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0, 0LL, 0LL, 1u, &v5);
}
