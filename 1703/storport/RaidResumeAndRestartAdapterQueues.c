/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x1C002F784
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C870 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1)
{
  signed __int32 v2; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C00551F8 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v2 )
    RaidAdapterRestartQueues(a1);
  return (unsigned int)v2;
}
