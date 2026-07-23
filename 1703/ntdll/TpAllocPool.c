/*
 * XREFs of TpAllocPool @ 0x180010280
 * Callers:
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 * Callees:
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  if ( PoolReturn )
  {
    if ( !Reserved )
    {
      Reserved = NtCurrentPeb()->Ldr;
      if ( !*((_BYTE *)Reserved + 72) )
        return sub_1800115C8(PoolReturn, 0LL);
    }
  }
  sub_1801058B8(PoolReturn, Reserved);
  return -1073741811;
}
