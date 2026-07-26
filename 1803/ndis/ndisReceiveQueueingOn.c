/*
 * XREFs of ndisReceiveQueueingOn @ 0x1C00501F4
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0005358 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004F990 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C0050558 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisReceiveQueueingOn(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2673) = 0;
  *(_QWORD *)(a1 + 2144) = ndisMIndicateReceiveNblsWithThrottling;
  *(_QWORD *)(a1 + 3168) = qword_1C0098DD8;
  ++dword_1C0098DE0;
  qword_1C0098DD8 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  result = (unsigned int)(*(_BYTE *)(a1 + 3236) == 1) + 1;
  *(_DWORD *)(a1 + 3176) = result;
  if ( BYTE2(dword_1C009AF18) )
  {
    LOBYTE(a2) = 1;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
             a1,
             a2,
             (unsigned int)dword_1C0098DC4,
             (LARGE_INTEGER)DueTime.QuadPart);
  }
  return result;
}
