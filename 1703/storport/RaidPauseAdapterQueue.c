/*
 * XREFs of RaidPauseAdapterQueue @ 0x1C0011DCC
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0011E30 (RaidAdapterPowerDownDevice.c)
 *     StorPortAdapterIdleCondition @ 0x1C001CED0 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x1C00329A0 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C0032F20 (StorPortPause.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0064338 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C00551F8 & 0x200) != 0 )
    DbgLogRequest(a1, 6, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}
