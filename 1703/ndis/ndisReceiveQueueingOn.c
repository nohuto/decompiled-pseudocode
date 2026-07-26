/*
 * XREFs of ndisReceiveQueueingOn @ 0x1C0050CE4
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00207E0 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C0050474 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C0051040 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisReceiveQueueingOn(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2673) = 0;
  *(_QWORD *)(a1 + 2144) = ndisMIndicateReceiveNblsWithThrottling;
  *(_QWORD *)(a1 + 3168) = WPP_MAIN_CB.DeviceQueue.Lock;
  ++*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
  WPP_MAIN_CB.DeviceQueue.Lock = a1;
  result = (unsigned int)(*(_BYTE *)(a1 + 3236) == 1) + 1;
  *(_DWORD *)(a1 + 3176) = result;
  if ( BYTE2(dword_1C0093FD8) )
  {
    LOBYTE(a2) = 1;
    return ndisTracePeriodicRcvOnOff(
             a1,
             a2,
             *(unsigned int *)(&WPP_MAIN_CB.DeviceQueue.Size + 1),
             *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
  }
  return result;
}
