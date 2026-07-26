/*
 * XREFs of ndisReceiveQueueingOff @ 0x1C0050C74
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00207E0 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C0050474 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C0051040 (ndisTracePeriodicRcvOnOff.c)
 */

void *__fastcall ndisReceiveQueueingOff(__int64 a1)
{
  void *result; // rax

  *(_DWORD *)(a1 + 3176) = 0;
  if ( BYTE2(dword_1C0093FD8) )
    ndisTracePeriodicRcvOnOff(a1, 0LL, 0LL, 0LL);
  if ( *(_BYTE *)(a1 + 1995) )
  {
    *(_BYTE *)(a1 + 2673) = 0;
    result = ndisMDispatchReceiveNetBufferListsWithLock;
  }
  else
  {
    *(_BYTE *)(a1 + 2673) = 1;
    result = ndisMDispatchReceiveNetBufferLists;
  }
  *(_QWORD *)(a1 + 2152) = result;
  *(_QWORD *)(a1 + 2144) = result;
  --*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
  return result;
}
