/*
 * XREFs of PortpEnableCancel @ 0x1C00482D4
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0069B00 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C006A0A4 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortpEnableCancel(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 68) )
    return 3221225760LL;
  if ( *(_UNKNOWN **)(a2 + 32) != &PortpSyncCompletion )
    *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL) = a2;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PortpCancelRoutine);
  return 259LL;
}
