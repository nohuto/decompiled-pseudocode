/*
 * XREFs of Template_hzr0 @ 0x1401F81BC
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x1406948A0 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_hzr0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int16 v10; // [rsp+98h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (ULONGLONG)&v10;
  v7 = a5;
  *(_QWORD *)&v6.Size = 2LL;
  v8 = 2 * a4;
  v9 = 0;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_DeviceReset_Start, 0LL, 0, 0LL, 0LL, 2u, &v6);
}
