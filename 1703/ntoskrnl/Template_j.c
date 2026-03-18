/*
 * XREFs of Template_j @ 0x1401F8DC8
 * Callers:
 *     PpCheckInDriverDatabase @ 0x1404B3D84 (PpCheckInDriverDatabase.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_j(__int64 a1, __int64 a2, __int64 a3, ULONGLONG a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-28h] BYREF

  v5.Ptr = a4;
  *(_QWORD *)&v5.Size = 16LL;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_Driver_Blocked, 0LL, 0, 0LL, 0LL, 1u, &v5);
}
