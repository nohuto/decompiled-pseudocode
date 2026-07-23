/*
 * XREFs of TpAllocPool @ 0x180057270
 * Callers:
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 * Callees:
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  __int64 v2; // r8

  if ( PoolReturn )
  {
    if ( !Reserved )
    {
      Reserved = NtCurrentPeb()->Ldr;
      if ( !*((_BYTE *)Reserved + 72) )
        return sub_180057618(PoolReturn, 0LL);
    }
  }
  sub_1801086C8(PoolReturn, Reserved, v2);
  return -1073741811;
}
