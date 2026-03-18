/*
 * XREFs of Template_j @ 0x1C0034148
 * Callers:
 *     ?VmBusQueryEtwSession@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E920 (-VmBusQueryEtwSession@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0196A04 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_j(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ULONGLONG a4)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a4;
  UserData.Size = 16;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 1u, &UserData);
}
