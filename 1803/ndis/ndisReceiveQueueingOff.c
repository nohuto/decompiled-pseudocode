/*
 * XREFs of ndisReceiveQueueingOff @ 0x1C0050188
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0005358 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004F990 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C0050558 (ndisTracePeriodicRcvOnOff.c)
 */

bool __fastcall ndisReceiveQueueingOff(__int64 a1)
{
  char v2; // al
  void (__fastcall *v3)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, int); // rcx
  bool v4; // zf
  bool result; // al

  *(_DWORD *)(a1 + 3176) = 0;
  if ( BYTE2(dword_1C009AF18) )
    ndisTracePeriodicRcvOnOff(a1, 0LL, 0LL, 0LL);
  v2 = *(_BYTE *)(a1 + 1995);
  v3 = ndisMDispatchReceiveNetBufferListsWithLock;
  v4 = v2 == 0;
  if ( !v2 )
    v3 = (void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, int))ndisMDispatchReceiveNetBufferLists;
  result = v2 == 0;
  *(_BYTE *)(a1 + 2673) = v4;
  *(_QWORD *)(a1 + 2144) = v3;
  *(_QWORD *)(a1 + 2152) = v3;
  --dword_1C0098DE0;
  return result;
}
