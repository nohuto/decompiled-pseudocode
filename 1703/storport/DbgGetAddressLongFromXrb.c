/*
 * XREFs of DbgGetAddressLongFromXrb @ 0x1C002B2A0
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A340 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0039488 (RaidCompleteMiniportRequestCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgGetAddressLongFromXrb(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 224);
  if ( result )
    return (unsigned __int8)BYTE2(*(_DWORD *)(result + 88)) | ((((unsigned __int8)*(_DWORD *)(result + 88) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(result + 88))) << 8);
  return result;
}
