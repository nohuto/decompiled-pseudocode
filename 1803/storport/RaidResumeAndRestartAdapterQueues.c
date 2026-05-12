/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x1C002BB14
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterResetBus @ 0x1C00277B8 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028680 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1C003B464 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C7A0 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidAdapterRestartQueues @ 0x1C000EF18 (RaidAdapterRestartQueues.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1)
{
  signed __int32 v2; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v2 )
    RaidAdapterRestartQueues(a1);
  return (unsigned int)v2;
}
