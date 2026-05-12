/*
 * XREFs of RaidUnitCancelPendingRequests @ 0x1C003C82C
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C006566C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidRemoveIoQueue @ 0x1C0031B38 (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C00393F4 (RaidCancelIrp.c)
 */

__int64 *__fastcall RaidUnitCancelPendingRequests(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *result; // rax

  v2 = a1 + 384;
  while ( 1 )
  {
    result = RaidRemoveIoQueue(v2);
    if ( !result )
      break;
    RaidCancelIrp(a1, 8, (__int64)result);
  }
  return result;
}
